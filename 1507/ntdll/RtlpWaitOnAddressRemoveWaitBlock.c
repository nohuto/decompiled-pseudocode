/*
 * XREFs of RtlpWaitOnAddressRemoveWaitBlock @ 0x18006E06C
 * Callers:
 *     RtlpWaitOnAddress @ 0x180035EEC (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180036050 (RtlpWaitOnAddressWithTimeout.c)
 * Callees:
 *     RtlpWaitOnAddressWithTimeout @ 0x180036050 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006E20C (RtlpWaitOnAddressWakeEntireList.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpWaitOnAddressRemoveWaitBlock(__int64 a1)
{
  __int64 v2; // rsi
  signed __int64 result; // rax
  signed __int64 v4; // rbx
  signed __int64 v5; // rtt
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  char v8; // r8
  unsigned __int64 v9; // rbp
  char v10; // dl
  unsigned __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int64 v15; // rtt

  v2 = (*(_DWORD *)a1 >> 5) & 0x7F;
  result = RtlpWaitOnAddressHashTable[v2];
  do
  {
    while ( 1 )
    {
      if ( !result )
      {
LABEL_23:
        if ( _InterlockedExchange((volatile __int32 *)(a1 + 40), 1) != 2 )
          return RtlpWaitOnAddressWithTimeout(a1, 0LL, RtlpWaitOnAddressSpinCount);
        return result;
      }
      if ( (result & 2) == 0 )
        break;
      v15 = result;
      result = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v2], result | 1, result);
      if ( v15 == result )
        goto LABEL_23;
    }
    v4 = result | 2;
    v5 = result;
    result = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v2], result | 2, result);
  }
  while ( v5 != result );
  v6 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
  v7 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = 0;
  v9 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCuLL) + 24);
  do
  {
    if ( v6 == a1 )
    {
      v13 = *(_QWORD *)(v6 + 16);
      v8 = 1;
      if ( v6 == v7 )
      {
        v14 = *(_QWORD *)(v6 + 16);
        if ( v13 )
          v14 = v13 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v13) & 3;
        result = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v2], v14, v4);
        if ( v4 == result )
        {
          if ( !v14 )
            return result;
          *(_QWORD *)(v13 + 24) = 0LL;
          v6 = v13;
          v7 = v13;
        }
        else
        {
          v4 = result;
          v6 = result & 0xFFFFFFFFFFFFFFFCuLL;
          v7 = result & 0xFFFFFFFFFFFFFFFCuLL;
          v9 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 24);
        }
      }
      else
      {
        *(_QWORD *)(v9 + 16) = v13;
        if ( v13 )
          *(_QWORD *)(v13 + 24) = v9;
        else
          *(_QWORD *)(v9 + 32) = v9;
        v6 = v13;
      }
    }
    else
    {
      *(_QWORD *)(v6 + 24) = v9;
      v9 = v6;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( v6 );
  if ( !v8 && _InterlockedExchange((volatile __int32 *)(a1 + 40), 0) != 2 )
    NtWaitForAlertByThreadId(*(PVOID *)a1, 0LL);
  *(_QWORD *)(v7 + 32) = v9;
  do
  {
    if ( (v4 & 1) != 0 )
    {
      v10 = 1;
      v11 = 0LL;
    }
    else
    {
      v10 = 0;
      v11 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    result = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v2], v11, v4);
    v12 = v4 == result;
    v4 = result;
  }
  while ( !v12 );
  if ( v10 )
    return RtlpWaitOnAddressWakeEntireList(result);
  return result;
}
