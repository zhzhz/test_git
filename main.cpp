#include "mainwindow.h"
#include <QApplication>
#include "ab.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    AB ab;
    return a.exec();
}
