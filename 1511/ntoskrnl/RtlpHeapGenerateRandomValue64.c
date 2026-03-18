/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1401F95C4
 * Callers:
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  return v0 | (unsigned int)ExGenRandom(1);
}
