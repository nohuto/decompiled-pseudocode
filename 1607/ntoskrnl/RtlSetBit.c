/*
 * XREFs of RtlSetBit @ 0x1400A7D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _bittestandset((signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
