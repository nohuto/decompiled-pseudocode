/*
 * XREFs of RtlDeleteHashTable @ 0x180078140
 * Callers:
 *     RtlpCreateHashTable @ 0x180065898 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteHashTable(unsigned __int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  int v5; // ebp
  __int64 i; // rsi
  unsigned __int64 v7; // r8

  if ( *(_DWORD *)(a1 + 8) <= 0x80u )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = 0;
    for ( i = 0LL; i < 512; ++i )
    {
      v7 = *(_QWORD *)(v4 + 8 * i);
      if ( !v7 )
        break;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      ++v5;
    }
    v2 = v4;
LABEL_3:
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
LABEL_4:
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
