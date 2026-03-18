/*
 * XREFs of memset @ 0x1C00890C0
 * Callers:
 *     ?EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003570 (-EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003830 (-EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003B68 (-EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004130 (-EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004710 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0004A30 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAUHWND__@@_N@Z @ 0x1C0004E10 (-RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA.c)
 *     RIMCacheAxisChildIndex @ 0x1C0005F00 (RIMCacheAxisChildIndex.c)
 *     RawInputManagerObjectCreate @ 0x1C00064F8 (RawInputManagerObjectCreate.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMCALMInitializeCALM @ 0x1C000A244 (RIMCALMInitializeCALM.c)
 *     rimCreateDev @ 0x1C0010D6C (rimCreateDev.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0010ED4 (RawInputManagerDeviceObjectCreate.c)
 *     EngAllocMem @ 0x1C00123A0 (EngAllocMem.c)
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C0012540 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C001262C (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0013B0C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014558 (-EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014AA0 (-EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0015B50 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0015C10 (-EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016664 (-EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016BB0 (-EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00181FC (-EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionSetResourceBufferProperty @ 0x1C0019940 (NtDCompositionSetResourceBufferProperty.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001DB5C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C001E1C0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E328 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C001F8A0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0039E10 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C003A24C (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C003D07C (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C003D384 (-EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C003E0C0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C003E6E4 (--0CCompositionBuffer@@IEAA@XZ.c)
 *     AllocQueue @ 0x1C0041270 (AllocQueue.c)
 *     HMAllocObject @ 0x1C0041A20 (HMAllocObject.c)
 *     GdiProcessCallout @ 0x1C0044F00 (GdiProcessCallout.c)
 *     ??0CInputSink@@QEAA@XZ @ 0x1C004A640 (--0CInputSink@@QEAA@XZ.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C004B304 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C004BA6C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004CF20 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004D140 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtTokenManagerThread @ 0x1C004E290 (NtTokenManagerThread.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004E418 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C00528E8 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0052B10 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0052F30 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C0053620 (DrvLogDiagDisplayChange.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0053914 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00568A8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C0058474 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00592A0 (DrvGetDisplayDriverParameters.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C005CDFC (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005D79C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006157C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 *     WinSqmAddToStreamEx @ 0x1C0062F60 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0063128 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x1C00646C0 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     DxDdCleanupDxGraphics @ 0x1C0064A48 (DxDdCleanupDxGraphics.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0065CF0 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065E04 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00664A8 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     InitializeGraphicsInfrastructure @ 0x1C0066C54 (InitializeGraphicsInfrastructure.c)
 *     RIMInitialize @ 0x1C0067120 (RIMInitialize.c)
 *     rimLoadImage @ 0x1C006741C (rimLoadImage.c)
 *     WinSqmStartSession @ 0x1C0067664 (WinSqmStartSession.c)
 *     McGenControlCallbackV2 @ 0x1C0067CF0 (McGenControlCallbackV2.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0067DF4 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0067EF8 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0069F00 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     DwmAsyncDestroyDCompositionHwndTarget @ 0x1C006A020 (DwmAsyncDestroyDCompositionHwndTarget.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C006BA6C (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006CB80 (-HMGrowHandleTable@@YAHXZ.c)
 *     HmgCreate @ 0x1C006CE6C (HmgCreate.c)
 *     UserCreateHeap @ 0x1C006D550 (UserCreateHeap.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0071220 (NtQueryCompositionSurfaceStatistics.c)
 *     NtDCompositionGetDeletedResources @ 0x1C0071700 (NtDCompositionGetDeletedResources.c)
 *     HmgPrefetchAllObjt @ 0x1C00719D0 (HmgPrefetchAllObjt.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     NtBindCompositionSurface @ 0x1C00720B0 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0073280 (NtQueryCompositionSurfaceBinding.c)
 *     ?EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00735B0 (-EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     UserReAllocPoolZInit @ 0x1C00755A0 (UserReAllocPoolZInit.c)
 *     UserReAllocPoolWithQuotaZInit @ 0x1C0075D00 (UserReAllocPoolWithQuotaZInit.c)
 *     NtUnBindCompositionSurface @ 0x1C0075E50 (NtUnBindCompositionSurface.c)
 *     EtwTraceUIPIMsgError @ 0x1C0076400 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIInputError @ 0x1C00765E0 (EtwTraceUIPIInputError.c)
 *     ?EmitUpdateCommands@CMatrixTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0076AB0 (-EmitUpdateCommands@CMatrixTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRotateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00772C0 (-EmitUpdateCommands@CRotateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0077504 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C00775C0 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     EtwTraceUIPISystemError @ 0x1C00778E0 (EtwTraceUIPISystemError.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0078968 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0078F50 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079454 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     Win32ExtractSessionPoolTagInfo @ 0x1C0079800 (Win32ExtractSessionPoolTagInfo.c)
 *     ?EmitCreate@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007A230 (-EmitCreate@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceUIPIEventHookError @ 0x1C007AC30 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceLayoutChangeStop @ 0x1C007B860 (EtwTraceLayoutChangeStop.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C007B8BC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007C70C (EtwTraceUIPIHandleValidationError.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C007D048 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C007D114 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     bLockEtwEnabled @ 0x1C007E778 (bLockEtwEnabled.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EAB4 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C007ED50 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0080958 (GreSfmCleanupPresentHistory.c)
 *     CaptureDriverInfo2W @ 0x1C0081530 (CaptureDriverInfo2W.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00835B4 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C0085C28 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C0085D14 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086248 (RIMDeliverConfigRequestWithTimeout.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00864FC (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0086960 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00873A0 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0088654 (-SetDPIinSetup@@YAJXZ.c)
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C0088760 (-AllowInteractiveServices@@YAHXZ.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00ACAD0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00ACBB0 (EtwTraceUIPIHookError.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00AFA14 (-DrvDriverFailure@@YAJXZ.c)
 *     WinSqmAddToStream @ 0x1C00B23C0 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00B25BC (WinSqmSetString.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B4580 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5CC0 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00BBFB0 (-QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ.c)
 *     CollectDriverFailureData @ 0x1C00BC490 (CollectDriverFailureData.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BD080 (DrvDisplaySwitchHandler.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BD2D0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     EngAllocSectionMem @ 0x1C00BEBA0 (EngAllocSectionMem.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00C5744 (RawInputManagerInputObserverObjectCreate.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C66E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C6C04 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00C7134 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C730C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C7400 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C762C (RIMIDEInjectMouseInput.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C00C77D4 (RIMIDESetLinkCollectionUsageValues.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C00CAE38 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 *     sub_1C00CE998 @ 0x1C00CE998 (sub_1C00CE998.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00D0120 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00D03F8 (rimContainsCustomHidKeyboardUsages.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C00D052C (rimDispatchHidKeyboardInputData.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00D087C (rimHidKeyboardIsButtonDevice.c)
 *     rimProcessHidKeyboardInput @ 0x1C00D0BB0 (rimProcessHidKeyboardInput.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00D0F58 (rimValidateCustomHidKeyboardUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00D1874 (RIMExtractCustomPTPSetting.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D2500 (RIMGetPTPFrameContactCount.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 *     rimObsCopyMessage @ 0x1C00D3138 (rimObsCopyMessage.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D3280 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C00D360C (rimObsPopInputMessage.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00D758C (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D7698 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D7968 (-EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D7A70 (-EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D87F8 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8F04 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D93A8 (-EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropert.c)
 *     ?EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D944C (-EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D94FC (-EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D975C (-EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPr.c)
 *     ?EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D99A4 (-EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC50C (-EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitComponents@CComponentTransform3DMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC8B4 (-EmitComponents@CComponentTransform3DMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD550 (-EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD780 (-EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE06C (-EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CTurbulenceEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE7F0 (-EmitData@CTurbulenceEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CLinearTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DEC1C (-EmitData@CLinearTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C00E12AC (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E2094 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E38CC (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E4080 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4498 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4AAC (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E59E4 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C00E5FEC (-ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00E6140 (-ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00E61EC (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E6278 (-ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z.c)
 *     WppTraceCallback @ 0x1C0128830 (WppTraceCallback.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 *     vInitXLATE @ 0x1C013C660 (vInitXLATE.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C008917D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
