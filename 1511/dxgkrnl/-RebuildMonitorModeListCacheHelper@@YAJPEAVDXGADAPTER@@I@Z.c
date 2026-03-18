/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0185350
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C0186F98 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  int MonitorInstance; // eax
  __int64 v6; // rcx
  DXGMONITOR *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  int updated; // eax
  struct _ERESOURCE *v11; // rcx
  DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 248);
  v13 = 0LL;
  v4 = a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v2 + 120), a2, 0, (ULONG **)&v13);
  v7 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v7 = v13;
    if ( !v13 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v7 + 240), 1u);
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v7, 1);
    v11 = (struct _ERESOURCE *)((char *)v7 + 240);
    LODWORD(v7) = updated;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v6);
    v8[3] = a1;
    v8[4] = v4;
    v8[5] = v7;
    WdLogEvent5_WdDmmEvent(v8);
  }
  return (unsigned int)v7;
}
