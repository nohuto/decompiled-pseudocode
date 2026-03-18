/*
 * XREFs of memset @ 0x1C0085E40
 * Callers:
 *     ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002FF0 (-EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003430 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0003A60 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C000AD10 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     DwmAsyncDestroyDCompositionHwndTarget @ 0x1C000AE30 (DwmAsyncDestroyDCompositionHwndTarget.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C000CAC8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAII@Z @ 0x1C000E3E8 (-TokenThread@CTokenManager@@SAJPEAXPEAII@Z.c)
 *     NtDCompositionGetDeletedResources @ 0x1C000F740 (NtDCompositionGetDeletedResources.c)
 *     HmgPrefetchAllObjt @ 0x1C000FA50 (HmgPrefetchAllObjt.c)
 *     NtBindCompositionSurface @ 0x1C000FEB0 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C00113C0 (NtQueryCompositionSurfaceBinding.c)
 *     UserReAllocPoolZInit @ 0x1C0012210 (UserReAllocPoolZInit.c)
 *     EtwTraceUIPIInputError @ 0x1C00127B0 (EtwTraceUIPIInputError.c)
 *     NtUnBindCompositionSurface @ 0x1C0012A50 (NtUnBindCompositionSurface.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0012D1C (-HMGrowHandleTable@@YAHXZ.c)
 *     EtwTraceUIPIMsgError @ 0x1C0013F50 (EtwTraceUIPIMsgError.c)
 *     ?EmitUpdateCommands@CRotateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014030 (-EmitUpdateCommands@CRotateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     UserReAllocPoolWithQuotaZInit @ 0x1C00145C0 (UserReAllocPoolWithQuotaZInit.c)
 *     EtwTraceUIPISystemError @ 0x1C0014BA0 (EtwTraceUIPISystemError.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0014E60 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?EmitUpdateCommands@CMatrixTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014FE0 (-EmitUpdateCommands@CMatrixTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceUIPIEventHookError @ 0x1C0016AD0 (EtwTraceUIPIEventHookError.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C00172E8 (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     ?EmitCreate@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017A60 (-EmitCreate@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0018564 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0018A0C (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceLayoutChangeStop @ 0x1C0018C20 (EtwTraceLayoutChangeStop.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C001AB7C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C001B38C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C001B424 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C001F740 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C001F960 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     ??0CInputSink@@QEAA@XZ @ 0x1C0021FB8 (--0CInputSink@@QEAA@XZ.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0023530 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     EngAllocMem @ 0x1C0024420 (EngAllocMem.c)
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C00245C0 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00246AC (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00267A8 (-EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0026DC0 (-EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028780 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028B70 (-EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0028CB8 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0028E38 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028FF0 (-EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029820 (-EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029D68 (-EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002C0BC (-EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003098C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     DrvEnumDisplayDevices @ 0x1C0031990 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z @ 0x1C0047418 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0047D80 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0048600 (NtQueryCompositionSurfaceStatistics.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00487D0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0048CAC (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00499B0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C004A190 (--0CCompositionBuffer@@IEAA@XZ.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     AllocQueue @ 0x1C004CEE0 (AllocQueue.c)
 *     HMAllocObject @ 0x1C004FB70 (HMAllocObject.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0057D10 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C0058020 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0058854 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0059800 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C005A240 (DrvLogDiagDisplayChange.c)
 *     GdiProcessCallout @ 0x1C005B5D0 (GdiProcessCallout.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0060040 (DrvGetDisplayDriverParameters.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0060834 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00639D0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0066F18 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00686F4 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0069220 (NtGdiGetDeviceCapsAll.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C006C948 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006CE2C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     Win32ExtractSessionPoolTagInfo @ 0x1C006D7A0 (Win32ExtractSessionPoolTagInfo.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006DC3C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C006DD28 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C006E618 (RIMDeliverConfigRequestWithTimeout.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C006ECDC (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     RIMCacheAxisChildIndex @ 0x1C0071EEC (RIMCacheAxisChildIndex.c)
 *     RIMCALMInitializeCALM @ 0x1C007215C (RIMCALMInitializeCALM.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 *     RawInputManagerObjectCreate @ 0x1C0072DC8 (RawInputManagerObjectCreate.c)
 *     rimCreateDev @ 0x1C00765D8 (rimCreateDev.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C007677C (RawInputManagerDeviceObjectCreate.c)
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0079DA0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C007A774 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     InitializeGraphicsInfrastructure @ 0x1C007AAEC (InitializeGraphicsInfrastructure.c)
 *     RIMInitialize @ 0x1C007AFC0 (RIMInitialize.c)
 *     rimLoadImage @ 0x1C007B310 (rimLoadImage.c)
 *     WinSqmStartSession @ 0x1C007B558 (WinSqmStartSession.c)
 *     McGenControlCallbackV2 @ 0x1C007BDA0 (McGenControlCallbackV2.c)
 *     HmgCreate @ 0x1C007CEA4 (HmgCreate.c)
 *     UserCreateHeap @ 0x1C007D480 (UserCreateHeap.c)
 *     bLockEtwEnabled @ 0x1C007D58C (bLockEtwEnabled.c)
 *     WinSqmAddToStreamEx @ 0x1C007E7E0 (WinSqmAddToStreamEx.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C007EC1C (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C007F188 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0080334 (GreSfmCleanupPresentHistory.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0080558 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080624 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0080A2C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C0082E30 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083390 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0083A70 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0085664 (-SetDPIinSetup@@YAJXZ.c)
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C008576C (-AllowInteractiveServices@@YAHXZ.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80 (-xxxDisplayDiagBlackScreenDetected@@YAXXZ.c)
 *     ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1C00A694C (-QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00A85B0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00A8690 (EtwTraceUIPIHookError.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00AB514 (-DrvDriverFailure@@YAJXZ.c)
 *     WinSqmAddToStream @ 0x1C00AE330 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00AE52C (WinSqmSetString.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEE40 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00AEE78 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00B1298 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00B28A0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B30A0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0?$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B71E8 (--0-$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00B7234 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B77B8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ @ 0x1C00B9F34 (-DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ.c)
 *     ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00BA778 (-QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ.c)
 *     CollectDriverFailureData @ 0x1C00BAC60 (CollectDriverFailureData.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BB850 (DrvDisplaySwitchHandler.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BBAA0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     EngAllocSectionMem @ 0x1C00BD430 (EngAllocSectionMem.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00BE4C8 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C40FC (RIMMarkEndPointerMessageDelivery.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00C48AC (RawInputManagerInputObserverObjectCreate.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C55DC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C57E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00C6248 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C6438 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C652C (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C6758 (RIMIDEInjectMouseInput.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C00C6900 (RIMIDESetLinkCollectionUsageValues.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C00C9D64 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CD4F0 (ApiSetGetPowerTransitionsState.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C00CD65C (rimReadSingleDigitizerToMonitorMappings.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00CED4C (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00CF024 (rimContainsCustomHidKeyboardUsages.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C00CF158 (rimDispatchHidKeyboardInputData.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00CF4A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimProcessHidKeyboardInput @ 0x1C00CF7DC (rimProcessHidKeyboardInput.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00CFB7C (rimValidateCustomHidKeyboardUsages.c)
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D0A88 (RIMGetPTPFrameContactCount.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D0E34 (RIMSendPTPLatencyMgtDeviceRequest.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D1588 (rimObsDeliverInputToObserver.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D41D0 (NtDCompositionSendDwmLpcMessage.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00D54EC (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D55F8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D59B4 (-EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D5ABC (-EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSurfaceStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6194 (-EmitSurfaceStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D688C (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6F5C (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D7390 (-EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D7440 (-EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D7800 (-EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D9FEC (-EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DA3A0 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DAE30 (-EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DB150 (-EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DB380 (-EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DBECC (-EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC374 (-EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CTurbulenceEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC890 (-EmitData@CTurbulenceEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CLinearTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DCC2C (-EmitData@CLinearTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD480 (-EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00DF270 (NtSetCompositionSurfaceStatistics.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C00DF414 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E014C (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E25CC (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ?CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z @ 0x1C00E2CD4 (-CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E2F1C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E3210 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E3FD8 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E4560 (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C00E45E0 (-ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4734 (-ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00E47E0 (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E486C (-ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z.c)
 *     WppTraceCallback @ 0x1C0125820 (WppTraceCallback.c)
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 *     vInitXLATE @ 0x1C0138A8C (vInitXLATE.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0085EFD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
