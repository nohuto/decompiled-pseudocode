/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800DA8F8
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800DA98C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DAAC4 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_180153560 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_180153550 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  }
  return result;
}
