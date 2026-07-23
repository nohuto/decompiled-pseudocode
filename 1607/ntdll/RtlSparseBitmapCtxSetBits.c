/*
 * XREFs of RtlSparseBitmapCtxSetBits @ 0x18004F9D0
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAB4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 */

__int64 __fastcall RtlSparseBitmapCtxSetBits(int a1, int a2, int a3, int a4, __int64 a5)
{
  return RtlpSparseBitmapCtxUpdateBitRanges(a1, a2, a3, a4, a5, 1, 0LL);
}
