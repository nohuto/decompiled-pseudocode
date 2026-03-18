/*
 * XREFs of memmove @ 0x1C0085B00
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0003A60 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0003BAC (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C000AEBC (-ResetSystemColors@@YAXXZ.c)
 *     NtTokenManagerThread @ 0x1C000E260 (NtTokenManagerThread.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C000E7D0 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000E860 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C000E96C (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     NtDCompositionGetDeletedResources @ 0x1C000F740 (NtDCompositionGetDeletedResources.c)
 *     UserReAllocPool @ 0x1C0012260 (UserReAllocPool.c)
 *     RtlLoadStringOrError @ 0x1C0012C80 (RtlLoadStringOrError.c)
 *     UserReAllocPoolWithQuota @ 0x1C0014610 (UserReAllocPoolWithQuota.c)
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C0019100 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     LogDiagSDC @ 0x1C001BD78 (LogDiagSDC.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C001D664 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E110 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0025C98 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0025FA4 (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C00282D0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0028410 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0028CB8 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C00290D0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00293B0 (-ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotific.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C002946C (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C002B0B0 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B1C0 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     NtDCompositionSetResourceReferenceArrayProperty @ 0x1C002BB50 (NtDCompositionSetResourceReferenceArrayProperty.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002BE6C (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionSetResourceBufferProperty @ 0x1C002C9E0 (NtDCompositionSetResourceBufferProperty.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030E88 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030F1C (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0030FA8 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C003108C (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C0031290 (-InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0031348 (-ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0031990 (DrvEnumDisplayDevices.c)
 *     AllocAce @ 0x1C0032780 (AllocAce.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0046AF0 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00470AC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C004B530 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     SetHandleFlag @ 0x1C00524A0 (SetHandleFlag.c)
 *     NtGdiExtCreateRegion @ 0x1C0053100 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C00533E0 (NtGdiGetRegionData.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0058100 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0058890 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C005FCF0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0060040 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0060740 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvGetDisplayDriverNames @ 0x1C0064AB0 (DrvGetDisplayDriverNames.c)
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C0065868 (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     NtGdiGetCertificate @ 0x1C0067550 (NtGdiGetCertificate.c)
 *     NtGdiPolyPolyDraw @ 0x1C0068CF0 (NtGdiPolyPolyDraw.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006CD60 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     rimIoBuildDeviceConfigRequest @ 0x1C006E7E8 (rimIoBuildDeviceConfigRequest.c)
 *     rimProcessInput @ 0x1C006F0BC (rimProcessInput.c)
 *     RIMGetProductString @ 0x1C0073538 (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00782B4 (RIMReleasePointerDeviceInfo.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     FastGetProfileKeysW @ 0x1C007E5C0 (FastGetProfileKeysW.c)
 *     FastGetProfileValue @ 0x1C007E890 (FastGetProfileValue.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C007F188 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     InitSystemThread @ 0x1C00818B0 (InitSystemThread.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0083240 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00839E0 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     UserPostNKAPCBuffer @ 0x1C00A4580 (UserPostNKAPCBuffer.c)
 *     HMCleanupGrantedHandle @ 0x1C00AB4B0 (HMCleanupGrantedHandle.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00ABD50 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00AC530 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00ACC30 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00ACFB0 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00ADB60 (NtUserSetFeatureReportResponse.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00AFB90 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C00AFF60 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00B27E0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00B28A0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00B5748 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00B6D10 (NtHWCursorUpdatePointer.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B92E0 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BC010 (DrvProcessSetDisplayConfigParameters.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00BFCCC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0330 (NtGdiConfigureOPMProtectedOutput.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00C1780 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x1C00C1D70 (RIMInjectInput.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C6438 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C6758 (RIMIDEInjectMouseInput.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00C732C (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00C7A04 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C8588 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMStoreRawDataBlock @ 0x1C00C8B2C (RIMStoreRawDataBlock.c)
 *     rimFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C00C8C58 (rimFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C00CF158 (rimDispatchHidKeyboardInputData.c)
 *     rimReportHidKeyboardInputData @ 0x1C00CF9BC (rimReportHidKeyboardInputData.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D1588 (rimObsDeliverInputToObserver.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D41D0 (NtDCompositionSendDwmLpcMessage.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D5914 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D5FBC (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z @ 0x1C00D72E8 (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z.c)
 *     ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D7980 (-SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX.c)
 *     ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D7AB0 (-SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00D839C (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C00D9674 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00DE680 (-Grow@-$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00DFB50 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00DFE10 (NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E177C (--$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CON.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E1D14 (--$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_SYSTEM_DATA@@PEBU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E2270 (--$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAV.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_USE_DATA@@PEBU_CIT_USE_DATA@@@Z @ 0x1C00E2384 (--$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONT.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00E3578 (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z @ 0x1C00E36C0 (-CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00E3A18 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E4560 (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     WppTraceCallback @ 0x1C0125820 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
