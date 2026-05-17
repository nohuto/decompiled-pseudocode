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
    dword_180144A4C = *(_DWORD *)(a2 + 12);
    qword_180144A68 = *(_QWORD *)(a2 + 40);
    qword_180144A60 = *(_QWORD *)(a2 + 32);
    qword_180144A58 = *(_QWORD *)(a2 + 24);
    dword_180144A50 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
