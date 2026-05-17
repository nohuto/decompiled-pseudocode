/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x1800FBEA4
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180052528 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlSparseBitmapCtxClearBits @ 0x18004F750 (RtlSparseBitmapCtxClearBits.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v5; // [rsp+48h] [rbp+10h]

  v5 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  RtlSparseBitmapCtxClearBits((int)RtlpHpLargeAllocationBitmap, v5 >> 16, 1, 0, 0LL);
  ZwFreeVirtualMemory();
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeRelease(a2, v5, 0LL);
  return RtlpHpMetadataFree(a1);
}
