/*
 * XREFs of ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C007AC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxMemoryBufferPreallocated@@MEAA@XZ @ 0x1C00027C4 (--1FxMemoryBufferPreallocated@@MEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxUsbUrb *__fastcall FxUsbUrb::`vector deleting destructor'(FxUsbUrb *this, char a2)
{
  FxUsbUrb *v4; // rcx

  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)&FxUsbUrb::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxUsbUrb::`vftable'{for `IFxMemory'};
  FxMemoryBufferPreallocated::~FxMemoryBufferPreallocated(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxUsbUrb *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
