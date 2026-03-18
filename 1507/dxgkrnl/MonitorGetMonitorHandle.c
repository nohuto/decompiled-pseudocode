/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C00AF52C
 * Callers:
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C009653C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CD444 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00DC140 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C00DE3A0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01518F0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0151B30 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C0182F00 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01838F0 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000A6EC (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C0097F5C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(DXGADAPTER *this, __int64 a2, __int64 a3, void *a4, _QWORD *a5)
{
  __int64 v6; // r14
  char v7; // r12
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _FAST_MUTEX *v15; // rdi
  int MonitorInstance; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  DXGMONITOR *v22; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGMONITOR *v30; // [rsp+50h] [rbp+8h] BYREF

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
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v24);
  }
  v15 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 247) + 96LL);
  if ( !v15 )
  {
    v27 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  v30 = 0LL;
  LOBYTE(v13) = v7;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, (unsigned int)v6, v13, (ULONG **)&v30);
  v21 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v25 = WdLogNewEntry5_WdDmmEvent(v18);
    *(_QWORD *)(v25 + 24) = (unsigned int)v6;
    *(_QWORD *)(v25 + 32) = v15;
    WdLogEvent5_WdDmmEvent(v25);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v28 + 24) = (unsigned int)v6;
    *(_QWORD *)(v28 + 32) = v15;
    WdLogEvent5_WdError(v28);
    return v21;
  }
  else
  {
    v22 = v30;
    if ( !v30 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v29);
    }
    DXGMONITOR::_AddReference(v22, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v22);
    return 0LL;
  }
}
