/*
 * XREFs of RtlLargeIntegerToChar @ 0x1403F5900
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1403F542C (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __stdcall RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, ULONG Length, PCHAR String)
{
  PCHAR v4; // r15
  int v7; // ecx
  int v8; // r8d
  char *v9; // r14
  unsigned __int64 QuadPart; // rdx
  __int64 v11; // rax
  int v12; // esp
  __int64 v13; // rsi
  bool v14; // cc
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rtt
  size_t v19; // rbx
  char v20; // [rsp+61h] [rbp-37h] BYREF

  v4 = String;
  if ( Base )
  {
    if ( Base == 16 )
    {
      v7 = 4;
LABEL_4:
      v8 = (1 << v7) - 1;
      goto LABEL_5;
    }
    if ( Base != 10 )
    {
      if ( Base == 2 )
      {
        v7 = 1;
      }
      else
      {
        if ( Base != 8 )
          return -1073741811;
        v7 = 3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    Base = 10;
  }
  v7 = 0;
  v8 = 0;
LABEL_5:
  v9 = &v20;
  if ( v7 )
  {
    QuadPart = Value->QuadPart;
    do
    {
      v11 = v8 & (unsigned int)QuadPart;
      QuadPart >>= v7;
      *--v9 = *((_BYTE *)RtlpIntegerChars + v11);
    }
    while ( QuadPart );
  }
  else
  {
    v16 = Value->QuadPart;
    v17 = Base;
    do
    {
      v18 = v16;
      v16 /= v17;
      QuadPart = v18 % v17;
      *--v9 = *((_BYTE *)RtlpIntegerChars + (unsigned int)(v18 % v17));
    }
    while ( v16 );
  }
  v13 = (unsigned int)(v12 + 97 - (_DWORD)v9);
  if ( (Length & 0x80000000) == 0 )
    goto LABEL_9;
  Length = -Length;
  v14 = (int)v13 <= (int)Length;
  if ( (int)v13 < (int)Length )
  {
    v19 = Length - (unsigned int)v13;
    LOBYTE(QuadPart) = 48;
    memset(String, QuadPart, v19);
    Length = v13;
    v4 += v19;
LABEL_9:
    v14 = (int)v13 <= (int)Length;
  }
  if ( !v14 )
    return -2147483643;
  memmove(v4, v9, (unsigned int)v13);
  if ( (int)v13 < (int)Length )
    v4[v13] = 0;
  return 0;
}
