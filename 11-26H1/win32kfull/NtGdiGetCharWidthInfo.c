/*
 * XREFs of NtGdiGetCharWidthInfo @ 0x14027FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharWidthInfo@@YAHAEAVDCOBJ@@PEAU_CHWIDTHINFO@@@Z @ 0x14024A92C (-GrepGetCharWidthInfo@@YAHAEAVDCOBJ@@PEAU_CHWIDTHINFO@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetCharWidthInfo(HDC a1, void *a2)
{
  __int64 SessionState; // rax
  unsigned int CharWidthInfo; // ebx
  _BYTE v7[64]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v8[14]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v9; // [rsp+E0h] [rbp-28h] BYREF
  int v10; // [rsp+E8h] [rbp-20h]

  v9 = 0LL;
  v10 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v7,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v7) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
    if ( v8[0] )
      CharWidthInfo = GrepGetCharWidthInfo((struct DCOBJ *)v8, (struct _CHWIDTHINFO *)&v9);
    else
      CharWidthInfo = 0;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  }
  else
  {
    CharWidthInfo = 0;
  }
  if ( CharWidthInfo )
    GreProbeAndWriteToUntrustedVa(a2, 0xCuLL, &v9, 0xCuLL, 1uLL);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v7);
  return CharWidthInfo;
}
