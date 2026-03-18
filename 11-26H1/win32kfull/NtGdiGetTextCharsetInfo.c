/*
 * XREFs of NtGdiGetTextCharsetInfo @ 0x140280AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z @ 0x1400FE144 (-GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTextCharsetInfo(HDC a1, void *a2)
{
  __int64 SessionState; // rax
  unsigned int TextCharsetInfo; // ebx
  _BYTE v7[64]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v8[14]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v9; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+F0h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v7,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v7) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
    if ( v8[0] )
    {
      TextCharsetInfo = GrepGetTextCharsetInfo(
                          (struct DCOBJ *)v8,
                          (struct tagFONTSIGNATURE *)((unsigned __int64)&v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
    }
    else
    {
      EngSetLastError(6u);
      TextCharsetInfo = 1;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  }
  else
  {
    EngSetLastError(0x15u);
    TextCharsetInfo = 1;
  }
  if ( TextCharsetInfo != -1 && a2 )
    GreProbeAndWriteToUntrustedVa(a2, 0x18uLL, &v9, 0x18uLL, 1uLL);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v7);
  return TextCharsetInfo;
}
