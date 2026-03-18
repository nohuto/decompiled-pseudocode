/*
 * XREFs of ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0021FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C00249E4 (--1FxCollection@@UEAA@XZ.c)
 */

FxIoResReqList *__fastcall FxIoResList::`vector deleting destructor'(FxIoResReqList *this, char a2)
{
  FxIoResReqList *v4; // rcx

  FxCollection::~FxCollection(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxIoResReqList *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
