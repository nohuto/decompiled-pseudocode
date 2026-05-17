/*
 * XREFs of LdrpMakeUnicodeStringFromPathElement @ 0x1800CA534
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x1800C9DB8 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180077E00 (RtlGetCurrentDirectory_U.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlStringCchCopyExW @ 0x1800CA674 (RtlStringCchCopyExW.c)
 */

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v5; // r9
  unsigned int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  _WORD *v10; // rdx
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v12[1600]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0uLL;
  v5 = a1;
  if ( a2 == 4 )
  {
    if ( (unsigned int)RtlGetCurrentDirectory_U(3192LL, (char *)v12) )
    {
      if ( !RtlCreateUnicodeString((__int64)&v11, v12) )
        return 0LL;
LABEL_4:
      *a3 = v11;
      return 0LL;
    }
    return 3221225473LL;
  }
  v7 = *(unsigned __int16 *)(a1 + 112);
  LODWORD(a1) = 0;
  if ( *(_DWORD *)(v5 + 40) != a2 )
  {
    do
    {
      a1 = (unsigned int)(a1 + 1);
      if ( (unsigned int)a1 >= v7 )
        return 3221226021LL;
    }
    while ( *(_DWORD *)(v5 + 4 * a1 + 40) != a2 );
  }
  if ( (unsigned int)a1 >= v7 )
    return 3221226021LL;
  if ( (_DWORD)a1 == v7 - 1 )
  {
    v10 = *(_WORD **)(v5 + 8LL * (unsigned int)a1 + 64);
LABEL_16:
    if ( RtlCreateUnicodeString((__int64)&v11, v10) )
      goto LABEL_4;
    return 3221225473LL;
  }
  v8 = *(_QWORD *)(v5 + 8LL * (unsigned int)a1 + 64);
  v9 = RtlStringCchCopyExW(
         (unsigned int)v12,
         (unsigned int)((*(_QWORD *)(v5 + 8LL * (unsigned int)(a1 + 1) + 64) - v8 - 2) >> 1) + 1,
         v8,
         0,
         0LL);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    v10 = v12;
    goto LABEL_16;
  }
  return 3221225473LL;
}
