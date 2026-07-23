/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x180054F00
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x18006D110 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x18006D220 (RtlInitializeCriticalSection.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlLogStackBackTraceEx @ 0x180054FC8 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x180055000 (RtlpAllocateDebugInfo.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 */

void __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  __int64 DebugInfo; // rax
  signed __int64 v3; // rbx
  int v4; // eax
  volatile signed __int64 v5; // rbx
  signed __int64 *v6; // rax
  signed __int64 v7; // rbx

  DebugInfo = RtlpAllocateDebugInfo();
  v3 = DebugInfo;
  if ( DebugInfo )
  {
    *(_WORD *)DebugInfo = 0;
    if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      *(_WORD *)DebugInfo = 1;
    *(_QWORD *)(DebugInfo + 32) = 0LL;
    *(_DWORD *)(DebugInfo + 40) = 0;
    *(_QWORD *)(DebugInfo + 8) = a1;
    v4 = RtlLogStackBackTraceEx(2LL);
    *(_WORD *)(v3 + 2) = v4;
    *(_WORD *)(v3 + 44) = HIWORD(v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v3, -1LL) == -1 )
    {
      v5 = *(_QWORD *)a1;
      RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
      v6 = (signed __int64 *)off_180142250;
      v7 = v5 + 16;
      *(_QWORD *)(v7 + 8) = off_180142250;
      *(_QWORD *)v7 = &RtlCriticalSectionList;
      if ( (_UNKNOWN **)*v6 != &RtlCriticalSectionList )
        __fastfail(3u);
      *v6 = v7;
      off_180142250 = (_UNKNOWN **)v7;
      RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    }
    else
    {
      RtlpFreeDebugInfo(v3);
    }
  }
  else
  {
    _InterlockedAdd(&RtlFailedCriticalDebugAllocations, 1u);
  }
}
