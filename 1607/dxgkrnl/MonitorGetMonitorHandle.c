/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C00BA610
 * Callers:
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0082CBC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00BA098 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00BA340 (DxgkGetMonitorInternalInfo.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00FAE30 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C00FC100 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkGetMonitorEdid @ 0x1C017A560 (DxgkGetMonitorEdid.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C017A7D0 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01B0F60 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01B1950 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000A734 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C007AE44 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(DXGADAPTER *this, __int64 a2, __int64 a3, void *a4, _QWORD *a5)
{
  __int64 v6; // r14
  char v7; // r12
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  struct _FAST_MUTEX *v12; // rdi
  int MonitorInstance; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  DXGMONITOR *v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  if ( !this )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( !*((_QWORD *)this + 266) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v18);
  }
  v12 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 266) + 96LL);
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v23 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v12, v6, v7, (ULONG **)&v23);
  v15 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v14);
    *(_QWORD *)(v19 + 24) = (unsigned int)v6;
    *(_QWORD *)(v19 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v19);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v21 + 24) = (unsigned int)v6;
    *(_QWORD *)(v21 + 32) = v12;
    WdLogEvent5_WdError(v21);
    return v15;
  }
  else
  {
    v16 = v23;
    if ( !v23 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v22);
    }
    DXGMONITOR::_AddReference(v16, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v16);
    return 0LL;
  }
}
