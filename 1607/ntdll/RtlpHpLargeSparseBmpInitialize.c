/*
 * XREFs of RtlpHpLargeSparseBmpInitialize @ 0x18005D85C
 * Callers:
 *     RtlInitializeHeapManager @ 0x18005D71C (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlSparseBitmapCtxStart @ 0x18005D8F0 (RtlSparseBitmapCtxStart.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 RtlpHpLargeSparseBmpInitialize()
{
  _QWORD v1[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, 0x30uLL);
  v1[1] = 0x400000000000LL;
  LODWORD(v1[2]) = -1;
  v1[0] = 0x80000000LL;
  v1[3] = RtlpHpLargeSparseBmpAlloc;
  v1[4] = RtlpHpStackDbFreeRoutine;
  LODWORD(v1[5]) = v1[5] & 0xFFFFFFFC | 2;
  memset(&RtlpHpLargeAllocationBitmap, 0, 0x50uLL);
  RtlpHpLargeAllocationBitmap = 0LL;
  return RtlSparseBitmapCtxStart(&RtlpHpLargeAllocationBitmap, v1);
}
