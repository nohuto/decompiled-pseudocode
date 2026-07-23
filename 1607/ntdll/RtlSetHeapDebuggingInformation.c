/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x18008F840
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x18008F3D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4BC (RtlpEnumProcessHeaps.c)
 *     RtlpIsProtectedHeap @ 0x18007E864 (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1C0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  unsigned int v5; // ebx

  if ( HeapHandle )
  {
    if ( (HeapHandle[29] & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      if ( RtlpIsProtectedHeap((__int64)HeapHandle) )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(HeapHandle, a2);
      RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      return v5;
    }
  }
  else
  {
    dword_180150BCC = *(_DWORD *)(a2 + 12);
    qword_180150BE8 = *(_QWORD *)(a2 + 40);
    qword_180150BE0 = *(_QWORD *)(a2 + 32);
    qword_180150BD8 = *(_QWORD *)(a2 + 24);
    dword_180150BD0 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64)RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
