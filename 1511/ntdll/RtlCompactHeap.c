/*
 * XREFs of RtlCompactHeap @ 0x18008DFD0
 * Callers:
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpHpCompact @ 0x1800508FC (RtlpHpCompact.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  ULONG v3; // edx
  SIZE_T v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  struct _TEB *v8; // rbx
  char v10; // [rsp+20h] [rbp-18h]
  SIZE_T v11; // [rsp+28h] [rbp-10h]

  v10 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpCompact((__int64)HeapHandle);
    return 16LL;
  }
  else
  {
    v3 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v4 = 0LL;
      v11 = 0LL;
      if ( (v3 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v10 = 1;
      }
      v5 = RtlpCoalesceHeap(HeapHandle);
      if ( v5 )
      {
        v6 = 16 * *(unsigned __int16 *)(v5 + 8);
        v4 = v6;
        v11 = v6;
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
          *(_DWORD *)(v5 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v7 = *((_QWORD *)HeapHandle + 31);
        if ( *(_QWORD *)(v7 + 40) > v4 )
          v4 = *(_QWORD *)(v7 + 40);
        v11 = v4;
      }
      if ( !v4 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v8 = NtCurrentTeb();
        v8->LastErrorValue = RtlNtStatusToDosError(0);
        v4 = v11;
      }
      if ( v10 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v4;
    }
  }
}
