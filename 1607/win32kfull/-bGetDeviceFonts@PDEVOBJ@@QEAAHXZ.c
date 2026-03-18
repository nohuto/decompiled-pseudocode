/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C002A12C
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0012A48 (GreGetOutlineTextMetricsInternalW.c)
 *     GreEnumFonts @ 0x1C0021B50 (GreEnumFonts.c)
 *     GreGetTextFaceW @ 0x1C0023264 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C0023BD8 (GreGetCharSet.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027D960 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025A6C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
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
