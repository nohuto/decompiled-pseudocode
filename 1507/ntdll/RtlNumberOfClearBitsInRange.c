/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1800D3160
 * Callers:
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x1800F8820 (RtlpSparseBitmapCtxCountRangeBits.c)
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x1800D3340 (RtlNumberOfSetBitsInRange.c)
 */

ULONG __cdecl RtlNumberOfClearBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // eax

  v4 = RtlNumberOfSetBitsInRange(BitMapHeader, StartingIndex, Length);
  if ( v4 == -1 )
    return -1;
  else
    return Length - v4;
}
