/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C008D2C8
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00AEE74 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C00BCAAC (MonitorAdapterPowerChange.c)
 *     MonitorAdapterModeChange @ 0x1C0181F94 (MonitorAdapterModeChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017708C (DmmIsTargetInClientVidPnTopology.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0181444 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  int v5; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR **v14; // rdi
  struct DXGMONITOR ***v15; // rbx
  struct DXGMONITOR ***v16; // r14
  struct DXGMONITOR *v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  struct DXGMONITOR **v24; // rcx
  struct DXGMONITOR ****v25; // rax
  struct DXGMONITOR ***v26; // rax
  struct DXGMONITOR **v27; // rax
  __int64 v28; // rax
  struct DXGMONITOR *v29; // rcx
  struct DXGMONITOR **v30; // rax
  struct DXGMONITOR *v31; // rax
  unsigned int v32; // ebx
  unsigned int v33; // eax
  struct DXGMONITOR *v34; // [rsp+30h] [rbp-10h] BYREF
  struct DXGMONITOR **v35; // [rsp+38h] [rbp-8h]
  char v36; // [rsp+78h] [rbp+38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a2 == 1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  v35 = &v34;
  v34 = (struct DXGMONITOR *)&v34;
  if ( a1 == -168 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v21);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v14 = (struct DXGMONITOR **)(a1 + 128);
  v15 = *(struct DXGMONITOR ****)(a1 + 128);
  if ( v15 != (struct DXGMONITOR ***)(a1 + 128) && v15 )
  {
    do
    {
      v16 = (struct DXGMONITOR ***)*v15;
      if ( *v15 == v14 )
        v16 = 0LL;
      if ( v5 == *((_DWORD *)v15 + 94) )
      {
        if ( !v4
          || (v22 = *(_QWORD *)(a1 + 8),
              v23 = *((unsigned int *)v15 + 7),
              v36 = 0,
              (int)DmmIsTargetInClientVidPnTopology(*(_QWORD *)(v22 + 16), v23, &v36) >= 0)
          && !v36 )
        {
          v24 = *v15;
          v25 = (struct DXGMONITOR ****)v15[1];
          if ( (*v15)[1] != (struct DXGMONITOR *)v15 || *v25 != v15 )
            __fastfail(3u);
          *v25 = (struct DXGMONITOR ***)v24;
          v24[1] = (struct DXGMONITOR *)v25;
          v26 = (struct DXGMONITOR ***)v35;
          *v15 = &v34;
          v15[1] = (struct DXGMONITOR **)v26;
          if ( *v26 != &v34 )
            __fastfail(3u);
          *v26 = (struct DXGMONITOR **)v15;
          v35 = (struct DXGMONITOR **)v15;
          v27 = v15[48];
          if ( v27 )
          {
            if ( *((_DWORD *)v27 + 94) != 1 )
            {
              v28 = WdLogNewEntry5_WdAssertion(&v34, v11, v12, v13);
              WdLogEvent5_WdAssertion(v28);
            }
            v29 = *v14;
            v30 = v15[48];
            *v30 = *v14;
            v30[1] = (struct DXGMONITOR *)v14;
            if ( *((struct DXGMONITOR ***)v29 + 1) != v14 )
              __fastfail(3u);
            *((_QWORD *)v29 + 1) = v30;
            *v14 = (struct DXGMONITOR *)v30;
          }
          else
          {
            --*(_DWORD *)(a1 + 120);
          }
        }
      }
      v15 = v16;
    }
    while ( v16 );
  }
  while ( 1 )
  {
    v17 = v34;
    if ( v34 == (struct DXGMONITOR *)&v34 )
      break;
    v31 = *(struct DXGMONITOR **)v34;
    if ( *((struct DXGMONITOR ***)v34 + 1) != &v34 || *((struct DXGMONITOR **)v31 + 1) != v34 )
      __fastfail(3u);
    v34 = *(struct DXGMONITOR **)v34;
    *((_QWORD *)v31 + 1) = &v34;
    v32 = *((_DWORD *)v17 + 7);
    MONITOR_MGR::_IssueMonitorEvent(a1, v32, 0LL, 2LL, *((_DWORD *)v17 + 94));
    *((_QWORD *)v17 + 48) = 0LL;
    v33 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v17);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826LL, v32, v33, 0LL);
  }
  return 0LL;
}
