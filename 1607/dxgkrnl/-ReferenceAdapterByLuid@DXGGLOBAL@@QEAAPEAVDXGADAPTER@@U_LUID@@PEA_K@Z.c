/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10
 * Callers:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C0078EBC (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C007C820 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00B917C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00BA120 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00BA340 (DxgkGetMonitorInternalInfo.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00BC468 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00C3694 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00C49F8 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00C5260 (DxgkIsSourceInHardwareClone.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D149C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00D5AF4 (EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D5CD0 (DxgkGetAdapterDefaultScaling.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00D5F10 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00D6630 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00D9624 (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00DA500 (DxgkQueryModeListCacheLuid.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014D63C (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C014EAF8 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsMonitorConnected @ 0x1C014EC30 (DxgkIsMonitorConnected.c)
 *     DxgkQueryStatistics @ 0x1C014FEC0 (DxgkQueryStatistics.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C01700E0 (DxgkWin32kSetPointerPosition.c)
 *     DxgkWin32kSetPointerShape @ 0x1C01701C0 (DxgkWin32kSetPointerShape.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178868 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01789D8 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0178BDC (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0178D54 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C017A2A8 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C017A3A0 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkGetMonitorEdid @ 0x1C017A560 (DxgkGetMonitorEdid.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C017A7D0 (DxgkHandleForceProjectionMonitor.c)
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C017ABA0 (DxgkSimulateMonitorsIfNecessary.c)
 *     IsMiniportDriverCCDSupport @ 0x1C017AE44 (IsMiniportDriverCCDSupport.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01AE088 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C01AE170 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD **v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  DXGFASTMUTEX *v13; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+28h] [rbp-8h]

  v22 = 0;
  v21 = (DXGGLOBAL *)((char *)this + 376);
  if ( this == (DXGGLOBAL *)-376LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(-376LL);
    *(_QWORD *)(v16 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v21 + 1) == CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v17 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v22 )
  {
    v18 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(
                      CurrentThread,
                      a2,
                      a3);
    v18[5] = &v21;
    v18[3] = 275LL;
    v18[4] = 4LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  DXGFASTMUTEX::Acquire(v21);
  v8 = (_QWORD **)((char *)this + 416);
  v22 = 1;
  v9 = *v8;
  while ( v9 != v8 && v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    if ( *(_QWORD *)((char *)v10 + 268) == a2 )
    {
      _m_prefetchw(v10 + 3);
      v11 = v10[3];
      while ( v11 )
      {
        v6 = v11 + 1;
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
        if ( v12 == v11 )
        {
          *a3 = -1LL;
          goto LABEL_15;
        }
      }
    }
  }
  v10 = 0LL;
LABEL_15:
  if ( v22 )
  {
    v13 = v21;
    v22 = 0;
    if ( *((struct _KTHREAD **)v21 + 1) != KeGetCurrentThread() )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v9, v7);
      v19[3] = 275LL;
      v19[4] = 4LL;
      v19[5] = v13;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    if ( *((int *)v13 + 6) <= 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v20 + 24) = 370LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (*((_DWORD *)v13 + 6))-- == 1 )
    {
      *((_QWORD *)v13 + 1) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v13 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (struct DXGADAPTER *)v10;
}
