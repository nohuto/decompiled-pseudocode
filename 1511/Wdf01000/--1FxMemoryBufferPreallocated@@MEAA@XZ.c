/*
 * XREFs of ??1FxMemoryBufferPreallocated@@MEAA@XZ @ 0x1C00027C4
 * Callers:
 *     ??_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z @ 0x1C0035970 (--_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C006CBD8 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C007AC40 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxMemoryBufferPreallocated::~FxMemoryBufferPreallocated(FxMemoryBufferPreallocated *this)
{
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferPreallocated_vtbl *)&FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
}
