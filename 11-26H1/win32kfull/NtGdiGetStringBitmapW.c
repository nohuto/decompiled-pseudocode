/*
 * XREFs of NtGdiGetStringBitmapW @ 0x14027DD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetStringBitmapW(HDC a1, const void *a2, int a3, unsigned int a4, void *a5)
{
  struct STRINGBITMAP *v8; // rsi
  unsigned int StringBitmapW; // edi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 SessionState; // rax
  unsigned int v14; // r8d
  _BYTE v15[56]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[19]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v17; // [rsp+120h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+128h] [rbp+20h]

  v18 = a4;
  v17 = 0;
  v8 = 0LL;
  StringBitmapW = 1;
  if ( a3 != 1 )
    return 0LL;
  if ( a4 )
  {
    if ( a4 > 0x2710000 || (v8 = (struct STRINGBITMAP *)AllocFreeTmpBuffer(a4)) == 0LL )
      StringBitmapW = 0;
  }
  if ( !StringBitmapW )
    goto LABEL_18;
  GreProbeAndReadFromUntrustedVa(&v17, 2uLL, a2, 2uLL, 1uLL);
  SessionState = W32GetSessionState(v12, v11);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v15,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v15) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
    if ( v16[0] )
    {
      StringBitmapW = GrepGetStringBitmapW((struct DCOBJ *)v16, &v17, v14, v8, a4);
    }
    else
    {
      EngSetLastError(6u);
      StringBitmapW = 0;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  }
  else
  {
    EngSetLastError(0x15u);
    StringBitmapW = 0;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v15);
  if ( !StringBitmapW || StringBitmapW > a4 )
    goto LABEL_18;
  if ( v8 )
  {
    GreProbeAndWriteToUntrustedVa(a5, StringBitmapW, v8, StringBitmapW, 1uLL);
LABEL_18:
    if ( v8 )
      FreeTmpBuffer(v8);
  }
  return StringBitmapW;
}
