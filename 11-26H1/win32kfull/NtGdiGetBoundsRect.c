/*
 * XREFs of NtGdiGetBoundsRect @ 0x1401A8500
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A85BC (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetBoundsRect(HDC a1, void *a2, unsigned int a3)
{
  unsigned int BoundsRect; // ebx
  _QWORD v7[14]; // [rsp+30h] [rbp-A8h] BYREF
  struct tagRECT v8; // [rsp+A0h] [rbp-38h] BYREF

  BoundsRect = 0;
  v8 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
    BoundsRect = GrepGetBoundsRect((struct XDCOBJ *)v7, &v8, a3);
  if ( BoundsRect )
    GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &v8, 0x10uLL, 1uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return BoundsRect;
}
