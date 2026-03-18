/*
 * XREFs of ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0009840
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxDisposeList *__fastcall FxDisposeList::`scalar deleting destructor'(FxDisposeList *this, char a2)
{
  FxDisposeList *v4; // rcx

  this->__vftable = (FxDisposeList_vtbl *)&FxObject::`vftable'.FxPoolTrackingOn;
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDisposeList *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
