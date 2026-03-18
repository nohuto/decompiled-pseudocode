/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0088FA0
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C3980 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089354 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v2; // esi
  struct _FAST_MUTEX *v3; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  struct _ERESOURCE *v8; // r15
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = 0;
  v3 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v10);
  }
  KeAcquireGuardedMutex(v3);
  v7 = (__int64 *)*((_QWORD *)this + 16);
  if ( v7 != (__int64 *)((char *)this + 128) )
  {
    while ( v7 )
    {
      KeEnterCriticalRegion();
      v8 = (struct _ERESOURCE *)(v7 + 30);
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 30), 1u);
      if ( *((_DWORD *)v7 + 95) == 5 )
        ++v2;
      v7 = (__int64 *)*v7;
      if ( v7 == (__int64 *)((char *)this + 128) )
        v7 = 0LL;
      ExReleaseResourceLite(v8);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v11);
  }
  KeReleaseGuardedMutex(v3);
  if ( !v2 )
  {
    LOBYTE(v9) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, 0xFFFFFFFFLL, v9, 8LL, 0LL, a2);
  }
}
