/*
 * XREFs of RtlpPlaceActivationContextOnLiveList @ 0x1800D2874
 * Callers:
 *     RtlCreateActivationContext @ 0x180043360 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800D26A8 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpPlaceActivationContextOnLiveList(__int64 a1)
{
  __int64 v2; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = g_SxsLiveActivationContexts;
  *(_QWORD *)(a1 + 8) = g_SxsLiveActivationContexts;
  *(_QWORD *)(a1 + 16) = &g_SxsLiveActivationContexts;
  if ( *(__int64 **)(v2 + 8) != &g_SxsLiveActivationContexts )
    __fastfail(3u);
  *(_QWORD *)(v2 + 8) = a1 + 8;
  g_SxsLiveActivationContexts = a1 + 8;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
