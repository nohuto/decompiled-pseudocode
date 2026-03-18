/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0098160 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C009C080 (MonitorGetMonitorOrientationsFromTarget.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C00A1780 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorIsMonitorConnected @ 0x1C00ABCE0 (MonitorIsMonitorConnected.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC904 (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C00ACDF8 (MonitorGetPreferredScaleFactor.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AD40C (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorGetDeviceObject @ 0x1C00BC490 (MonitorGetDeviceObject.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorHandleInternalIOCtrl @ 0x1C00C39EC (MonitorHandleInternalIOCtrl.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00E2FD4 (MonitorGetMonitorDescriptorIDs.c)
 *     MonitorGetNativeFlags @ 0x1C00E30C0 (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorEldInformation @ 0x1C00E3420 (MonitorGetMonitorEldInformation.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00E372C (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00E38F0 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00E3E40 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0185350 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185CE8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185E3C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0186058 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01869FC (MonitorDisableMonitorVirtualModeSuport.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C0186C78 (MonitorIsAudioSupportedInEdid.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0187DB0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01882D0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0189B20 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(struct _FAST_MUTEX *this, unsigned int a2, char a3, ULONG **a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG *p_Contention; // rcx
  ULONG *i; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = a2;
  if ( !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(ULONG **)&this[2].Contention; i != p_Contention && i; i = *(ULONG **)i )
  {
    if ( i[7] == (_DWORD)v4 )
    {
      if ( a3 && i[94] != 1 )
        i = (ULONG *)*((_QWORD *)i + 48);
      if ( i )
      {
        *a4 = i;
        v16 = 0;
        goto LABEL_18;
      }
      break;
    }
  }
  v17 = WdLogNewEntry5_WdTrace(p_Contention, v11, v12, v13);
  v16 = -1073741275;
  *(_QWORD *)(v17 + 24) = v4;
  *(_QWORD *)(v17 + 32) = this;
LABEL_18:
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v18);
  }
  KeReleaseGuardedMutex(this + 3);
  return v16;
}
