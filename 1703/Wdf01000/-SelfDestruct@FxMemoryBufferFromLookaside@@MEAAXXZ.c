/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C0005520
 * Callers:
 *     ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x1C007FA20 (-SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxMemoryBufferFromLookaside::SelfDestruct(FxMemoryBufferFromLookaside *this)
{
  FxLookasideList *m_pLookaside; // rbx

  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  m_pLookaside = this->m_pLookaside;
  m_pLookaside->Reclaim(m_pLookaside, this);
  m_pLookaside->Release(
    m_pLookaside,
    this,
    226,
    "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}
