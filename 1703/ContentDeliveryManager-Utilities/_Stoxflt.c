/*
 * XREFs of _Stoxflt @ 0x18006C2A0
 * Callers:
 *     _Stofx @ 0x18006AD30 (_Stofx.c)
 *     _Stodx @ 0x18006B754 (_Stodx.c)
 *     _Stoldx @ 0x18006BC08 (_Stoldx.c)
 * Callees:
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

__int64 __fastcall Stoxflt(char *a1, char *a2, char **a3, _DWORD *a4, int a5)
{
  int v5; // ebp
  int v6; // r13d
  char *v8; // rbx
  int v9; // r14d
  int v10; // esi
  _BYTE *v11; // rax
  __int64 v12; // r15
  struct lconv *v13; // rax
  char *v14; // rdx
  char *v15; // rbx
  _BYTE *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  bool v19; // zf
  signed int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // r12
  char v24; // bp
  int v25; // r15d
  int v26; // esi
  int v27; // eax
  __int64 result; // rax
  char *v29; // rcx
  char *v31; // [rsp+30h] [rbp-78h]
  _BYTE v32[40]; // [rsp+38h] [rbp-70h] BYREF

  v5 = 7 * a5;
  v6 = 0;
  v8 = a2;
  v31 = a1;
  if ( 7 * a5 > 35 )
    v5 = 35;
  *a4 = 0;
  a4[1] = 0;
  v9 = 0;
  if ( *a2 == 48 )
  {
    v9 = 1;
    do
      ++v8;
    while ( *v8 == 48 );
  }
  v10 = 0;
  v11 = memchr("0123456789abcdefABCDEF", *v8, 0x16uLL);
  if ( v11 )
  {
    v12 = 0LL;
    v9 = 1;
    do
    {
      if ( v12 > v5 )
      {
        ++*a4;
      }
      else
      {
        ++v10;
        v32[v12++] = byte_180091BD8[v11 - "0123456789abcdefABCDEF"];
      }
      v11 = memchr("0123456789abcdefABCDEF", *++v8, 0x16uLL);
    }
    while ( v11 );
    v6 = 0;
  }
  v13 = localeconv();
  v14 = v8 + 1;
  if ( *v8 != *v13->decimal_point )
    v14 = v8;
  v15 = v14;
  if ( !v10 && *v14 == 48 )
  {
    v9 = 1;
    do
    {
      --*a4;
      ++v15;
    }
    while ( *v15 == 48 );
  }
  v16 = memchr("0123456789abcdefABCDEF", *v15, 0x16uLL);
  if ( v16 )
  {
    v17 = v10;
    v9 = 1;
    do
    {
      if ( v17 <= v5 )
      {
        ++v10;
        v32[v17++] = byte_180091BD8[v16 - "0123456789abcdefABCDEF"];
        --*a4;
      }
      v16 = memchr("0123456789abcdefABCDEF", *++v15, 0x16uLL);
    }
    while ( v16 );
    v6 = 0;
  }
  if ( v5 < v10 )
  {
    if ( (char)v32[v5] >= 8 )
      ++v32[v5 - 1];
    ++*a4;
    v10 = v5;
  }
  v18 = v10;
  v19 = v10 == 0;
  if ( v10 > 0 )
  {
    do
    {
      if ( v32[v18 - 1] )
        break;
      ++*a4;
      --v10;
      --v18;
    }
    while ( v18 > 0 );
    v19 = v10 == 0;
  }
  if ( v19 )
  {
    v10 = 1;
    v32[0] = 0;
  }
  *a4 *= 4;
  if ( v9 )
  {
    v20 = 7
        * (((int)((unsigned __int64)(2454267027LL * v10) >> 32) >> 2)
         + 1
         + ((unsigned int)((unsigned __int64)(2454267027LL * v10) >> 32) >> 31))
        - v10;
    v6 = v20 != 7 * (v20 / 7);
    if ( v10 > 0 )
    {
      v21 = 0LL;
      v22 = v20 != 7 * (v20 / 7);
      do
      {
        if ( v20 == 7 * (v20 / 7) )
        {
          ++v6;
          a4[++v22] = (char)v32[v21];
        }
        else
        {
          a4[v22] = 16 * a4[v22] + (char)v32[v21];
        }
        ++v20;
        ++v21;
      }
      while ( v21 < v10 );
    }
    if ( ((*v15 - 80) & 0xDF) == 0 )
    {
      v23 = v15;
      v24 = 43;
      if ( ((*++v15 - 43) & 0xFD) == 0 )
        v24 = *v15++;
      v25 = 0;
      v26 = 0;
      if ( isdigit((unsigned __int8)*v15) )
      {
        v25 = 1;
        do
        {
          if ( v26 < 100000000 )
            v26 = (unsigned __int8)*v15 + 2 * (5 * v26 - 24);
          ++v15;
        }
        while ( isdigit((unsigned __int8)*v15) );
      }
      v27 = -v26;
      if ( v24 != 45 )
        v27 = v26;
      *a4 += v27;
      if ( !v25 )
        v15 = v23;
    }
  }
  result = v6 & (unsigned int)-(v9 != 0);
  if ( a3 )
  {
    v29 = v31;
    if ( v9 )
      v29 = v15;
    *a3 = v29;
  }
  return result;
}
