/*
 * XREFs of BgpFwInitializeReservePool @ 0x1406D9BF0
 * Callers:
 *     BgpFwReservePoolSwap @ 0x1406D931C (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1406DC6A0 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140305C38 = a1;
  dword_140305C54 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
