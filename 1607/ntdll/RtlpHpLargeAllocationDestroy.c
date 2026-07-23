/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x1800FBEA4
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlSparseBitmapCtxClearBits @ 0x18004F740 (RtlSparseBitmapCtxClearBits.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = (PVOID)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  RtlSparseBitmapCtxClearBits((int)&RtlpHpLargeAllocationBitmap, (unsigned __int64)BaseAddress >> 16, 1, 0, 0LL);
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeRelease(a2, (__int64)BaseAddress, RegionSize);
  return RtlpHpMetadataFree(a1);
}
