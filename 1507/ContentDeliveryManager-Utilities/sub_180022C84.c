/*
 * XREFs of sub_180022C84 @ 0x180022C84
 * Callers:
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 *     unknown_libname_8 @ 0x1800223C0 (unknown_libname_8.c)
 *     unknown_libname_9 @ 0x1800227D0 (unknown_libname_9.c)
 * Callees:
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180022C84(char *a1, char *a2, char **a3, _DWORD *a4, int a5)
{
  char *v6; // rbx
  char *v7; // r13
  __int64 v8; // rbp
  int v9; // r15d
  int v10; // edi
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  bool v14; // zf
  signed int v15; // r10d
  unsigned int v16; // ebp
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  char *v20; // r13
  char v21; // r14
  int v22; // r12d
  int v23; // edi
  char **v26; // [rsp+28h] [rbp-80h]
  _BYTE v27[48]; // [rsp+30h] [rbp-78h] BYREF

  v26 = a3;
  v6 = a2;
  v7 = a1;
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
      ++v6;
    while ( *v6 == 48 );
  }
  v10 = 0;
  if ( isdigit((unsigned __int8)*v6) )
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
        v27[v11++] = *v6 - 48;
      }
      ++v6;
    }
    while ( isdigit((unsigned __int8)*v6) );
  }
  if ( *v6 == *localeconv()->decimal_point )
    ++v6;
  if ( !v10 && *v6 == 48 )
  {
    v9 = 1;
    do
    {
      --*a4;
      ++v6;
    }
    while ( *v6 == 48 );
  }
  if ( isdigit((unsigned __int8)*v6) )
  {
    v12 = v10;
    v9 = 1;
    do
    {
      if ( v12 <= (int)v8 )
      {
        ++v10;
        v27[v12++] = *v6 - 48;
        --*a4;
      }
      ++v6;
    }
    while ( isdigit((unsigned __int8)*v6) );
  }
  if ( (int)v8 < v10 )
  {
    if ( (char)v27[v8] >= 5 )
      ++v27[(unsigned int)(v8 - 1)];
    ++*a4;
    v10 = v8;
  }
  v13 = v10;
  v14 = v10 == 0;
  if ( v10 > 0 )
  {
    do
    {
      if ( v27[v13 - 1] )
        break;
      ++*a4;
      --v10;
      --v13;
    }
    while ( v13 > 0 );
    v14 = v10 == 0;
  }
  if ( v14 )
  {
    v10 = 1;
    v27[0] = 0;
  }
  if ( v9 )
  {
    v15 = 9
        * (((int)((unsigned __int64)(954437177LL * v10) >> 32) >> 1)
         + 1
         + ((unsigned int)((unsigned __int64)(954437177LL * v10) >> 32) >> 31))
        - v10;
    v16 = v15 != 9 * (v15 / 9);
    v17 = 0LL;
    if ( v10 > 0 )
    {
      v18 = v15 != 9 * (v15 / 9);
      do
      {
        if ( v15 == 9 * (v15 / 9) )
        {
          v19 = (char)v27[v17];
          ++v16;
          ++v18;
        }
        else
        {
          v19 = (char)v27[v17] + 10 * a4[v18];
        }
        ++v15;
        a4[v18] = v19;
        ++v17;
      }
      while ( v17 < v10 );
    }
    if ( ((*v6 - 69) & 0xDF) == 0 )
    {
      v20 = v6;
      v21 = 43;
      if ( ((*++v6 - 43) & 0xFD) == 0 )
        v21 = *v6++;
      v22 = 0;
      v23 = 0;
      if ( isdigit((unsigned __int8)*v6) )
      {
        v22 = 1;
        do
        {
          if ( v23 < 100000000 )
            v23 = (unsigned __int8)*v6 + 2 * (5 * v23 - 24);
          ++v6;
        }
        while ( isdigit((unsigned __int8)*v6) );
      }
      if ( v21 == 45 )
        v23 = -v23;
      *a4 += v23;
      if ( !v22 )
        v6 = v20;
      v7 = a1;
    }
  }
  else
  {
    v16 = 0;
  }
  if ( v26 )
  {
    if ( v9 )
      v7 = v6;
    *v26 = v7;
  }
  return v16;
}
