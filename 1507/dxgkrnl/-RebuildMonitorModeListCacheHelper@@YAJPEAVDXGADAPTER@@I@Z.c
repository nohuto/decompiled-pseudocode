/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0180E5C
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C01828EC (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(struct DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  int MonitorInstance; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGMONITOR *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int updated; // eax
  struct _ERESOURCE *v17; // rcx
  DXGMONITOR *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 247);
  v19 = 0LL;
  v4 = (unsigned int)a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v2 + 96), a2, 0LL, (ULONG **)&v19);
  v10 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v10 = v19;
    if ( !v19 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v10 + 240), 1u);
    LOBYTE(v13) = 1;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v10, v13, v14, v15);
    v17 = (struct _ERESOURCE *)((char *)v10 + 240);
    LODWORD(v10) = updated;
    ExReleaseResourceLite(v17);
    KeLeaveCriticalRegion();
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v7);
    v11[3] = a1;
    v11[4] = v4;
    v11[5] = v10;
    WdLogEvent5_WdDmmEvent(v11);
  }
  return (unsigned int)v10;
}
