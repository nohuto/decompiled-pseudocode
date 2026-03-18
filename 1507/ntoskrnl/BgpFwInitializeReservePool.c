/*
 * XREFs of BgpFwInitializeReservePool @ 0x14075CC38
 * Callers:
 *     BgpFwReservePoolSwap @ 0x14075C158 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x14075F6E8 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_1403539B8 = a1;
  dword_1403539D4 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
