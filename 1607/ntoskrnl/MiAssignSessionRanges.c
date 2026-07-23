/*
 * XREFs of MiAssignSessionRanges @ 0x1407AAAD8
 * Callers:
 *     MiInitializeSystemVa @ 0x1407AA428 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 MiAssignSessionRanges()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rcx
  _QWORD *v7; // r13
  ULONG v8; // edi
  unsigned int i; // r12d
  __int64 v10; // rsi
  int v11; // r14d
  unsigned __int64 v12; // rsi
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // [rsp+28h] [rbp-99h]
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-91h] BYREF
  _QWORD v18[12]; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v19[64]; // [rsp+A8h] [rbp-19h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v19, 0, sizeof(v19));
  BitMapHeader.SizeOfBitMap = 512;
  v0 = 0LL;
  BitMapHeader.Buffer = (unsigned int *)v19;
  v1 = 0LL;
  do
  {
    v2 = 3 * v1;
    LODWORD(v18[v2]) = v1;
    v1 = (unsigned int)(v1 + 1);
    v18[v2 + 2] = 0x2000000000LL;
  }
  while ( (int)v1 < 2 );
  v3 = qword_140328000;
  v4 = 3 * v1;
  LODWORD(v18[v4]) = v1;
  v5 = v1 + 1;
  v18[v4 + 2] = 1078231040LL;
  v16 = v3;
  v6 = 3LL * v5;
  LODWORD(v18[v6]) = v5;
  v18[v6 + 2] = 0x20000000LL;
  v7 = &v18[1];
  v8 = ExGenRandom(1) & 0x1FF;
  for ( i = 0; i < 4; ++i )
  {
    v10 = v7[1];
    if ( i == 3 )
    {
      if ( v18[1] >= v18[4] )
        v15 = v18[1] + v18[2] - v18[4];
      else
        v15 = v18[4] + v18[5] - v18[1];
      v0 = v15 >> 12;
      v10 = 8 * v0;
    }
    v11 = 16;
    v12 = (unsigned __int64)(v10 + 0x3FFFFFFF) >> 30;
    if ( (unsigned int)v12 < 0x20 )
    {
      v8 = ExGenRandom(1) & 0x1FF;
      v11 = 0;
    }
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v12, v8);
      if ( ClearBitsAndSet == v8 || !v11 )
        break;
      --v11;
      RtlClearBits(&BitMapHeader, ClearBitsAndSet, v12);
      v8 = ExGenRandom(1) & 0x1FF;
    }
    *v7 = v16 + ((unsigned __int64)ClearBitsAndSet << 30);
    v7 += 3;
    v8 = ((_WORD)v12 + (_WORD)ClearBitsAndSet + (unsigned __int8)ExGenRandom(1)) & 0x1FF;
  }
  qword_140326900 = v18[1];
  qword_140326908 = v18[4];
  qword_140326940 = v18[10];
  qword_140326950 = v16;
  qword_140326948 = v18[10] + 8 * v0;
  result = v18[7];
  qword_140326958 = v18[7];
  return result;
}
