/*
 * XREFs of MonitorSerializeMonitor @ 0x1C0182A30
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017AEF0 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C0185668 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall MonitorSerializeMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGMONITOR *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  struct _ERESOURCE *v13; // rcx
  unsigned int v14; // ebx
  DXGMONITOR *v15; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v15 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v15);
  if ( (int)result >= 0 )
  {
    v10 = v15;
    if ( !v15 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v11);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 240), 1u);
    v12 = DXGMONITOR::_SerializeMonitor(v10, a2, a3);
    v13 = (struct _ERESOURCE *)((char *)v10 + 240);
    v14 = v12;
    ExReleaseResourceLite(v13);
    KeLeaveCriticalRegion();
    return v14;
  }
  return result;
}
