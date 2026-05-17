/*
 * XREFs of RtlIntegerToChar @ 0x180021680
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x180021780 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlIntegerToChar(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = a2;
  switch ( a2 )
  {
    case 0u:
      v6 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v8 = 0;
      v9 = 0;
      goto LABEL_4;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return 3221225485LL;
  }
  v9 = (1 << v8) - 1;
LABEL_4:
  v10 = &v19;
  do
  {
    if ( v8 )
    {
      v11 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      v11 = a1 % v6;
      a1 /= v6;
    }
    --v10;
    v12 = v11;
    v13 = RtlpIntegerChars;
    *v10 = RtlpIntegerChars[v12];
  }
  while ( a1 );
  v15 = (unsigned int)(v14 + 65 - (_DWORD)v10);
  if ( a3 >= 0 )
    goto LABEL_9;
  a3 = -a3;
  v16 = (int)v15 <= a3;
  if ( (int)v15 < a3 )
  {
    v18 = (unsigned int)(a3 - v15);
    LOBYTE(v13) = 48;
    memset(a4, (int)v13, v18);
    a3 = v15;
    a4 += v18;
LABEL_9:
    v16 = (int)v15 <= a3;
  }
  if ( !v16 )
    return 2147483653LL;
  memmove(a4, v10, (unsigned int)v15);
  if ( (int)v15 < a3 )
    a4[v15] = 0;
  return 0LL;
}
