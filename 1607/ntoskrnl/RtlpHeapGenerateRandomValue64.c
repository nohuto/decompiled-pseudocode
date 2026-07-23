/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x14021371C
 * Callers:
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  return v0 | (unsigned int)ExGenRandom(1);
}
