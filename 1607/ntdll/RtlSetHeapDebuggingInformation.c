/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x18008F850
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x18008F3E0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4CC (RtlpEnumProcessHeaps.c)
 *     RtlpIsProtectedHeap @ 0x18007E874 (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1D0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  unsigned int v5; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
      if ( RtlpIsProtectedHeap(a1) )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(a1, a2);
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
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
