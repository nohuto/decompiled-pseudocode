/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEAD0
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C01B0908 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int MonitorInstance; // eax
  __int64 v8; // rcx
  DXGMONITOR *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rax
  int updated; // eax
  struct _ERESOURCE *v13; // rcx
  DXGMONITOR *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 266);
  v15 = 0LL;
  v6 = a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v3 + 96), a2, 0, (ULONG **)&v15);
  v9 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v9 = v15;
    if ( !v15 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v11);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v9 + 240), 1u);
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v9, a3, 1);
    v13 = (struct _ERESOURCE *)((char *)v9 + 240);
    LODWORD(v9) = updated;
    ExReleaseResourceLite(v13);
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
    v10[3] = a1;
    v10[4] = v6;
    v10[5] = v9;
    WdLogEvent5_WdDmmEvent(v10);
  }
  return (unsigned int)v9;
}
