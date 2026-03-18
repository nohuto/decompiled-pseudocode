/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C00985A0
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00C2A44 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C00CB10C (MonitorAdapterPowerChange.c)
 *     MonitorAdapterModeChange @ 0x1C01865D4 (MonitorAdapterModeChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017B624 (DmmIsTargetInClientVidPnTopology.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185938 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DXGMONITOR **v10; // rdi
  struct DXGMONITOR ***v11; // rbx
  bool i; // zf
  struct DXGMONITOR ***v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  struct DXGMONITOR **v16; // rcx
  struct DXGMONITOR ****v17; // rax
  struct DXGMONITOR ***v18; // rax
  struct DXGMONITOR **v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // rcx
  struct DXGMONITOR **v22; // rax
  struct DXGMONITOR *v23; // rdi
  struct DXGMONITOR *v24; // rax
  unsigned int v25; // ebx
  int v26; // eax
  struct DXGMONITOR *v28; // [rsp+30h] [rbp-10h] BYREF
  struct DXGMONITOR **v29; // [rsp+38h] [rbp-8h]
  char v30; // [rsp+78h] [rbp+38h] BYREF

  if ( a2 == 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v29 = &v28;
  v28 = (struct DXGMONITOR *)&v28;
  if ( a1 == -168 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v10 = (struct DXGMONITOR **)(a1 + 128);
  v11 = *(struct DXGMONITOR ****)(a1 + 128);
  if ( v11 != (struct DXGMONITOR ***)(a1 + 128) )
  {
    for ( i = v11 == 0LL; !i; i = v13 == 0LL )
    {
      v13 = (struct DXGMONITOR ***)*v11;
      if ( *v11 == v10 )
        v13 = 0LL;
      if ( a2 == *((_DWORD *)v11 + 94) )
      {
        if ( !a3
          || (v14 = *(_QWORD *)(a1 + 8),
              v15 = *((unsigned int *)v11 + 7),
              v30 = 0,
              (int)DmmIsTargetInClientVidPnTopology(*(_QWORD *)(v14 + 16), v15, &v30) >= 0)
          && !v30 )
        {
          v16 = *v11;
          v17 = (struct DXGMONITOR ****)v11[1];
          if ( (*v11)[1] != (struct DXGMONITOR *)v11 || *v17 != v11 )
            __fastfail(3u);
          *v17 = (struct DXGMONITOR ***)v16;
          v16[1] = (struct DXGMONITOR *)v17;
          v18 = (struct DXGMONITOR ***)v29;
          *v11 = &v28;
          v11[1] = (struct DXGMONITOR **)v18;
          if ( *v18 != &v28 )
            __fastfail(3u);
          *v18 = (struct DXGMONITOR **)v11;
          v29 = (struct DXGMONITOR **)v11;
          v19 = v11[48];
          if ( v19 )
          {
            if ( *((_DWORD *)v19 + 94) != 1 )
            {
              v20 = WdLogNewEntry5_WdAssertion(&v28);
              WdLogEvent5_WdAssertion(v20);
            }
            v21 = *v10;
            v22 = v11[48];
            *v22 = *v10;
            v22[1] = (struct DXGMONITOR *)v10;
            if ( *((struct DXGMONITOR ***)v21 + 1) != v10 )
              __fastfail(3u);
            *((_QWORD *)v21 + 1) = v22;
            *v10 = (struct DXGMONITOR *)v22;
          }
          else
          {
            --*(_DWORD *)(a1 + 120);
          }
        }
      }
      v11 = v13;
    }
  }
  while ( 1 )
  {
    v23 = v28;
    if ( v28 == (struct DXGMONITOR *)&v28 )
      break;
    v24 = *(struct DXGMONITOR **)v28;
    if ( *((struct DXGMONITOR ***)v28 + 1) != &v28 || *((struct DXGMONITOR **)v24 + 1) != v28 )
      __fastfail(3u);
    v28 = *(struct DXGMONITOR **)v28;
    *((_QWORD *)v24 + 1) = &v28;
    v25 = *((_DWORD *)v23 + 7);
    MONITOR_MGR::_IssueMonitorEvent(a1, v25, 0LL, 2LL, *((_DWORD *)v23 + 94));
    *((_QWORD *)v23 + 48) = 0LL;
    v26 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v23);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826, v25, v26, 0LL);
  }
  return 0LL;
}
