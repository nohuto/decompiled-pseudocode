/*
 * XREFs of NtGdiRectVisible @ 0x1401B9780
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1401B9860 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1, const void *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[14]; // [rsp+40h] [rbp-98h] BYREF
  struct tagRECT v6; // [rsp+B0h] [rbp-28h] BYREF

  v6 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v6, 0x10uLL, a2, 0x10uLL, 1uLL);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = GrepRectVisible((struct XDCOBJ *)v5, &v6);
  }
  else
  {
    EngSetLastError(6u);
    v3 = -1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
