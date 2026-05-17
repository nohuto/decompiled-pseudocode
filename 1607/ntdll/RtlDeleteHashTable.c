/*
 * XREFs of RtlDeleteHashTable @ 0x1800881F0
 * Callers:
 *     RtlpCreateHashTable @ 0x18007EE08 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteHashTable(unsigned __int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 *v6; // rsi

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
    v6 = *(unsigned __int64 **)(a1 + 32);
    do
    {
      if ( !*v6 )
        break;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v6);
      ++v5;
      ++v6;
    }
    while ( v5 < 0x10 );
    v2 = v4;
LABEL_3:
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
LABEL_4:
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
