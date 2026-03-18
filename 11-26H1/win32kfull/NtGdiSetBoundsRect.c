/*
 * XREFs of NtGdiSetBoundsRect @ 0x1401A8950
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A8A60 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiSetBoundsRect(HDC a1, struct tagRECT *a2, unsigned int a3)
{
  unsigned int v3; // edi
  struct tagRECT *v4; // rsi
  unsigned int v6; // ebx
  _QWORD v8[14]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+C0h] [rbp-38h] BYREF

  v3 = a3;
  v4 = a2;
  v9 = 0LL;
  if ( a2 )
  {
    GreProbeAndReadFromUntrustedVa(&v9, 0x10uLL, a2, 0x10uLL, 1uLL);
    v4 = (struct tagRECT *)&v9;
  }
  else
  {
    v3 = a3 & 0xFFFFFFFD;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
  if ( v8[0] )
    v6 = GrepSetBoundsRect((struct XDCOBJ *)v8, v4, v3);
  else
    v6 = 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v6;
}
