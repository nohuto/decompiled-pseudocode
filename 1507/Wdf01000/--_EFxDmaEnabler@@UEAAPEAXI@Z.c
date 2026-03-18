/*
 * XREFs of ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C0064BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxDmaEnabler *__fastcall FxDmaEnabler::`vector deleting destructor'(FxDmaEnabler *this, char a2, unsigned int a3)
{
  char v5; // al
  FxDmaEnabler *v6; // rcx

  this->__vftable = (FxDmaEnabler_vtbl *)&FxDmaEnabler::`vftable';
  v5 = *((_BYTE *)this + 380);
  if ( (v5 & 0x20) != 0 )
  {
    if ( (v5 & 8) != 0 )
    {
      ExDeleteNPagedLookasideList(&this->m_SGList.ScatterGatherProfile.Lookaside);
    }
    else if ( (v5 & 4) == 0 )
    {
      ExFreePoolWithTag(this->m_SGList.ScatterGatherProfile.Lookaside.L.SingleListHead.Next, 0);
    }
    *((_BYTE *)this + 380) &= ~0x20u;
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxDmaEnabler *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree(v6);
  }
  return this;
}
