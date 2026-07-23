/*
 * XREFs of RtlSparseBitmapCtxSetBitsEx @ 0x180100870
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAB4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 */

__int64 __fastcall RtlSparseBitmapCtxSetBitsEx(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  return RtlpSparseBitmapCtxUpdateBitRanges(a1, a2, a3, a4, a5, 1, a6);
}
