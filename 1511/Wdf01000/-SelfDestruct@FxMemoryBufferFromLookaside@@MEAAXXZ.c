/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C00040F0
 * Callers:
 *     ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x1C006D280 (-SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ.c)
 * Callees:
 *     ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C0004064 (--1FxMemoryBufferFromLookaside@@MEAA@XZ.c)
 */

void __fastcall FxMemoryBufferFromLookaside::SelfDestruct(FxMemoryBufferFromLookaside *this)
{
  FxLookasideList *m_pLookaside; // rbx

  FxMemoryBufferFromLookaside::~FxMemoryBufferFromLookaside(this);
  m_pLookaside = this->m_pLookaside;
  m_pLookaside->Reclaim(m_pLookaside, this);
  m_pLookaside->Release(
    m_pLookaside,
    this,
    226,
    "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}
