/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ @ 0x1C008CE38
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C005FC40 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C008D164 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _FAST_MUTEX *v4; // rbx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = (struct _FAST_MUTEX *)((char *)this + 168);
  v6 = 0;
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-168LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  KeAcquireGuardedMutex(v4);
  v11 = (__int64 *)*((_QWORD *)this + 16);
  if ( v11 != (__int64 *)((char *)this + 128) )
  {
    while ( v11 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v11 + 30), 1u);
      if ( *((_DWORD *)v11 + 95) == 5 )
        ++v6;
      v12 = (struct _ERESOURCE *)(v11 + 30);
      v11 = (__int64 *)*v11;
      if ( v11 == (__int64 *)((char *)this + 128) )
        v11 = 0LL;
      ExReleaseResourceLite(v12);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v16);
  }
  KeReleaseGuardedMutex(v4);
  if ( !v6 )
  {
    LOBYTE(v14) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, v13, v14, 8LL, 0LL);
  }
}
