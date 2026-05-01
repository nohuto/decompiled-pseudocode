/*
 * XREFs of ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180037060
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x180011624 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 */

void **__fastcall ExecutionModel::BaseResourceSet::`vector deleting destructor'(void **this, char a2)
{
  ExecutionModel::BaseResourceSet::~BaseResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
