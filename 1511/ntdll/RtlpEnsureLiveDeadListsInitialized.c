/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800D26A8
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800D273C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800D2874 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 */

NTSTATUS RtlpEnsureLiveDeadListsInitialized()
{
  NTSTATUS result; // eax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_180146430 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_180146420 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  return result;
}
