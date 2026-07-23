/*
 * XREFs of BgpFwInitializeReservePool @ 0x1407257D8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x140725168 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140328B78 = a1;
  dword_140328BA8 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
