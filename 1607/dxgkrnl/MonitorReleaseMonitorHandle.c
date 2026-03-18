/*
 * XREFs of MonitorReleaseMonitorHandle @ 0x1C00BA4C0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0032A18 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C0082D54 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00BA098 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00BA340 (DxgkGetMonitorInternalInfo.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00FAE30 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C00FC100 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkGetMonitorEdid @ 0x1C017A560 (DxgkGetMonitorEdid.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C017A7D0 (DxgkHandleForceProjectionMonitor.c)
 *     ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C01A6C30 (-ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMD.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01B1950 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C01B2230 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
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
  if ( !*((_QWORD *)this + 266) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 266) + 96LL) )
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
