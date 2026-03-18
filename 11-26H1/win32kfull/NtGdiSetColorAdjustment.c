/*
 * XREFs of NtGdiSetColorAdjustment @ 0x14032BCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiSetColorAdjustment(HDC a1, const void *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // xmm0_8
  _QWORD v7[14]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v8; // [rsp+B0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+C0h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v8, 0x18uLL, a2, 0x18uLL, 1uLL);
  if ( (_WORD)v8 == 24
    && WORD2(v8) <= 8u
    && (unsigned __int16)(WORD3(v8) - 1344) <= 0xF8A8u
    && (unsigned __int16)(WORD4(v8) - 1344) <= 0xF8A8u
    && (unsigned __int16)(WORD5(v8) - 1344) <= 0xF8A8u
    && WORD6(v8) <= 0xFA0u
    && (unsigned __int16)(HIWORD(v8) - 6000) <= 0xFA0u
    && (unsigned __int16)(v9 + 100) <= 0xC8u
    && (unsigned __int16)(WORD1(v9) + 100) <= 0xC8u
    && (unsigned __int16)(WORD2(v9) + 100) <= 0xC8u
    && (unsigned __int16)(HIWORD(v9) + 100) <= 0xC8u )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
    v3 = v7[0];
    if ( v7[0] )
    {
      v5 = v9;
      *(_OWORD *)(v7[0] + 176LL) = v8;
      *(_QWORD *)(v3 + 192) = v5;
      *(_WORD *)(v7[0] + 178LL) &= 3u;
      v4 = 1;
    }
    else
    {
      EngSetLastError(6u);
      v4 = 0;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  }
  else
  {
    return 0;
  }
  return v4;
}
