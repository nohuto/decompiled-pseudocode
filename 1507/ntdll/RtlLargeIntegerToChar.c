/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800D3D60
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800D3CC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  PSTR v4; // r15
  int v8; // ecx
  int v9; // r8d
  char *v10; // r14
  unsigned __int64 QuadPart; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rtt
  int v16; // esp
  __int64 v17; // rsi
  bool v18; // cc
  size_t v19; // rbx
  char v20; // [rsp+61h] [rbp-37h] BYREF

  v4 = String;
  switch ( Base )
  {
    case 0u:
      Base = 10;
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
  if ( Base != 10 )
  {
    if ( Base != 16 )
      return -1073741811;
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
    QuadPart = Value->QuadPart;
    do
    {
      v12 = v9 & (unsigned int)QuadPart;
      QuadPart >>= v8;
      *--v10 = RtlpIntegerChars[v12];
    }
    while ( QuadPart );
  }
  else
  {
    v13 = Value->QuadPart;
    v14 = Base;
    do
    {
      v15 = v13;
      v13 /= v14;
      QuadPart = v15 % v14;
      *--v10 = RtlpIntegerChars[(unsigned int)(v15 % v14)];
    }
    while ( v13 );
  }
  v17 = (unsigned int)(v16 + 97 - (_DWORD)v10);
  if ( OutputLength < 0 )
  {
    OutputLength = -OutputLength;
    v18 = (int)v17 <= OutputLength;
    if ( (int)v17 >= OutputLength )
      goto LABEL_23;
    v19 = (unsigned int)(OutputLength - v17);
    LOBYTE(QuadPart) = 48;
    memset(String, QuadPart, v19);
    OutputLength = v17;
    v4 += v19;
  }
  v18 = (int)v17 <= OutputLength;
LABEL_23:
  if ( !v18 )
    return -2147483643;
  memmove(v4, v10, (unsigned int)v17);
  if ( (int)v17 < OutputLength )
    v4[v17] = 0;
  return 0;
}
