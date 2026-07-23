/*
 * XREFs of RtlNumberOfClearBits @ 0x1800E4750
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800E47A0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
