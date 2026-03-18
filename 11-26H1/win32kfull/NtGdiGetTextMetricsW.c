/*
 * XREFs of NtGdiGetTextMetricsW @ 0x1402811C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x14010DF4C (-GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, void *a2, unsigned int a3)
{
  unsigned int TextMetricsW; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  _BYTE v10[64]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v11[14]; // [rsp+70h] [rbp-E8h] BYREF
  tagTEXTMETRICW v12; // [rsp+E0h] [rbp-78h] BYREF

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset_0(&v12, 0, 0x44uLL);
    SessionState = W32GetSessionState(v7, v6);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v10,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v10) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
      if ( v11[0] )
        TextMetricsW = GrepGetTextMetricsW((struct DCOBJ *)v11, &v12);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    }
    if ( TextMetricsW )
      GreProbeAndWriteToUntrustedVa(a2, 0x44uLL, &v12, 0x44uLL, 4uLL);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  }
  return TextMetricsW;
}
