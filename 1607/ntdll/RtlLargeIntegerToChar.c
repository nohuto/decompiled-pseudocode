/*
 * XREFs of RtlLargeIntegerToChar @ 0x180001260
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800E4FC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned int a2, int a3, char *a4)
{
  char *v4; // r15
  int v7; // ecx
  int v8; // r8d
  char *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  __int64 v18; // rax
  size_t v19; // rbx
  char v20; // [rsp+61h] [rbp-37h] BYREF

  v4 = a4;
  switch ( a2 )
  {
    case 0u:
      a2 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v7 = 0;
      v8 = 0;
      goto LABEL_4;
    case 2u:
      v7 = 1;
      break;
    case 8u:
      v7 = 3;
      break;
    case 0x10u:
      v7 = 4;
      break;
    default:
      return 3221225485LL;
  }
  v8 = (1 << v7) - 1;
LABEL_4:
  v9 = &v20;
  if ( v7 )
  {
    v12 = *a1;
    do
    {
      v18 = v8 & (unsigned int)v12;
      v12 >>= v7;
      *--v9 = RtlpIntegerChars[v18];
    }
    while ( v12 );
  }
  else
  {
    v10 = *a1;
    v11 = a2;
    do
    {
      v13 = v10;
      v10 /= v11;
      v12 = v13 % v11;
      *--v9 = RtlpIntegerChars[(unsigned int)(v13 % v11)];
    }
    while ( v10 );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v9);
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v16 = (int)v15 <= a3;
  if ( (int)v15 < a3 )
  {
    v19 = (unsigned int)(a3 - v15);
    LOBYTE(v12) = 48;
    memset(a4, v12, v19);
    a3 = v15;
    v4 += v19;
LABEL_8:
    v16 = (int)v15 <= a3;
  }
  if ( !v16 )
    return 2147483653LL;
  memmove(v4, v9, (unsigned int)v15);
  if ( (int)v15 < a3 )
    v4[v15] = 0;
  return 0LL;
}
