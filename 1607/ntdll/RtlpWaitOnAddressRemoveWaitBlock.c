/*
 * XREFs of RtlpWaitOnAddressRemoveWaitBlock @ 0x180066B6C
 * Callers:
 *     RtlpWaitOnAddress @ 0x1800668D4 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180066A3C (RtlpWaitOnAddressWithTimeout.c)
 * Callees:
 *     RtlpWaitOnAddressWakeEntireList @ 0x180066704 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180066A3C (RtlpWaitOnAddressWithTimeout.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

int __fastcall RtlpWaitOnAddressRemoveWaitBlock(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  signed __int64 v7; // rtt
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  char v10; // r8
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  signed __int64 v13; // rcx
  char v14; // dl
  unsigned __int64 v15; // rcx
  bool v16; // zf
  signed __int64 v17; // rtt

  v4 = (*(_DWORD *)a2 >> 5) & 0x7F;
  v5 = *(_QWORD *)(a1 + 8 * v4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
      {
LABEL_23:
        if ( _InterlockedExchange((volatile __int32 *)(a2 + 40), 1) != 2 )
          LODWORD(v5) = RtlpWaitOnAddressWithTimeout(a1, a2, 0LL, RtlpWaitOnAddressSpinCount);
        return v5;
      }
      if ( (v5 & 2) == 0 )
        break;
      v17 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v5 | 1, v5);
      if ( v17 == v5 )
        goto LABEL_23;
    }
    v6 = v5 | 2;
    v7 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v5 | 2, v5);
  }
  while ( v7 != v5 );
  v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = 0;
  v11 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFFCuLL) + 24);
  do
  {
    if ( v8 == a2 )
    {
      v12 = *(_QWORD *)(v8 + 16);
      v10 = 1;
      if ( v8 == v9 )
      {
        v13 = *(_QWORD *)(v8 + 16);
        if ( v12 )
          v13 = v12 ^ ((unsigned __int8)v6 ^ (unsigned __int8)v12) & 3;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v13, v6);
        if ( v6 == v5 )
        {
          if ( !v13 )
            return v5;
          *(_QWORD *)(v12 + 24) = 0LL;
          v8 = v12;
          v9 = v12;
        }
        else
        {
          v6 = v5;
          v8 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
          v9 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
          v11 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCuLL) + 24);
        }
      }
      else
      {
        *(_QWORD *)(v11 + 16) = v12;
        if ( v12 )
          *(_QWORD *)(v12 + 24) = v11;
        else
          *(_QWORD *)(v11 + 32) = v11;
        v8 = v12;
      }
    }
    else
    {
      *(_QWORD *)(v8 + 24) = v11;
      v11 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( v8 );
  if ( !v10 && _InterlockedExchange((volatile __int32 *)(a2 + 40), 0) != 2 )
    NtWaitForAlertByThreadId(*(PVOID *)a2, 0LL);
  *(_QWORD *)(v9 + 32) = v11;
  do
  {
    if ( (v6 & 1) != 0 )
    {
      v14 = 1;
      v15 = 0LL;
    }
    else
    {
      v14 = 0;
      v15 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v15, v6);
    v16 = v6 == v5;
    v6 = v5;
  }
  while ( !v16 );
  if ( v14 )
    LODWORD(v5) = RtlpWaitOnAddressWakeEntireList(v5);
  return v5;
}
