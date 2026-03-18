/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C0011BC0
 * Callers:
 *     ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x1C007B840 (-SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ.c)
 * Callees:
 *     ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C0011B2C (--1FxMemoryBufferFromLookaside@@MEAA@XZ.c)
 */

void __fastcall FxMemoryBufferFromLookaside::SelfDestruct(
        FxMemoryBufferFromLookaside *this,
        unsigned int a2,
        unsigned int a3)
{
  FxLookasideList *m_pLookaside; // rbx

  FxMemoryBufferFromLookaside::~FxMemoryBufferFromLookaside(this, a2, a3);
  m_pLookaside = this->m_pLookaside;
  m_pLookaside->Reclaim(m_pLookaside, this);
  m_pLookaside->Release(
    m_pLookaside,
    this,
    226,
    "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}
