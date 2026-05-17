/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x180035950
 * Callers:
 *     RtlpHpSegHeapAllocate @ 0x180003BE8 (RtlpHpSegHeapAllocate.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x180007658 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x180038310 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F0798 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180034CA8 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
