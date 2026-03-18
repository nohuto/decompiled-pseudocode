/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x14027D690
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, __int64 a3)
{
  __int64 v3; // r14
  int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // ecx
  __int64 SessionState; // rax
  _BYTE v13[56]; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v14[14]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v15; // [rsp+108h] [rbp+20h] BYREF

  v3 = (int)a3;
  v6 = 0;
  v7 = 0LL;
  v8 = (_DWORD)a3 == 0;
  if ( (int)a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCNOZ(8 * (int)a3, 1684629063LL, a3);
      v6 = (v7 != 0LL) - 1;
      goto LABEL_6;
    }
    v8 = (_DWORD)a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    v6 = -1;
    goto LABEL_29;
  }
  if ( (int)a3 < 0 && a2 )
    v6 = -1;
LABEL_6:
  if ( v6 != -1 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
    if ( v14[0] )
    {
      SessionState = W32GetSessionState(v10, v9);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v13,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
      if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v13) )
      {
        v15 = 0LL;
        RFONTOBJ::vInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v14, 0, 2u);
        v6 = v15 ? RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v15, (struct DCOBJ *)v14, v7, v3) : -1;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        v6 = -1;
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
    }
    else
    {
      v6 = -1;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
    if ( v6 > 0 )
    {
      if ( a2 )
      {
        GreProbeForWriteToUntrustedVa(a2, 8 * v3, 4uLL);
        if ( v6 < (int)v3 )
          LODWORD(v3) = v6;
        memmove(a2, v7, 8LL * (int)v3);
      }
    }
  }
LABEL_29:
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 == -1 )
    EngSetLastError(8u);
  return (unsigned int)v6;
}
