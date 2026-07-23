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
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  BaseAddress = (PVOID)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  RtlpSparseBitmapCtxUpdateBitRanges(
    (__int64)&RtlpHpLargeAllocationBitmap,
    (unsigned __int64)BaseAddress >> 16,
    1uLL,
    0LL,
    0LL,
    0);
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeRelease(a2, (__int64)BaseAddress, RegionSize);
  return RtlpHpMetadataFree(a1);
}
