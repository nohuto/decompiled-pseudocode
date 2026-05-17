/*
 * XREFs of RtlpSparseBitmapCtxCountRangeBits @ 0x1800F8820
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBits @ 0x180055278 (RtlpSparseBitmapCtxUpdateBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSparseBitmapCtxCountRangeBits(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rcx

  v5 = a2 + 8;
  if ( a5 )
    return RtlNumberOfSetBitsInRange(v5, a3, a4);
  else
    return RtlNumberOfClearBitsInRange(v5, a3, a4);
}
