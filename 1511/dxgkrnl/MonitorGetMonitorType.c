/*
 * XREFs of MonitorGetMonitorType @ 0x1C00A6338
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5B40 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00A61D4 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0155D90 (DxgkHandleForceProjectionMonitor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0165028 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorType(DXGADAPTER *this, struct HDXGMONITOR__ *a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*((_QWORD *)this + 248) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 248) + 120LL) )
  {
    v14 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a2, &v16);
  if ( (int)result >= 0 )
  {
    v11 = v16;
    if ( !v16 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v15);
    }
    *a3 = *((_DWORD *)v11 + 94);
    return 0LL;
  }
  return result;
}
