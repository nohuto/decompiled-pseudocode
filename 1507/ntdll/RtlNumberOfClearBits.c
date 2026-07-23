/*
 * XREFs of RtlNumberOfClearBits @ 0x1800D3140
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800D3190 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
