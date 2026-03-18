/*
 * XREFs of NtGdiFontIsLinked @ 0x14027F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z @ 0x1402366CC (-GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned int IsLinked; // ebx
  _BYTE v6[64]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v7[15]; // [rsp+60h] [rbp-78h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v6,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  IsLinked = 0;
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v6) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
    if ( v7[0] )
      IsLinked = GrepFontIsLinked((struct DCOBJ *)v7);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v6);
    return IsLinked;
  }
  else
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v6);
    return 0LL;
  }
}
