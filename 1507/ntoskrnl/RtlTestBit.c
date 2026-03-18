/*
 * XREFs of RtlTestBit @ 0x14012BFD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTestBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  return _bittest((const signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
