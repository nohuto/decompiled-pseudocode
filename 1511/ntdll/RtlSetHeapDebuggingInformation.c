/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800E01FC
 * Callers:
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800E6560 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x180051130 (RtlpEnumProcessHeaps.c)
 *     RtlpIsProtectedHeap @ 0x18007AED4 (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800E1980 (RtlpSetHeapDebuggingInformation.c)
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
    dword_180143A8C = *(_DWORD *)(a2 + 12);
    qword_180143AA8 = *(PRTL_DYNAMIC_HASH_TABLE *)(a2 + 40);
    qword_180143AA0 = *(_QWORD *)(a2 + 32);
    qword_180143A98 = *(_QWORD *)(a2 + 24);
    dword_180143A90 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps(
      (PRTL_DYNAMIC_HASH_TABLE)RtlpSetHeapDebuggingInformation,
      (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)a2,
      0);
    return 0LL;
  }
}
