/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1401F8E24
 * Callers:
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x140223440 (RtlpSparseBitmapCtxCountRangeBits.c)
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x1401F8E48 (RtlNumberOfSetBitsInRange.c)
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
