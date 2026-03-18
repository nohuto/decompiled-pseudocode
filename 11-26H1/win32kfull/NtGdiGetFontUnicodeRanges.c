/*
 * XREFs of NtGdiGetFontUnicodeRanges @ 0x140280260
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z @ 0x140206DE8 (-GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetFontUnicodeRanges(HDC a1, void *a2)
{
  __int64 SessionState; // rax
  DWORD FontUnicodeRanges; // ebx
  struct tagGLYPHSET *v6; // rax
  struct tagGLYPHSET *v7; // rdi
  int v8; // eax
  _BYTE v10[64]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v11[14]; // [rsp+70h] [rbp-78h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v10,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v10) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
    if ( v11[0] )
      FontUnicodeRanges = GrepGetFontUnicodeRanges((struct DCOBJ *)v11, 0LL);
    else
      FontUnicodeRanges = 0;
    if ( FontUnicodeRanges && a2 )
    {
      v6 = (struct tagGLYPHSET *)AllocFreeTmpBuffer(FontUnicodeRanges);
      v7 = v6;
      if ( v6 )
      {
        v6->cbThis = FontUnicodeRanges;
        v8 = GrepGetFontUnicodeRanges((struct DCOBJ *)v11, v6);
        if ( v8 && FontUnicodeRanges == v8 )
          GreProbeAndWriteToUntrustedVa(a2, FontUnicodeRanges, v7, FontUnicodeRanges, 1uLL);
        else
          FontUnicodeRanges = 0;
        FreeTmpBuffer(v7);
      }
      else
      {
        FontUnicodeRanges = 0;
      }
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  }
  else
  {
    FontUnicodeRanges = 0;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  return FontUnicodeRanges;
}
