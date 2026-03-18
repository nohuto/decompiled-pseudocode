/*
 * XREFs of MonitorGetCCDMonitorID @ 0x1C00B62B8
 * Callers:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00B5ED0 (DmmGetTargetIdFromCcdMonitorId.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C00B613C (DmmAppendCcdConnectedSetForAdapter.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00B917C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00B9704 (-GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00BA340 (DxgkGetMonitorInternalInfo.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00FAE30 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0034EF8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C007B3FC (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(struct HDXGMONITOR__ *a1, int a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  DXGMONITOR *AttachedPhysicalMonitor; // rbx
  unsigned int MonitorCCDMonitorID; // eax
  struct _ERESOURCE *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGMONITOR *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    AttachedPhysicalMonitor = v14;
    if ( *((_DWORD *)v14 + 94) != 1 && DXGMONITOR::_GetAttachedPhysicalMonitor(v14) )
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(AttachedPhysicalMonitor);
    if ( !AttachedPhysicalMonitor )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v11);
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(AttachedPhysicalMonitor, 1, a2, a3);
    v9 = (struct _ERESOURCE *)((char *)AttachedPhysicalMonitor + 240);
    v10 = MonitorCCDMonitorID;
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
