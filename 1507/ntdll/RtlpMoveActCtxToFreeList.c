/*
 * XREFs of RtlpMoveActCtxToFreeList @ 0x1800C9C5C
 * Callers:
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpFreeActivationContext @ 0x18007507C (RtlpFreeActivationContext.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800C9BC8 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpMoveActCtxToFreeList(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rdx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v5 = g_SxsFreeActivationContexts;
    v6 = *(_QWORD *)g_SxsFreeActivationContexts;
    if ( *(__int64 **)(g_SxsFreeActivationContexts + 8) != &g_SxsFreeActivationContexts
      || *(_QWORD *)(v6 + 8) != g_SxsFreeActivationContexts )
    {
      __fastfail(3u);
    }
    g_SxsFreeActivationContexts = *(_QWORD *)g_SxsFreeActivationContexts;
    *(_QWORD *)(v6 + 8) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v5 - 8);
  }
  if ( g_SxsMaxDeadActivationContexts )
  {
    v7 = (__int64 **)qword_180147760;
    *(_QWORD *)(a1 + 8) = &g_SxsFreeActivationContexts;
    *(_QWORD *)(a1 + 16) = v7;
    if ( *v7 != &g_SxsFreeActivationContexts )
      __fastfail(3u);
    *v7 = (__int64 *)(a1 + 8);
    qword_180147760 = a1 + 8;
    g_SxsCurrentDeadActivationContexts = i + 1;
  }
  else
  {
    RtlpFreeActivationContext(a1);
  }
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
