/*
 * XREFs of MonitorReleaseMonitorHandle @ 0x1C00C3374
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002AEF4 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C008DC14 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00DCE0C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C00E9800 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C0155B40 (DxgkGetMonitorInternalInfo.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0155D90 (DxgkHandleForceProjectionMonitor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0165028 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C017D8C0 (-ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMD.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C0187FA0 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C0188880 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorReleaseMonitorHandle(DXGADAPTER *this, struct HDXGMONITOR__ *a2, PVOID Tag, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  v7 = WdLogNewEntry5_WdTrace(this, a2, Tag, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( !*((_QWORD *)this + 248) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 248) + 120LL) )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a2, &v12);
  if ( (int)result >= 0 )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)((char *)v12 + 344), Tag, 0x20u);
    return 0LL;
  }
  return result;
}
