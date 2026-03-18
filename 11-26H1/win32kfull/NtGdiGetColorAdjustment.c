/*
 * XREFs of NtGdiGetColorAdjustment @ 0x14023F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetColorAdjustment(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[14]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v6; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+B0h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v6 = *(_OWORD *)(v5[0] + 176LL);
    v7 = *(_QWORD *)(v5[0] + 192LL);
    WORD1(v6) = BYTE2(v6) & 3;
    v3 = 1;
    GreProbeAndWriteToUntrustedVa(a2, 0x18uLL, &v6, 0x18uLL, 1uLL);
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
