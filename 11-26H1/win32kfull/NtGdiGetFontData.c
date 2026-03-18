/*
 * XREFs of NtGdiGetFontData @ 0x140280030
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1401ED0AC (-GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, __int64 a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned int v7; // r12d
  unsigned __int8 *v9; // rdi
  unsigned int FontData; // ebx
  __int64 SessionState; // rax
  __int64 v12; // rax
  _BYTE v14[56]; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v15[14]; // [rsp+70h] [rbp-88h] BYREF

  v7 = a2;
  v9 = 0LL;
  FontData = -1;
  if ( !a5 )
  {
    SessionState = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v14,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v14) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
      if ( v15[0] )
      {
        FontData = GrepGetFontData((struct DCOBJ *)v15, v7, a3, 0LL, 0);
      }
      else
      {
        EngSetLastError(6u);
        FontData = -1;
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
    }
    else
    {
      EngSetLastError(0x15u);
      FontData = -1;
    }
LABEL_23:
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
    return FontData;
  }
  if ( a5 <= 0x2710000 )
    v9 = (unsigned __int8 *)AllocFreeTmpBuffer(a5);
  if ( v9 )
  {
    v12 = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v14,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v12 + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v14) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
      if ( v15[0] )
      {
        FontData = GrepGetFontData((struct DCOBJ *)v15, v7, a3, v9, a5);
      }
      else
      {
        EngSetLastError(6u);
        FontData = -1;
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
    }
    else
    {
      EngSetLastError(0x15u);
      FontData = -1;
    }
    if ( FontData != -1 )
    {
      if ( FontData > a5 )
        FontData = -1;
      if ( FontData != -1 )
        GreProbeAndWriteToUntrustedVa(a4, FontData, v9, FontData, 1uLL);
    }
    FreeTmpBuffer(v9);
    goto LABEL_23;
  }
  return FontData;
}
