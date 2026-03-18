/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C001CB54
 * Callers:
 *     GreEnumFonts @ 0x1C001743C (GreEnumFonts.c)
 *     GreGetTextFaceW @ 0x1C001B3B4 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharSet @ 0x1C00E1358 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00E8DF8 (GreGetOutlineTextMetricsInternalW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027F4D0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C025D314 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  __int64 v2; // rcx
  signed __int32 v3; // ett
  struct PFT *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  _m_prefetchw((const void *)(v2 + 56));
  do
    v3 = *(_DWORD *)(v2 + 56);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 56), v3 | 0x40, v3) );
  PDEVOBJ::cFonts(this);
  if ( *(_DWORD *)(*(_QWORD *)this + 2128LL) )
  {
    v5 = gpPFTDevice;
    if ( !(unsigned int)DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v5, this) )
      *(_DWORD *)(*(_QWORD *)this + 2128LL) = 0;
  }
  return 1LL;
}
