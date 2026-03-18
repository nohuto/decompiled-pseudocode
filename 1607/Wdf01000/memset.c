/*
 * XREFs of memset @ 0x1C003C780
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfMemoryCreate @ 0x1C0001C80 (imp_WdfMemoryCreate.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0002280 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C00028C0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     imp_WdfRequestCreate @ 0x1C0002A20 (imp_WdfRequestCreate.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00073B0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0007AA0 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0007B90 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C00087E0 (-SelfDestruct@FxObject@@MEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0008F40 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C000CCD0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C000CE0C (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C000EFA0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0011A84 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0011DA4 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0014D44 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C00150FC (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00151E8 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015444 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfInterruptCreate @ 0x1C0015980 (imp_WdfInterruptCreate.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C00167A8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0016D30 (imp_WdfPdoInitAddCompatibleID.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C0016F80 (--_GFxString@@UEAAPEAXI@Z.c)
 *     imp_WdfDriverCreate @ 0x1C00173E0 (imp_WdfDriverCreate.c)
 *     GetImageName @ 0x1C0017740 (GetImageName.c)
 *     QueryAndAllocString @ 0x1C0017A74 (QueryAndAllocString.c)
 *     FxRegisterBugCheckCallback @ 0x1C0018110 (FxRegisterBugCheckCallback.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C00185B0 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C0018950 (FxRegistrySettingsInitialize.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00190C8 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C001956C (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0019900 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001A21C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001A7C0 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001BAE0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001BCFC (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C001BE08 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001CCA0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001E5B0 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001E9D0 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C001F38C (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C0020138 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020924 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020A80 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00212D0 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0021900 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C0022638 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C0022C28 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0023590 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ??0FxPowerIdleMachine@@QEAA@XZ @ 0x1C0023A78 (--0FxPowerIdleMachine@@QEAA@XZ.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0024D60 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0024F88 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0024FC8 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025208 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0026280 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026B60 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0027BB0 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029C70 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C0029E60 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C002A394 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002AFD8 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C002B200 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002BC88 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C002C680 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C002C790 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CCE8 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002D058 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C002D548 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     imp_WdfIoTargetOpen @ 0x1C002D5E0 (imp_WdfIoTargetOpen.c)
 *     ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002DE80 (-_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C002E518 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C002EE50 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C002F690 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002FE74 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C002FFD4 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     imp_WdfFdoLockStaticChildListForIteration @ 0x1C0030660 (imp_WdfFdoLockStaticChildListForIteration.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0030700 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x1C00308B0 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0031740 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031BB0 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     FxAllocateDriverGlobals @ 0x1C0032940 (FxAllocateDriverGlobals.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0032AE0 (imp_WdfObjectDereferenceActual.c)
 *     FxLibraryGlobalsCommission @ 0x1C0035208 (FxLibraryGlobalsCommission.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1C00355B4 (FxInitializeBugCheckDriverInfo.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C0035708 (FxLibraryGlobalsVerifyVersion.c)
 *     DriverEntry @ 0x1C00364D0 (DriverEntry.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C0037194 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     WppTraceCallbackWdf @ 0x1C0037490 (WppTraceCallbackWdf.c)
 *     WppInitGlobalLoggerWdf @ 0x1C0037554 (WppInitGlobalLoggerWdf.c)
 *     imp_WdfChildListBeginIteration @ 0x1C0037A50 (imp_WdfChildListBeginIteration.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C0037FF8 (--0FxFileObjectInfo@@QEAA@XZ.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0039F40 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z @ 0x1C003CADC (-SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0063304 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00640E8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0066854 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C006C290 (imp_WdfChildListRequestChildEject.c)
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C006E9C0 (-FxIFRReplay@@YAX_K@Z.c)
 *     ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C006EC80 (-FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C00714B4 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     LibraryLogEvent @ 0x1C0071724 (LibraryLogEvent.c)
 *     McGenControlCallbackV2 @ 0x1C0071820 (McGenControlCallbackV2.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C0072100 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0072260 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C00723C0 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     ?CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z @ 0x1C0074934 (-CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C00790E8 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007A4AC (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C007AF8C (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007B904 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C007BE34 (FxDriverGlobalsInitializeDebugExtension.c)
 *     FxVerifyAllocateDebugInfo @ 0x1C007C160 (FxVerifyAllocateDebugInfo.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007CE04 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007E48C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0081A04 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00828D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083360 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085774 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008879C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C0088AF0 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C0088C34 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008A29C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008AA5C (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C008ADA0 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008B16C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008B9D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008BCE4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008CA2C (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C008D184 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C008D45C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008D6B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008E2FC (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E520 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008ECC4 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EFAC (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C008F138 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C008F8EC (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0096B90 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0096D00 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0097014 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C009B090 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C009BF78 (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C009C56C (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     USBDInternal_BuildServicePath @ 0x1C009D044 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C009D2B4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x1C009D4D4 (USBD_CreateHandle.c)
 *     USBD_IsochUrbAllocate @ 0x1C009D898 (USBD_IsochUrbAllocate.c)
 *     USBD_QueryUsbCapability @ 0x1C009DA74 (USBD_QueryUsbCapability.c)
 *     USBD_UrbAllocate @ 0x1C009DCDC (USBD_UrbAllocate.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1C00C6490 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00C6810 (AddEventHooksWdfIoQueueCreate.c)
 *     SepSddlGetAclForString @ 0x1C00CB670 (SepSddlGetAclForString.c)
 *     SepSddlAddAceToAcl @ 0x1C00CB9DC (SepSddlAddAceToAcl.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C003C83D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
