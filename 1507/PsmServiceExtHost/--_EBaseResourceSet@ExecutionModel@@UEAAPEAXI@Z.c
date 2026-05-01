/*
 * XREFs of ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18003EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x18002E6E8 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 */

void **__fastcall ExecutionModel::BaseResourceSet::`vector deleting destructor'(void **this, char a2)
{
  ExecutionModel::BaseResourceSet::~BaseResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
