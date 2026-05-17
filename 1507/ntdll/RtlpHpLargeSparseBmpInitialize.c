/*
 * XREFs of RtlpHpLargeSparseBmpInitialize @ 0x1800F0544
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x180098540 (memset.c)
 *     RtlSparseBitmapCtxStart @ 0x1800F8724 (RtlSparseBitmapCtxStart.c)
 */

__int64 RtlpHpLargeSparseBmpInitialize()
{
  __int64 v0; // rcx
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, 0x30uLL);
  v2[1] = 0x400000000000LL;
  LODWORD(v2[2]) = -1;
  v2[0] = 0x80000000LL;
  v2[3] = RtlpHpLargeSparseBmpAlloc;
  v2[4] = RtlpHpVirtTableFreeRoutine;
  LODWORD(v2[5]) = v2[5] & 0xFFFFFFFC | 2;
  memset(&RtlpHpLargeAllocationBitmap, 0, 0x50uLL);
  RtlpHpLargeAllocationBitmap = 0LL;
  return RtlSparseBitmapCtxStart(v0, v2);
}
