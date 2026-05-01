/*
 * XREFs of ??_GApplicationPackageInfo@ExecutionModel@@UEAAPEAXI@Z @ 0x18001BA50
 * Callers:
 *     ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0 (-Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??1ApplicationPackageInfo@ExecutionModel@@UEAA@XZ @ 0x18001B9F4 (--1ApplicationPackageInfo@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::ApplicationPackageInfo *__fastcall ExecutionModel::ApplicationPackageInfo::`scalar deleting destructor'(
        ExecutionModel::ApplicationPackageInfo *this,
        char a2)
{
  ExecutionModel::ApplicationPackageInfo::~ApplicationPackageInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
