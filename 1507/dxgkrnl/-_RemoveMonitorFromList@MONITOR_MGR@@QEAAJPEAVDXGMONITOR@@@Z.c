/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB294
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB3D0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C01817EC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C018192C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(
        struct _FAST_MUTEX *this,
        struct DXGMONITOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGMONITOR **p_Contention; // rcx
  struct DXGMONITOR *v10; // rax
  struct DXGMONITOR *v11; // rcx
  struct DXGMONITOR **v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = (struct DXGMONITOR **)&this[2].Contention;
  if ( !a2 || (v10 = *p_Contention, *p_Contention == (struct DXGMONITOR *)p_Contention) )
  {
LABEL_16:
    v16 = WdLogNewEntry5_WdAssertion(p_Contention, v6, v7, v8);
    WdLogEvent5_WdAssertion(v16);
  }
  else
  {
    while ( v10 != a2 )
    {
      if ( p_Contention == (struct DXGMONITOR **)v10 )
        goto LABEL_16;
      v10 = *(struct DXGMONITOR **)v10;
    }
  }
  v11 = *(struct DXGMONITOR **)a2;
  v12 = (struct DXGMONITOR **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGMONITOR **)(*(_QWORD *)a2 + 8LL) != a2 || *v12 != a2 )
    __fastfail(3u);
  *v12 = v11;
  *((_QWORD *)v11 + 1) = v12;
  --LODWORD(this[2].Owner);
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v6, v7, v8);
    WdLogEvent5_WdAssertion(v17);
  }
  KeReleaseGuardedMutex(this + 3);
  return 0LL;
}
