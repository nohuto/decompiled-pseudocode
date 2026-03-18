/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74
 * Callers:
 *     MonitorIsMonitorConnected @ 0x1C005FEF0 (MonitorIsMonitorConnected.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C008CF18 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorGetDeviceObject @ 0x1C00A9050 (MonitorGetDeviceObject.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00ABC40 (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C00AC014 (MonitorGetPreferredScaleFactor.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AC358 (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorHandleInternalIOCtrl @ 0x1C00BA6CC (MonitorHandleInternalIOCtrl.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB3D0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00D6350 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00D7524 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorGetMonitorEldInformation @ 0x1C00DCB94 (MonitorGetMonitorEldInformation.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00DD70C (MonitorGetMonitorDescriptorIDs.c)
 *     MonitorIsPortraitFirstMonitor @ 0x1C00DDB00 (MonitorIsPortraitFirstMonitor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00DDE60 (MonitorCreatePhysicalMonitor.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0180E5C (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C01817EC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C018192C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181B48 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01823AC (MonitorDisableMonitorVirtualModeSuport.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C01825CC (MonitorIsAudioSupportedInEdid.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183700 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183C20 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0185310 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(struct _FAST_MUTEX *this, __int64 a2, __int64 a3, ULONG **a4)
{
  __int64 v4; // rsi
  char v6; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG *p_Contention; // rcx
  ULONG *i; // rax
  unsigned int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = (unsigned int)a2;
  v6 = a3;
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, 0LL);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(ULONG **)&this[2].Contention; i != p_Contention && i; i = *(ULONG **)i )
  {
    if ( i[7] == (_DWORD)v4 )
    {
      if ( v6 && i[94] != 1 )
        i = (ULONG *)*((_QWORD *)i + 48);
      if ( i )
      {
        *a4 = i;
        v13 = 0;
        goto LABEL_16;
      }
      break;
    }
  }
  v15 = WdLogNewEntry5_WdTrace(p_Contention, v8, v9, v10);
  v13 = -1073741275;
  *(_QWORD *)(v15 + 24) = v4;
  *(_QWORD *)(v15 + 32) = this;
LABEL_16:
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(p_Contention, v8, v9, v10);
    WdLogEvent5_WdAssertion(v19);
  }
  KeReleaseGuardedMutex(this + 3);
  return v13;
}
