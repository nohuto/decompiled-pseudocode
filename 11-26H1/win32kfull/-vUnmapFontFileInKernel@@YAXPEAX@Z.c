/*
 * XREFs of ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1400CEF7C
 * Callers:
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     UnmapPrintKView @ 0x1400FD6F0 (UnmapPrintKView.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x140327EBC (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x140328130 (-vClosePrintKView@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall vUnmapFontFileInKernel(void *a1)
{
  _QWORD v1[4]; // [rsp+20h] [rbp-38h] BYREF
  int v2; // [rsp+40h] [rbp-18h]

  v1[2] = a1;
  v1[1] = 0LL;
  v1[3] = 0LL;
  v1[0] = 0LL;
  v2 = 3;
  Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v1);
  if ( v2 != 6 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v1);
}
