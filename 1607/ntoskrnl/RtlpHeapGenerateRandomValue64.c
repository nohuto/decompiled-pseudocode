/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1402138F0
 * Callers:
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  return v0 | (unsigned int)ExGenRandom(1);
}
