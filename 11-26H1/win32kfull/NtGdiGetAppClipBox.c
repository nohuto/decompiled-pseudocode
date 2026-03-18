/*
 * XREFs of NtGdiGetAppClipBox @ 0x1400AC830
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400AC974 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetAppClipBox(HDC a1, void *a2)
{
  unsigned int AppClipBox; // ebx
  _QWORD v5[14]; // [rsp+30h] [rbp-98h] BYREF
  struct tagRECT v6; // [rsp+A0h] [rbp-28h] BYREF

  v6 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    AppClipBox = GrepGetAppClipBox((struct XDCOBJ *)v5, &v6);
  }
  else
  {
    EngSetLastError(6u);
    AppClipBox = 0;
  }
  if ( AppClipBox )
    GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &v6, 0x10uLL, 1uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return AppClipBox;
}
