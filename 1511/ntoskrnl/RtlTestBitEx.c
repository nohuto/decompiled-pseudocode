/*
 * XREFs of RtlTestBitEx @ 0x1401F90C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestBitEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 BitNumber)
{
  return _bittest64((const signed __int64 *)BitMapHeader->Buffer, BitNumber);
}
