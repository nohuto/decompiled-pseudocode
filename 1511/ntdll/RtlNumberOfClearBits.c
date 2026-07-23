/*
 * XREFs of RtlNumberOfClearBits @ 0x18008B230
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x18008B250 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
