/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00CC8A8
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00983AC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C002C614 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *i; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax

  if ( a4 - 1 > 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a1 == -168 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  for ( i = *(__int64 **)(a1 + 128); i != (__int64 *)(a1 + 128) && i; i = (__int64 *)*i )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 30), 1u);
    if ( a4 == 1 )
      DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)i, a3);
    else
      *((_DWORD *)i + 6) ^= (*((_DWORD *)i + 6) ^ (32 * (a3 == 0))) & 0x20;
    ExReleaseResourceLite((PERESOURCE)(i + 30));
    KeLeaveCriticalRegion();
    if ( *((_DWORD *)i + 94) != 1 )
    {
      v12 = i[48];
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 376) != 1 )
        {
          v13 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v13);
        }
        v14 = i[48];
        if ( !v14 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v15);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 240), 1u);
        if ( a4 == 1 )
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)i[48], a3);
        else
          *(_DWORD *)(i[48] + 24) ^= (*(_DWORD *)(i[48] + 24) ^ (32 * (a3 == 0))) & 0x20;
        ExReleaseResourceLite((PERESOURCE)(v14 + 240));
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( a1 == -168 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v16);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  MONITOR_MGR::_IssueMonitorEvent(a1, 0xFFFFFFFFLL, a4, a5, 0);
  MONITOR_MGR::_LogMonitorPresentEvent(a1, (a3 != 0) + 9, 0xFFFFFFFF, 0, 0LL);
  return 0LL;
}
