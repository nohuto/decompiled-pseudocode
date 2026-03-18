/*
 * XREFs of GreGetTextMetricsW @ 0x140122B58
 * Callers:
 *     _GetTextMetricsW @ 0x140122AE8 (_GetTextMetricsW.c)
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x14010DF4C (-GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, struct tagTEXTMETRICW *a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned int TextMetricsW; // ebx
  _BYTE v8[64]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v9[14]; // [rsp+60h] [rbp-78h] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v8,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  TextMetricsW = 0;
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v8) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
    if ( v9[0] )
      TextMetricsW = GrepGetTextMetricsW((struct DCOBJ *)v9, a2);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v8);
    return TextMetricsW;
  }
  else
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v8);
    return 0LL;
  }
}
