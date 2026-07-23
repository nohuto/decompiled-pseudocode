/*
 * XREFs of ExpParseArcPathName @ 0x1406B1174
 * Callers:
 *     ExpTranslateArcPath @ 0x1406B2640 (ExpTranslateArcPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     towlower @ 0x14014F40C (towlower.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 */

__int64 __fastcall ExpParseArcPathName(char *a1, char **a2, char **a3, _DWORD *a4, char *a5)
{
  char *v5; // r15
  char v6; // r12
  char *v8; // rbx
  char v9; // si
  unsigned int v10; // ebp
  wchar_t *v11; // rdi
  __int16 v12; // ax
  int v13; // edx
  __int16 v14; // ax
  wchar_t Dst[12]; // [rsp+38h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = 0;
  v8 = a1;
  v9 = 1;
  if ( !a1 )
    return 3221225485LL;
  wcscpy_s(Dst, 0xBuLL, L"signature(");
  v10 = 0;
  v11 = Dst;
  while ( towlower(*(wchar_t *)((char *)v11 + v8 - (char *)Dst)) == *v11 )
  {
    ++v10;
    ++v11;
    if ( v10 >= 0xA )
      goto LABEL_7;
  }
  v9 = 0;
LABEL_7:
  if ( v9 == 1 )
    v8 += 20;
  v12 = *(_WORD *)v8;
  v13 = 0;
  while ( v12 )
  {
    if ( v12 == 92 )
    {
      v5 = &v8[2 * v13];
      break;
    }
    if ( v9 == 1 && v12 == 41 )
    {
      v6 = 1;
      v14 = *(_WORD *)&v8[2 * (v13 + 1)];
      v9 = 0;
      if ( v14 != 92 )
      {
        if ( v14 )
          return 3221225485LL;
      }
    }
    v12 = *(_WORD *)&v8[2 * ++v13];
  }
  if ( v9 == 1 || !v13 )
    return 3221225485LL;
  *a2 = v8;
  *a3 = v5;
  *a4 = v13;
  *a5 = v6;
  return 0LL;
}
