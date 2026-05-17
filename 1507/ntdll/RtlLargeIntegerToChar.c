/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800D3D60
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800D3CC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned int a2, int a3, char *a4)
{
  char *v4; // r15
  int v8; // ecx
  int v9; // r8d
  char *v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rtt
  int v16; // esp
  __int64 v17; // rsi
  bool v18; // cc
  size_t v19; // rbx
  char v20; // [rsp+61h] [rbp-37h] BYREF

  v4 = a4;
  switch ( a2 )
  {
    case 0u:
      a2 = 10;
      goto LABEL_12;
    case 2u:
      v8 = 1;
      goto LABEL_10;
    case 8u:
      v8 = 3;
LABEL_10:
      v9 = (1 << v8) - 1;
      goto LABEL_13;
  }
  if ( a2 != 10 )
  {
    if ( a2 != 16 )
      return 3221225485LL;
    v8 = 4;
    goto LABEL_10;
  }
LABEL_12:
  v8 = 0;
  v9 = 0;
LABEL_13:
  v10 = &v20;
  if ( v8 )
  {
    v11 = *a1;
    do
    {
      v12 = v9 & (unsigned int)v11;
      v11 >>= v8;
      *--v10 = RtlpIntegerChars[v12];
    }
    while ( v11 );
  }
  else
  {
    v13 = *a1;
    v14 = a2;
    do
    {
      v15 = v13;
      v13 /= v14;
      v11 = v15 % v14;
      *--v10 = RtlpIntegerChars[(unsigned int)(v15 % v14)];
    }
    while ( v13 );
  }
  v17 = (unsigned int)(v16 + 97 - (_DWORD)v10);
  if ( a3 < 0 )
  {
    a3 = -a3;
    v18 = (int)v17 <= a3;
    if ( (int)v17 >= a3 )
      goto LABEL_23;
    v19 = (unsigned int)(a3 - v17);
    LOBYTE(v11) = 48;
    memset(a4, v11, v19);
    a3 = v17;
    v4 += v19;
  }
  v18 = (int)v17 <= a3;
LABEL_23:
  if ( !v18 )
    return 2147483653LL;
  memmove(v4, v10, (unsigned int)v17);
  if ( (int)v17 < a3 )
    v4[v17] = 0;
  return 0LL;
}
