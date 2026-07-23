/*
 * XREFs of RtlInitializeBitMapEx @ 0x1401F8B8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeBitMapEx(PRTL_BITMAP_EX BitMapHeader, PULONG64 BitMapBuffer, ULONG64 SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
