/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x18005802C
 * Callers:
 *     RtlpInitializeLowFragHeapManager @ 0x18004BB18 (RtlpInitializeLowFragHeapManager.c)
 *     RtlInitializeHeapManager @ 0x18004BCAC (RtlInitializeHeapManager.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x180057F88 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x180057FE4 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpHpSegHeapAllocate @ 0x180059598 (RtlpHpSegHeapAllocate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180058680 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
