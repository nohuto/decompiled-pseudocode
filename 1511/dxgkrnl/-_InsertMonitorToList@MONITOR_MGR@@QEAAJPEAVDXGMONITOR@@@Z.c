/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF1F0
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185E3C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  ULONG *p_Contention; // rax
  ULONG *v7; // rdi
  __int64 v8; // rcx
  char **v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v7 = *(ULONG **)&this[2].Contention;
  if ( v7 == &this[2].Contention || !v7 )
  {
LABEL_11:
    v9 = *(char ***)&this[2].Event.Header.Lock;
    *(_QWORD *)a2 = p_Contention;
    *((_QWORD *)a2 + 1) = v9;
    if ( *v9 != (char *)p_Contention )
      __fastfail(3u);
    *v9 = (char *)a2;
    *(_QWORD *)&this[2].Event.Header.Lock = a2;
    ++LODWORD(this[2].Owner);
    v11 = 0;
  }
  else
  {
    v8 = *((unsigned int *)a2 + 7);
    while ( (_DWORD)v8 != v7[7] )
    {
      v7 = *(ULONG **)v7;
      if ( v7 == p_Contention || !v7 )
        goto LABEL_11;
    }
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v7[7];
    WdLogEvent5_WdError(v10);
    v11 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v12);
  }
  KeReleaseGuardedMutex(this + 3);
  return v11;
}
