/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F35EC
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3684 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF644 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  ULONG *p_Contention; // rax
  ULONG *v5; // rdi
  char **v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

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
  p_Contention = &this[2].Contention;
  v5 = *(ULONG **)&this[2].Contention;
  if ( v5 == &this[2].Contention || !v5 )
  {
LABEL_6:
    v6 = *(char ***)&this[2].Event.Header.Lock;
    if ( *v6 != (char *)p_Contention )
      __fastfail(3u);
    *(_QWORD *)a2 = p_Contention;
    *((_QWORD *)a2 + 1) = v6;
    *v6 = (char *)a2;
    *(_QWORD *)&this[2].Event.Header.Lock = a2;
    ++LODWORD(this[2].Owner);
    v7 = 0;
  }
  else
  {
    v11 = *((unsigned int *)a2 + 7);
    while ( (_DWORD)v11 != v5[7] )
    {
      v5 = *(ULONG **)v5;
      if ( v5 == p_Contention || !v5 )
        goto LABEL_6;
    }
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = v5[7];
    WdLogEvent5_WdError(v12);
    v7 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(this + 3);
  return v7;
}
