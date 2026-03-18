/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB338
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB3D0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C018192C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(
        struct _FAST_MUTEX *this,
        struct DXGMONITOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG *p_Contention; // rax
  ULONG *v10; // rdi
  char **v11; // rcx
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

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
  p_Contention = &this[2].Contention;
  v10 = *(ULONG **)&this[2].Contention;
  if ( v10 == &this[2].Contention || !v10 )
  {
LABEL_6:
    v11 = *(char ***)&this[2].Event.Header.Lock;
    *(_QWORD *)a2 = p_Contention;
    *((_QWORD *)a2 + 1) = v11;
    if ( *v11 != (char *)p_Contention )
      __fastfail(3u);
    *v11 = (char *)a2;
    *(_QWORD *)&this[2].Event.Header.Lock = a2;
    ++LODWORD(this[2].Owner);
    v12 = 0;
  }
  else
  {
    v16 = *((unsigned int *)a2 + 7);
    while ( (_DWORD)v16 != v10[7] )
    {
      v10 = *(ULONG **)v10;
      if ( v10 == p_Contention || !v10 )
        goto LABEL_6;
    }
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = v10[7];
    WdLogEvent5_WdError(v17);
    v12 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11, v6, v7, v8);
    WdLogEvent5_WdAssertion(v18);
  }
  KeReleaseGuardedMutex(this + 3);
  return v12;
}
