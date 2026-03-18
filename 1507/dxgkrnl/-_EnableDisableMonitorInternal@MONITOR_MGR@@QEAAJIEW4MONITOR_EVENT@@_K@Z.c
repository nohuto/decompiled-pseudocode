/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00BE1D4
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C008D164 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C002CC04 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r13d
  char v6; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *i; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax

  v5 = a4;
  v6 = a3;
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a1 == -168 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  for ( i = *(__int64 **)(a1 + 128); i != (__int64 *)(a1 + 128) && i; i = (__int64 *)*i )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 30), 1u);
    if ( v5 == 1 )
    {
      LOBYTE(v13) = v6;
      DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)i, v13, v14, v15);
    }
    else
    {
      *((_DWORD *)i + 6) ^= (*((_DWORD *)i + 6) ^ (32 * (v6 == 0))) & 0x20;
    }
    ExReleaseResourceLite((PERESOURCE)(i + 30));
    KeLeaveCriticalRegion();
    if ( *((_DWORD *)i + 94) != 1 )
    {
      v19 = i[48];
      if ( v19 )
      {
        if ( *(_DWORD *)(v19 + 376) != 1 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
          WdLogEvent5_WdAssertion(v20);
        }
        v21 = i[48];
        if ( !v21 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
          WdLogEvent5_WdAssertion(v22);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v21 + 240), 1u);
        if ( v5 == 1 )
        {
          LOBYTE(v23) = v6;
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)i[48], v23, v24, v25);
        }
        else
        {
          *(_DWORD *)(i[48] + 24) ^= (*(_DWORD *)(i[48] + 24) ^ (32 * (v6 == 0))) & 0x20;
        }
        ExReleaseResourceLite((PERESOURCE)(v21 + 240));
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( a1 == -168 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v26);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  MONITOR_MGR::_IssueMonitorEvent(a1, 0xFFFFFFFFLL, v5, a5, 0);
  MONITOR_MGR::_LogMonitorPresentEvent(a1, (unsigned int)(v6 != 0) + 9, 0xFFFFFFFFLL, 0LL, 0LL);
  return 0LL;
}
