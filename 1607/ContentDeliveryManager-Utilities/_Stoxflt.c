/*
 * XREFs of _Stoxflt @ 0x18005578C
 * Callers:
 *     _Stofx @ 0x180054160 (_Stofx.c)
 *     _Stodx @ 0x180054C14 (_Stodx.c)
 *     _Stoldx @ 0x1800550E0 (_Stoldx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__int64 __fastcall Stoxflt(char *a1, char *a2, char **a3, _DWORD *a4, int a5)
{
  int v5; // ebp
  char *v7; // rbx
  char *v8; // r13
  int v9; // r15d
  int v10; // esi
  _BYTE *v11; // rax
  __int64 v12; // r14
  _BYTE *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  bool v16; // zf
  signed int v17; // r10d
  unsigned int v18; // ebp
  __int64 v19; // r9
  __int64 v20; // r8
  char *v21; // r13
  char v22; // r14
  int v23; // r12d
  int v24; // esi
  char **v27; // [rsp+30h] [rbp-78h]
  _BYTE v28[40]; // [rsp+38h] [rbp-70h] BYREF

  v5 = 7 * a5;
  v27 = a3;
  v7 = a2;
  v8 = a1;
  if ( 7 * a5 > 35 )
    v5 = 35;
  *a4 = 0;
  a4[1] = 0;
  v9 = 0;
  if ( *a2 == 48 )
  {
    v9 = 1;
    do
      ++v7;
    while ( *v7 == 48 );
  }
  v10 = 0;
  v11 = memchr("0123456789abcdefABCDEF", *v7, 0x16uLL);
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
        v28[v12++] = byte_1800715E8[v11 - "0123456789abcdefABCDEF"];
      }
      v11 = memchr("0123456789abcdefABCDEF", *++v7, 0x16uLL);
    }
    while ( v11 );
    v8 = a1;
  }
  if ( *v7 == *localeconv()->decimal_point )
    ++v7;
  if ( !v10 && *v7 == 48 )
  {
    v9 = 1;
    do
    {
      --*a4;
      ++v7;
    }
    while ( *v7 == 48 );
  }
  v13 = memchr("0123456789abcdefABCDEF", *v7, 0x16uLL);
  if ( v13 )
  {
    v14 = v10;
    v9 = 1;
    do
    {
      if ( v14 <= v5 )
      {
        ++v10;
        v28[v14++] = byte_1800715E8[v13 - "0123456789abcdefABCDEF"];
        --*a4;
      }
      v13 = memchr("0123456789abcdefABCDEF", *++v7, 0x16uLL);
    }
    while ( v13 );
    v8 = a1;
  }
  if ( v5 < v10 )
  {
    if ( (char)v28[v5] >= 8 )
      ++v28[v5 - 1];
    ++*a4;
    v10 = v5;
  }
  v15 = v10;
  v16 = v10 == 0;
  if ( v10 > 0 )
  {
    do
    {
      if ( v28[v15 - 1] )
        break;
      ++*a4;
      --v10;
      --v15;
    }
    while ( v15 > 0 );
    v16 = v10 == 0;
  }
  if ( v16 )
  {
    v10 = 1;
    v28[0] = 0;
  }
  *a4 *= 4;
  if ( v9 )
  {
    v17 = 7
        * (((int)((unsigned __int64)(2454267027LL * v10) >> 32) >> 2)
         + 1
         + ((unsigned int)((unsigned __int64)(2454267027LL * v10) >> 32) >> 31))
        - v10;
    v18 = v17 != 7 * (v17 / 7);
    v19 = 0LL;
    if ( v10 > 0 )
    {
      v20 = v17 != 7 * (v17 / 7);
      do
      {
        if ( v17 == 7 * (v17 / 7) )
        {
          ++v18;
          a4[++v20] = (char)v28[v19];
        }
        else
        {
          a4[v20] = 16 * a4[v20] + (char)v28[v19];
        }
        ++v17;
        ++v19;
      }
      while ( v19 < v10 );
    }
    if ( ((*v7 - 80) & 0xDF) == 0 )
    {
      v21 = v7;
      v22 = 43;
      if ( ((*++v7 - 43) & 0xFD) == 0 )
        v22 = *v7++;
      v23 = 0;
      v24 = 0;
      if ( isdigit((unsigned __int8)*v7) )
      {
        v23 = 1;
        do
        {
          if ( v24 < 100000000 )
            v24 = (unsigned __int8)*v7 + 2 * (5 * v24 - 24);
          ++v7;
        }
        while ( isdigit((unsigned __int8)*v7) );
      }
      if ( v22 == 45 )
        v24 = -v24;
      *a4 += v24;
      if ( !v23 )
        v7 = v21;
      v8 = a1;
    }
  }
  else
  {
    v18 = 0;
  }
  if ( v27 )
  {
    if ( v9 )
      v8 = v7;
    *v27 = v8;
  }
  return v18;
}
