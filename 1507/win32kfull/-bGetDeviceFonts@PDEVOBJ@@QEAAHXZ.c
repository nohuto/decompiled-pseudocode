/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0126390
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C002FB84 (GreGetTextFaceW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0038848 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C00DD3C4 (GreGetCharSet.c)
 *     GreEnumFonts @ 0x1C00E5F4C (GreEnumFonts.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027FB10 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  unsigned int v2; // eax
  struct PFT *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = PDEVOBJ::cFonts(this);
  if ( v2 )
  {
    v4 = gpPFTDevice;
    DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v4, this, v2);
  }
  return 1LL;
}
