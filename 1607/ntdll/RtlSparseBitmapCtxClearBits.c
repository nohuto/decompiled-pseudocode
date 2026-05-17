/*
 * XREFs of RtlSparseBitmapCtxClearBits @ 0x18004F750
 * Callers:
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAC4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 */

__int64 __fastcall RtlSparseBitmapCtxClearBits(int a1, int a2, int a3, int a4, __int64 a5)
{
  return RtlpSparseBitmapCtxUpdateBitRanges(a1, a2, a3, a4, a5, 0, 0LL);
}
