/*
 * XREFs of memset @ 0x1C0036C40
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0003BB4 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003E5C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C000433C (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004740 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     imp_WdfRequestCreate @ 0x1C0004DF0 (imp_WdfRequestCreate.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005A30 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C00085D0 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00087F0 (imp_WdfRegistryOpenKey.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0008C30 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfMemoryCreate @ 0x1C000D480 (imp_WdfMemoryCreate.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C000DA30 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C000DEA0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     GetImageName @ 0x1C000E28C (GetImageName.c)
 *     QueryAndAllocString @ 0x1C000E5D0 (QueryAndAllocString.c)
 *     imp_WdfFdoLockStaticChildListForIteration @ 0x1C000FA50 (imp_WdfFdoLockStaticChildListForIteration.c)
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x1C000FAF0 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00118B8 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0012070 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ??0FxPowerIdleMachine@@QEAA@XZ @ 0x1C0012C98 (--0FxPowerIdleMachine@@QEAA@XZ.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C00142DC (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0014504 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0014544 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0014770 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C00156E0 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0016240 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00172A0 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0018910 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0018B30 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C00191C4 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0019880 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001AF10 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C001B8CC (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C001C7D4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001D014 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C001D280 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C001D5B0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001F684 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001FC3C (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0020120 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     FxRegisterBugCheckCallback @ 0x1C0020C04 (FxRegisterBugCheckCallback.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C00210A0 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C0021440 (FxRegistrySettingsInitialize.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0021BB0 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0022200 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00235F8 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0023840 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023A5C (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0023B6C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0023DE0 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0024670 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfIoTargetOpen @ 0x1C00252D0 (imp_WdfIoTargetOpen.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002568C (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002592C (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025F90 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0026490 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C00272E4 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0027584 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C0027694 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027DC0 (imp_WdfPdoInitAddCompatibleID.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C00280E0 (--_GFxString@@UEAAPEAXI@Z.c)
 *     imp_WdfChildListBeginIteration @ 0x1C0028D70 (imp_WdfChildListBeginIteration.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0028F64 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0029D64 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0029EC4 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002A650 (imp_WdfDmaEnablerCreate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C002B4F0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     FxAllocateDriverGlobals @ 0x1C002CE64 (FxAllocateDriverGlobals.c)
 *     ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002D640 (-_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C002E430 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     imp_WdfInterruptCreate @ 0x1C002E980 (imp_WdfInterruptCreate.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C002EDBC (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C002EEA8 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F104 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryGlobalsCommission @ 0x1C0030248 (FxLibraryGlobalsCommission.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1C00305F4 (FxInitializeBugCheckDriverInfo.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C0030748 (FxLibraryGlobalsVerifyVersion.c)
 *     DriverEntry @ 0x1C0030EC0 (DriverEntry.c)
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0032430 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     WppTraceCallbackWdf @ 0x1C0032AD0 (WppTraceCallbackWdf.c)
 *     WppInitGlobalLoggerWdf @ 0x1C0032B94 (WppInitGlobalLoggerWdf.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0033238 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C00335E8 (--0FxFileObjectInfo@@QEAA@XZ.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0035210 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z @ 0x1C0036F2C (-SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0055C6C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C005717C (--0FxIoContext@@QEAA@XZ.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C005DC60 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C005EB90 (imp_WdfChildListRequestChildEject.c)
 *     LibraryLogEvent @ 0x1C0062D10 (LibraryLogEvent.c)
 *     McGenControlCallbackV2 @ 0x1C0062E10 (McGenControlCallbackV2.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C0063830 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0063990 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C0063AF0 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     ?CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z @ 0x1C0064A44 (-CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C006A938 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C006BB6C (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C006C990 (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006D114 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C006D758 (FxDriverGlobalsInitializeDebugExtension.c)
 *     FxVerifyAllocateDebugInfo @ 0x1C006DA84 (FxVerifyAllocateDebugInfo.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006E6FC (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C00706C8 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0073A5C (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0074930 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00753C0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0076F18 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C007A8E0 (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C007A98C (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C007AC90 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007B05C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007B8C0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007BBD4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007C954 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007D2A4 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007D4C8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DC6C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DF54 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C007E0E0 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C007E584 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007E85C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C007F310 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C0080A4C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008110C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C008197C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C00884B0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088620 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0088928 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C008C620 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008D49C (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C008DA6C (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008E1B4 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C008E668 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     USBDInternal_BuildServicePath @ 0x1C008EDB4 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C008F024 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x1C008F244 (USBD_CreateHandle.c)
 *     USBD_IsochUrbAllocate @ 0x1C008F608 (USBD_IsochUrbAllocate.c)
 *     USBD_QueryUsbCapability @ 0x1C008F7E4 (USBD_QueryUsbCapability.c)
 *     USBD_UrbAllocate @ 0x1C008FA4C (USBD_UrbAllocate.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1C00B7470 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00B77F0 (AddEventHooksWdfIoQueueCreate.c)
 *     SepSddlGetAclForString @ 0x1C00BC640 (SepSddlGetAclForString.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0036CFD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
