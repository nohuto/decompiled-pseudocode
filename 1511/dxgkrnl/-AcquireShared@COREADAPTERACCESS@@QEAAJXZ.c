/*
 * XREFs of ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001DAE0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001DB70 (-RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C005D208 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     sub_1C005E7E0 @ 0x1C005E7E0 (sub_1C005E7E0.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0089FE0 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C008AFC0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008B040 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkCreateDevice @ 0x1C008B790 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z @ 0x1C0093C38 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F874 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C009FC40 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A2170 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5B40 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     sub_1C00A64F0 @ 0x1C00A64F0 (sub_1C00A64F0.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00A93F4 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00AB7BC (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00AD130 (EnforceDriverModelScalingPolicy.c)
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00ADA04 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0 (DxgkGetAdapterDefaultScaling.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00B6230 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00B9A30 (DxgkGetDisplayModeList.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BB068 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@1I@Z@Z @ 0x1C00BBA7C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_M.c)
 *     OutputDuplProcessTerminate @ 0x1C00BBBD0 (OutputDuplProcessTerminate.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00BC380 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC830 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00BF0D0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     sub_1C00BF1C0 @ 0x1C00BF1C0 (sub_1C00BF1C0.c)
 *     sub_1C00BF2D0 @ 0x1C00BF2D0 (sub_1C00BF2D0.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1P6AJPEAV3@21@Z@Z @ 0x1C00C04E8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z @ 0x1C00C05D4 (-DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C0910 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C0A9C (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C0CE0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00C4084 (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00C4A78 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00C4E40 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C5230 (-CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00C5330 (DxgkQueryModeListCacheLuid.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00C61B0 (DxgkIsSourceInHardwareClone.c)
 *     DxgkIsPrimarySource @ 0x1C00C6310 (DxgkIsPrimarySource.c)
 *     DxgkIsVidPnSourceOwnerExclusive @ 0x1C00C65C0 (DxgkIsVidPnSourceOwnerExclusive.c)
 *     DxgkGetScanLine @ 0x1C00C8510 (DxgkGetScanLine.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00C97F0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00C9B60 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkGetAdapter @ 0x1C00CCB40 (DxgkGetAdapter.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A900 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012BCF0 (-DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C012BDB0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C012C270 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C012D748 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012DCD0 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0130554 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C0130680 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C0131630 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C01323C0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01336B0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0134490 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetIndependentFlipMode @ 0x1C0134DB0 (DxgkSetIndependentFlipMode.c)
 *     DxgkConfirmToken @ 0x1C01377B0 (DxgkConfirmToken.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0142370 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0142810 (DxgkInvalidateActiveVidPn.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0145C98 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkIsVidPnSourceOwnerDwm @ 0x1C0146AB0 (DxgkIsVidPnSourceOwnerDwm.c)
 *     DxgkGetPresentStats @ 0x1C014D0C0 (DxgkGetPresentStats.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C014DFF0 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     DxgkSetStablePowerState @ 0x1C014E7D0 (DxgkSetStablePowerState.c)
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C0153954 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0153B4C (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0153CBC (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C0153DF8 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     sub_1C01557F0 @ 0x1C01557F0 (sub_1C01557F0.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C0155894 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0155984 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C0155B40 (DxgkGetMonitorInternalInfo.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@1@Z@Z @ 0x1C015934C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C0159480 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPE.c)
 *     DxgkCreateOutputDupl @ 0x1C0159800 (DxgkCreateOutputDupl.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0168994 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E1E0 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E330 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E4C0 (-ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     sub_1C0182FB0 @ 0x1C0182FB0 (sub_1C0182FB0.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C0184A48 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 */

__int64 __fastcall COREADAPTERACCESS::AcquireShared(COREADAPTERACCESS *this)
{
  char *v1; // rdi
  __int64 v3; // rcx
  _QWORD *v5; // rax

  v1 = (char *)this + 8;
  if ( *((_BYTE *)this + 24) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v5[3] = 275LL;
    v5[4] = 4LL;
    v5[5] = v1;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  v3 = *((_QWORD *)v1 + 1);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v3 + 144) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v3 + 32)) )
      KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 1) + 32LL), Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)v1 + 1));
  }
  v1[16] = 1;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 160LL) == 1 )
  {
    if ( *((_QWORD *)this + 2) == *((_QWORD *)this + 5) )
      return 0LL;
    COREACCESS::AcquireShared((COREADAPTERACCESS *)((char *)this + 32));
    if ( *(_DWORD *)(*((_QWORD *)this + 5) + 160LL) == 1 )
    {
      return 0LL;
    }
    else
    {
      COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 32));
      COREACCESS::Release((COREACCESS *)v1);
      return 3221226166LL;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v1);
    return 3221226166LL;
  }
}
