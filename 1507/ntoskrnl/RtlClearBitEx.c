/*
 * XREFs of RtlClearBitEx @ 0x140246CF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearBitEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 BitNumber)
{
  _bittestandreset64((signed __int64 *)BitMapHeader->Buffer, BitNumber);
}
