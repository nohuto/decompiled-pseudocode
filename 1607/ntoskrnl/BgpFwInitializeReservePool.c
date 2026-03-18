/*
 * XREFs of BgpFwInitializeReservePool @ 0x1407257D8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x140725168 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008487C (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140328B38 = a1;
  dword_140328B68 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
