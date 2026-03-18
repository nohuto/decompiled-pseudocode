/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4
 * Callers:
 *     MonitorGetLinkInfo @ 0x1C007A3F4 (MonitorGetLinkInfo.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0089084 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorGetDeviceObject @ 0x1C00BA238 (MonitorGetDeviceObject.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C00BA82C (MonitorGetPreferredScaleFactor.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00BA98C (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorIsMonitorConnected @ 0x1C00C3C08 (MonitorIsMonitorConnected.c)
 *     MonitorHandleInternalIOCtrl @ 0x1C00C4730 (MonitorHandleInternalIOCtrl.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00D18F0 (MonitorGetMonitorOrientationsFromTarget.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00D979C (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00EE40C (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00EE608 (MonitorCreatePhysicalMonitor.c)
 *     MonitorGetMonitorEldInformation @ 0x1C00EED78 (MonitorGetMonitorEldInformation.c)
 *     MonitorGetNativeFlags @ 0x1C00EF0CC (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00EF1CC (MonitorGetMonitorDescriptorIDs.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3684 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00F9890 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEAD0 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF4DC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF644 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01AF880 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01B017C (MonitorDisableMonitorVirtualModeSuport.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01B0318 (MonitorEnableDisableTargetAsHMD.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C01B061C (MonitorIsAudioSupportedInEdid.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B1760 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B1C80 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01B3510 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(struct _FAST_MUTEX *this, unsigned int a2, char a3, ULONG **a4)
{
  __int64 v4; // rsi
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

  v4 = a2;
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
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
    v19 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v19);
  }
  KeReleaseGuardedMutex(this + 3);
  return v13;
}
