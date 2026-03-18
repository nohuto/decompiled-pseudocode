/*
 * XREFs of ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C007B800
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C0011B2C (--1FxMemoryBufferFromLookaside@@MEAA@XZ.c)
 */

FxMemoryBufferFromPoolLookaside *__fastcall FxMemoryBufferFromLookaside::`vector deleting destructor'(
        FxMemoryBufferFromPoolLookaside *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxMemoryBufferFromPoolLookaside *v5; // rcx

  v3 = a2;
  FxMemoryBufferFromLookaside::~FxMemoryBufferFromLookaside(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxMemoryBufferFromPoolLookaside *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
