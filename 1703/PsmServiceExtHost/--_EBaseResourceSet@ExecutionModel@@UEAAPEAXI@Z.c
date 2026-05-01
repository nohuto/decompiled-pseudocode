/*
 * XREFs of ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180035180
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x18000F018 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::`vector deleting destructor'(
        ExecutionModel::BaseResourceSet *this,
        char a2)
{
  ExecutionModel::BaseResourceSet::~BaseResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
