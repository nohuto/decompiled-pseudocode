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
    dword_180143A8C = *(_DWORD *)(a2 + 12);
    qword_180143AA8 = *(_QWORD *)(a2 + 40);
    qword_180143AA0 = *(_QWORD *)(a2 + 32);
    qword_180143A98 = *(_QWORD *)(a2 + 24);
    dword_180143A90 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
