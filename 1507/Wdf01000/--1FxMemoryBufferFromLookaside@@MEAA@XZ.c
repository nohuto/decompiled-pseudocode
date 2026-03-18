/*
 * XREFs of ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C00792E4
 * Callers:
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C00781A0 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C0079330 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxMemoryBufferFromLookaside::~FxMemoryBufferFromLookaside(
        FxMemoryBufferFromLookaside *this,
        unsigned int a2,
        unsigned int a3)
{
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
}
