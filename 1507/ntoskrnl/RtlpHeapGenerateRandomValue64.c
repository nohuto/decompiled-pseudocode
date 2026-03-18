/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140248618
 * Callers:
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  return v0 | (unsigned int)ExGenRandom(1);
}
