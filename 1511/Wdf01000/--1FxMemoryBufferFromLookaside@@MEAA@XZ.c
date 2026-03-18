/*
 * XREFs of ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C0004064
 * Callers:
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C00040F0 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C006D240 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxMemoryBufferFromLookaside::~FxMemoryBufferFromLookaside(FxMemoryBufferFromLookaside *this)
{
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
}
