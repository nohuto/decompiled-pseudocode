/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ @ 0x1C009806C
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00ABB60 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00983AC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this)
{
  struct _FAST_MUTEX *v1; // rbx
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rdi
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8

  v1 = (struct _FAST_MUTEX *)((char *)this + 168);
  v3 = 0;
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v4 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v4);
  }
  KeAcquireGuardedMutex(v1);
  v6 = (__int64 *)*((_QWORD *)this + 16);
  if ( v6 != (__int64 *)((char *)this + 128) )
  {
    while ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v6 + 30), 1u);
      if ( *((_DWORD *)v6 + 95) == 5 )
        ++v3;
      v7 = (struct _ERESOURCE *)(v6 + 30);
      v6 = (__int64 *)*v6;
      if ( v6 == (__int64 *)((char *)this + 128) )
        v6 = 0LL;
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  KeReleaseGuardedMutex(v1);
  if ( !v3 )
  {
    LOBYTE(v10) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, v9, v10, 8LL, 0LL);
  }
}
