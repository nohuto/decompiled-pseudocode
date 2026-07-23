/*
 * XREFs of RtlCompactHeap @ 0x1800909F0
 * Callers:
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpHpCompact @ 0x18004E434 (RtlpHpCompact.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG v5; // edx
  SIZE_T v6; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  struct _TEB *v10; // rbx
  char v12; // [rsp+20h] [rbp-18h]
  SIZE_T v13; // [rsp+28h] [rbp-10h]

  v12 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpCompact((__int64)HeapHandle, *(__int64 *)&Flags, v2, v3);
    return 16LL;
  }
  else
  {
    v5 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v6 = 0LL;
      v13 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v12 = 1;
      }
      v7 = RtlpCoalesceHeap((int)HeapHandle);
      if ( v7 )
      {
        v8 = 16 * *(unsigned __int16 *)(v7 + 8);
        v6 = v8;
        v13 = v8;
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v7 + 11) = *(_BYTE *)(v7 + 8) ^ *(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10);
          *(_DWORD *)(v7 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v9 = *((_QWORD *)HeapHandle + 31);
        if ( *(_QWORD *)(v9 + 40) > v6 )
          v6 = *(_QWORD *)(v9 + 40);
        v13 = v6;
      }
      if ( !v6 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v10 = NtCurrentTeb();
        v10->LastErrorValue = RtlNtStatusToDosError(0);
        v6 = v13;
      }
      if ( v12 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v6;
    }
  }
}
