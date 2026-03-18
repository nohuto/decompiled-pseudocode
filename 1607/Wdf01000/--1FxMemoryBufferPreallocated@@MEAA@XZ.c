/*
 * XREFs of ??1FxMemoryBufferPreallocated@@MEAA@XZ @ 0x1C0011F54
 * Callers:
 *     ??_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z @ 0x1C003A5A0 (--_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007B2FC (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C008AD50 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxMemoryBufferPreallocated::~FxMemoryBufferPreallocated(
        FxMemoryBufferPreallocated *this,
        unsigned int a2,
        unsigned int a3)
{
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferPreallocated_vtbl *)&FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferPreallocated::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
}
