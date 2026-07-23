/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x180041760
 * Callers:
 *     RtlpCreateHeapEncoding @ 0x18002B964 (RtlpCreateHeapEncoding.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18003F30C (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18005D588 (RtlpInitializeLowFragHeapManager.c)
 *     RtlInitializeHeapManager @ 0x18005D71C (RtlInitializeHeapManager.c)
 *     RtlpHpSegHeapAllocate @ 0x18007F918 (RtlpHpSegHeapAllocate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180042338 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
