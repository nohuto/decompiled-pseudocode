/*
 * XREFs of RtlpPlaceActivationContextOnLiveList @ 0x1800C9D94
 * Callers:
 *     RtlCreateActivationContext @ 0x180056830 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800C9BC8 (RtlpEnsureLiveDeadListsInitialized.c)
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
