/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x1800F2380
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18003FEB0 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpHpMetadataFree @ 0x18005A5C4 (RtlpHpMetadataFree.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F0EC4 (RtlpHeapLogRangeRelease.c)
 */

_BOOL8 __fastcall RtlpHpLargeAllocationDestroy(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v5; // [rsp+58h] [rbp+10h]

  v5 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  RtlpSparseBitmapCtxUpdateBitRanges((__int64)&RtlpHpLargeAllocationBitmap, v5 >> 16, 1uLL, 0LL, 0LL, 0);
  ZwFreeVirtualMemory();
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeRelease(a2, v5, 0LL);
  return RtlpHpMetadataFree(a1);
}
