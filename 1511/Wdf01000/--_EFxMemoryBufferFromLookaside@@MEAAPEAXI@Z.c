/*
 * XREFs of ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C006D240
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C0004064 (--1FxMemoryBufferFromLookaside@@MEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxMemoryBufferFromPoolLookaside *__fastcall FxMemoryBufferFromLookaside::`vector deleting destructor'(
        FxMemoryBufferFromPoolLookaside *this,
        char a2)
{
  FxMemoryBufferFromPoolLookaside *v4; // rcx

  FxMemoryBufferFromLookaside::~FxMemoryBufferFromLookaside(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxMemoryBufferFromPoolLookaside *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
