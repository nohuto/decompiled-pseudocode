/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF14C
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185CE8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185E3C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  struct DXGMONITOR **p_Contention; // rcx
  struct DXGMONITOR *v5; // rax
  struct DXGMONITOR *v6; // rcx
  struct DXGMONITOR **v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = (struct DXGMONITOR **)&this[2].Contention;
  if ( !a2 || (v5 = *p_Contention, *p_Contention == (struct DXGMONITOR *)p_Contention) )
  {
LABEL_16:
    v11 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    while ( v5 != a2 )
    {
      if ( p_Contention == (struct DXGMONITOR **)v5 )
        goto LABEL_16;
      v5 = *(struct DXGMONITOR **)v5;
    }
  }
  v6 = *(struct DXGMONITOR **)a2;
  v7 = (struct DXGMONITOR **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGMONITOR **)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != a2 )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)v6 + 1) = v7;
  --LODWORD(this[2].Owner);
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v12);
  }
  KeReleaseGuardedMutex(this + 3);
  return 0LL;
}
