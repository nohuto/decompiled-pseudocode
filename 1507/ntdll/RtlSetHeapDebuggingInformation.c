/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800D852C
 * Callers:
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180008524 (RtlpEnumProcessHeaps.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpIsProtectedHeap @ 0x18006F90C (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800DA550 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(PVOID HeapHandle, __int64 a2)
{
  unsigned int v4; // ebx

  if ( HeapHandle )
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      if ( RtlpIsProtectedHeap((__int64)HeapHandle) )
        v4 = -1073741811;
      else
        v4 = RtlpSetHeapDebuggingInformation(HeapHandle);
      RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      return v4;
    }
  }
  else
  {
    dword_180144A4C = *(_DWORD *)(a2 + 12);
    qword_180144A68 = *(PRTL_DYNAMIC_HASH_TABLE *)(a2 + 40);
    qword_180144A60 = *(_QWORD *)(a2 + 32);
    qword_180144A58 = *(_QWORD *)(a2 + 24);
    dword_180144A50 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps(
      (PRTL_DYNAMIC_HASH_TABLE)RtlpSetHeapDebuggingInformation,
      (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)a2,
      0);
    return 0LL;
  }
}
