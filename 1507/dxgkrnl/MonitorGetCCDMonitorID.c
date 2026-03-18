/*
 * XREFs of MonitorGetCCDMonitorID @ 0x1C0099B70
 * Callers:
 *     ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005F310 (-GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C009A84C (DmmAppendCcdConnectedSetForAdapter.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C009C3C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C00AF6E0 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01518F0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C002CCB8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00980C8 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(struct HDXGMONITOR__ *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGMONITOR *AttachedPhysicalMonitor; // rbx
  __int64 v11; // rdx
  unsigned int MonitorCCDMonitorID; // eax
  struct _ERESOURCE *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v21 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v21);
  if ( (int)result >= 0 )
  {
    AttachedPhysicalMonitor = v21;
    if ( *((_DWORD *)v21 + 94) != 1 && DXGMONITOR::_GetAttachedPhysicalMonitor(v21, v6, v8, v9) )
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(AttachedPhysicalMonitor, v6, v8, v9);
    if ( !AttachedPhysicalMonitor )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v15);
      v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    LOBYTE(v11) = 1;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(
                            (const UNICODE_STRING *)AttachedPhysicalMonitor,
                            v11,
                            a2,
                            a3);
    v13 = (struct _ERESOURCE *)((char *)AttachedPhysicalMonitor + 240);
    v14 = MonitorCCDMonitorID;
    ExReleaseResourceLite(v13);
    KeLeaveCriticalRegion();
    return v14;
  }
  return result;
}
