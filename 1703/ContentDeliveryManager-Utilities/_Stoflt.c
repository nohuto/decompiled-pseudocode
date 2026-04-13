/*
 * XREFs of _Stoflt @ 0x18006C00C
 * Callers:
 *     _Stofx @ 0x18006AD30 (_Stofx.c)
 *     _Stodx @ 0x18006B754 (_Stodx.c)
 *     _Stoldx @ 0x18006BC08 (_Stoldx.c)
 * Callees:
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

__int64 __fastcall Stoflt(char *a1, char *a2, char **a3, _DWORD *a4, int a5)
{
  unsigned int v5; // r13d
  char *v7; // rbx
  __int64 v8; // rbp
  int v9; // r15d
  int v10; // edi
  __int64 v11; // r14
  struct lconv *v12; // rax
  char *v13; // rdx
  char *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  bool v17; // zf
  signed int v18; // r10d
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  char *v22; // r12
  char v23; // bp
  int v24; // r14d
  int v25; // edi
  int v26; // eax
  __int64 result; // rax
  char *v28; // rcx
  char *v30; // [rsp+28h] [rbp-80h]
  _BYTE v31[48]; // [rsp+30h] [rbp-78h] BYREF

  v5 = 0;
  v7 = a2;
  v30 = a1;
  v8 = (unsigned int)(9 * a5);
  if ( (int)v8 > 45 )
    v8 = 45LL;
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
  if ( isdigit((unsigned __int8)*v7) )
  {
    v11 = 0LL;
    v9 = 1;
    do
    {
      if ( v11 > (int)v8 )
      {
        ++*a4;
      }
      else
      {
        ++v10;
        v31[v11++] = *v7 - 48;
      }
      ++v7;
    }
    while ( isdigit((unsigned __int8)*v7) );
  }
  v12 = localeconv();
  v13 = v7 + 1;
  if ( *v7 != *v12->decimal_point )
    v13 = v7;
  v14 = v13;
  if ( !v10 && *v13 == 48 )
  {
    v9 = 1;
    do
    {
      --*a4;
      ++v14;
    }
    while ( *v14 == 48 );
  }
  if ( isdigit((unsigned __int8)*v14) )
  {
    v15 = v10;
    v9 = 1;
    do
    {
      if ( v15 <= (int)v8 )
      {
        ++v10;
        v31[v15++] = *v14 - 48;
        --*a4;
      }
      ++v14;
    }
    while ( isdigit((unsigned __int8)*v14) );
  }
  if ( (int)v8 < v10 )
  {
    if ( (char)v31[v8] >= 5 )
      ++v31[(unsigned int)(v8 - 1)];
    ++*a4;
    v10 = v8;
  }
  v16 = v10;
  v17 = v10 == 0;
  if ( v10 > 0 )
  {
    do
    {
      if ( v31[v16 - 1] )
        break;
      ++*a4;
      --v10;
      --v16;
    }
    while ( v16 > 0 );
    v17 = v10 == 0;
  }
  if ( v17 )
  {
    v10 = 1;
    v31[0] = 0;
  }
  if ( v9 )
  {
    v18 = 9
        * (((int)((unsigned __int64)(954437177LL * v10) >> 32) >> 1)
         + 1
         + ((unsigned int)((unsigned __int64)(954437177LL * v10) >> 32) >> 31))
        - v10;
    LOBYTE(v5) = v18 != 9 * (v18 / 9);
    if ( v10 > 0 )
    {
      v19 = 0LL;
      v20 = v5;
      do
      {
        if ( v18 == 9 * (v18 / 9) )
        {
          v21 = (char)v31[v19];
          ++v5;
          ++v20;
        }
        else
        {
          v21 = (char)v31[v19] + 10 * a4[v20];
        }
        ++v18;
        a4[v20] = v21;
        ++v19;
      }
      while ( v19 < v10 );
    }
    if ( ((*v14 - 69) & 0xDF) == 0 )
    {
      v22 = v14;
      v23 = 43;
      if ( ((*++v14 - 43) & 0xFD) == 0 )
        v23 = *v14++;
      v24 = 0;
      v25 = 0;
      if ( isdigit((unsigned __int8)*v14) )
      {
        v24 = 1;
        do
        {
          if ( v25 < 100000000 )
            v25 = (unsigned __int8)*v14 + 2 * (5 * v25 - 24);
          ++v14;
        }
        while ( isdigit((unsigned __int8)*v14) );
      }
      v26 = -v25;
      if ( v23 != 45 )
        v26 = v25;
      *a4 += v26;
      if ( !v24 )
        v14 = v22;
    }
  }
  result = v9 != 0 ? v5 : 0;
  if ( a3 )
  {
    v28 = v30;
    if ( v9 )
      v28 = v14;
    *a3 = v28;
  }
  return result;
}
