/*
 * XREFs of memset @ 0x1C00333C0
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0001F60 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     GetImageName @ 0x1C00059B4 (GetImageName.c)
 *     QueryAndAllocString @ 0x1C0005CF8 (QueryAndAllocString.c)
 *     imp_WdfFdoLockStaticChildListForIteration @ 0x1C00081C0 (imp_WdfFdoLockStaticChildListForIteration.c)
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x1C0008280 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0008D00 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00094C4 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0009624 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0009C00 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000A980 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C000CA34 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000D780 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C000E17C (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C000F00C (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000F848 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C000FFA0 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0010230 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0010330 (imp_WdfPdoInitAddCompatibleID.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001088C (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0010E04 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011648 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0012150 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0012320 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0012450 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0013030 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0013250 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C00138E4 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0013DB0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     imp_WdfRequestCreate @ 0x1C0016110 (imp_WdfRequestCreate.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??0FxPowerIdleMachine@@QEAA@XZ @ 0x1C0017208 (--0FxPowerIdleMachine@@QEAA@XZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0017710 (imp_WdfRegistryOpenKey.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0017B80 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0018E00 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019028 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019068 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C001929C (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C001A150 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001B520 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C001C620 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C001D290 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001E0E8 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001ECA0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F194 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0020800 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020E38 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0021410 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     imp_WdfIoTargetOpen @ 0x1C00214A0 (imp_WdfIoTargetOpen.c)
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     FxRegisterBugCheckCallback @ 0x1C0021EB4 (FxRegisterBugCheckCallback.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0022350 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C00226F0 (FxRegistrySettingsInitialize.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0022E60 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0022F90 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00242B0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0026420 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     FxAllocateDriverGlobals @ 0x1C0027888 (FxAllocateDriverGlobals.c)
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0028570 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0028980 (-_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     imp_WdfInterruptCreate @ 0x1C0029630 (imp_WdfInterruptCreate.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C0029A3C (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0029D94 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryGlobalsCommission @ 0x1C002A918 (FxLibraryGlobalsCommission.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1C002ACD4 (FxInitializeBugCheckDriverInfo.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C002AE28 (FxLibraryGlobalsVerifyVersion.c)
 *     DriverEntry @ 0x1C002BF00 (DriverEntry.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C002DCF4 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C002E944 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     WppTraceCallbackWdf @ 0x1C002EB40 (WppTraceCallbackWdf.c)
 *     WppInitGlobalLoggerWdf @ 0x1C002EC04 (WppInitGlobalLoggerWdf.c)
 *     imp_WdfChildListBeginIteration @ 0x1C002EE70 (imp_WdfChildListBeginIteration.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C0030028 (--0FxFileObjectInfo@@QEAA@XZ.c)
 *     ?SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z @ 0x1C00336CC (-SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064C70 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C0065E50 (imp_WdfChildListRequestChildEject.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KK@Z @ 0x1C006AC0C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KK@Z.c)
 *     LibraryLogEvent @ 0x1C006AE48 (LibraryLogEvent.c)
 *     McGenControlCallbackV2 @ 0x1C006AF40 (McGenControlCallbackV2.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C006B340 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C006B510 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C006B6E0 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfRequestGetCompletionParams @ 0x1C006E870 (imp_WdfRequestGetCompletionParams.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C0075E60 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007720C (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C00783E8 (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0078F24 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079038 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0079920 (FxDriverGlobalsInitializeDebugExtension.c)
 *     FxVerifyAllocateDebugInfo @ 0x1C0079C4C (FxVerifyAllocateDebugInfo.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007A758 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007C128 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0080FF4 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083530 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008B320 (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C008B3CC (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C008B6D0 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008C380 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008C4D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008C814 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008D5AC (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E1B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008E8F0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EDA0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C008EF2C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C008F40C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C008F6E4 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C0090178 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092864 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C009295C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0093630 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C00967D0 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C009D760 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009D8D0 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C009DBD8 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C00A1DC0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C00A319C (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C00A374C (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C00A3EA0 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C00A4708 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     USBDInternal_BuildServicePath @ 0x1C00A51F4 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00A5464 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x1C00A5684 (USBD_CreateHandle.c)
 *     USBD_IsochUrbAllocate @ 0x1C00A5A48 (USBD_IsochUrbAllocate.c)
 *     USBD_QueryUsbCapability @ 0x1C00A5C24 (USBD_QueryUsbCapability.c)
 *     USBD_UrbAllocate @ 0x1C00A5E8C (USBD_UrbAllocate.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1C00CD5E0 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00CD960 (AddEventHooksWdfIoQueueCreate.c)
 *     SepSddlGetAclForString @ 0x1C00D38D0 (SepSddlGetAclForString.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C003347D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
