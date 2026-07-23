/*
 * XREFs of RtlpSparseBitmapCtxCountRangeBits @ 0x140273318
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140273CF0 (RtlpSparseBitmapCtxUpdateBits.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall RtlpSparseBitmapCtxCountRangeBits(__int64 a1, __int64 a2, ULONG a3, ULONG a4, int a5)
{
  _RTL_BITMAP *v5; // rcx

  v5 = (_RTL_BITMAP *)(a2 + 8);
  if ( a5 )
    return RtlNumberOfSetBitsInRange(v5, a3, a4);
  else
    return RtlNumberOfClearBitsInRange(v5, a3, a4);
}
