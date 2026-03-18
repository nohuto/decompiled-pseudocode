/*
 * XREFs of ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     GetImageName @ 0x1C00059B4 (GetImageName.c)
 *     QueryAndAllocString @ 0x1C0005CF8 (QueryAndAllocString.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0008D00 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?Initialize@FxCallbackMutexLock@@UEAAXPEAVFxObject@@@Z @ 0x1C000A890 (-Initialize@FxCallbackMutexLock@@UEAAXPEAVFxObject@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000A980 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C000C430 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C000CA34 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000D780 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000E28C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000F6BC (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000F93C (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C000FCC0 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0010330 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00106A0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001088C (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0010E04 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0011830 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0012150 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0012320 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0013380 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C00140E4 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00142DC (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     imp_WdfRequestCreate @ 0x1C0016110 (imp_WdfRequestCreate.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00172A4 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0017710 (imp_WdfRegistryOpenKey.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C001AAFC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001B520 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C001C620 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C001CBE8 (-AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C001D9A0 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001ECA0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020A64 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00242B0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0027C60 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0028000 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0028620 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C0028F4C (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 *     ?Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z @ 0x1C002B6A0 (-Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C002C6C0 (imp_WdfRegistryQueryString.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C002CC50 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C002E2F0 (imp_WdfPdoInitAddDeviceText.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002E464 (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C002E944 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x1C002FA00 (imp_WdfPdoInitAllocate.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005D418 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C006B340 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C006B510 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C006B6E0 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C006FE40 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0077124 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007720C (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007A758 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C007A938 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007B0E4 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C007BDA0 (-CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C007C6C0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C007CF60 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007D690 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C007DA70 (imp_WdfRegistryQueryUnicodeString.c)
 *     FxGetDevicePropertyString @ 0x1C007FCB0 (FxGetDevicePropertyString.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C008B6D0 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008D5AC (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DAB8 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C008DD30 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E1B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C008F40C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C008FCEC (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008FE1C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00907B4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0090ACC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0091314 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092724 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C009295C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0099170 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CCAC (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CE6C (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C00A0088 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00A1C18 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00A3BEC (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     VfAllocateContext @ 0x1C00CDD30 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ddi @ 0x1C007AD88 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C007AE78 (WPP_IFR_SF_i.c)
 */

_QWORD *__fastcall FxPoolAllocator(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _LIST_ENTRY *Pool,
        unsigned __int32 Type,
        SIZE_T Size,
        ULONG Tag,
        _LIST_ENTRY *Caller)
{
  _QWORD *v6; // rdi
  SIZE_T v7; // rbx
  _QWORD *v11; // rax
  int WdfVerifierAllocateFailCount; // eax
  SIZE_T v14; // rdx
  ULONG v15; // r12d
  _QWORD *PoolWithTag; // rax
  _LIST_ENTRY **v17; // r15
  unsigned __int8 IsPagedPoolType; // al
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v20; // rcx
  unsigned int Flink_high; // eax
  KIRQL v22; // al
  _LIST_ENTRY *v23; // rdx
  KIRQL v24; // r8
  unsigned __int64 Flink; // rdx
  unsigned int v26; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  int globals; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+30h] [rbp-38h]
  int v30; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = Size;
  if ( Size )
  {
    if ( FxDriverGlobals->FxPoolTrackingOn )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        WdfVerifierAllocateFailCount = FxDriverGlobals->WdfVerifierAllocateFailCount;
        if ( WdfVerifierAllocateFailCount != -1 )
        {
          if ( !WdfVerifierAllocateFailCount )
          {
            WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xBu, WPP_wdfpool_cpp_Traceguids);
            return 0LL;
          }
          _InterlockedDecrement(&FxDriverGlobals->WdfVerifierAllocateFailCount);
        }
      }
      if ( Size >= 0xFB0 )
      {
        if ( Size < 0x1000 )
          v7 = 4096LL;
        return ExAllocatePoolWithTag((POOL_TYPE)Type, v7, Tag);
      }
      v14 = Size + 80;
      if ( Size + 80 < Size )
      {
        WPP_IFR_SF_ddi(FxDriverGlobals, v14, Type, Size, traceGuid, globals, v29, Size);
      }
      else
      {
        v15 = Tag;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)Type, v14, Tag);
        v17 = (_LIST_ENTRY **)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[8] = PoolWithTag;
          PoolWithTag[9] = FxDriverGlobals;
          v6 = PoolWithTag + 10;
          IsPagedPoolType = FxIsPagedPoolType((_POOL_TYPE)Type);
          *((_DWORD *)v17 + 6) = v15;
          v17[2] = Pool;
          v17[4] = (_LIST_ENTRY *)v7;
          if ( IsPagedPoolType )
          {
            v17[6] = Caller;
            *((_DWORD *)v17 + 10) = 1;
            ExAcquireFastMutex((PFAST_MUTEX)&Pool[2].Blink);
            Blink = Pool[6].Blink;
            *v17 = Pool + 6;
            v17[1] = Blink;
            if ( Blink->Flink != &Pool[6] )
              __fastfail(3u);
            Blink->Flink = (_LIST_ENTRY *)v17;
            Pool[6].Blink = (_LIST_ENTRY *)v17;
            Pool[7].Blink = (_LIST_ENTRY *)((char *)Pool[7].Blink + v7);
            ++HIDWORD(Pool[8].Flink);
            v20 = (unsigned __int64)Pool[7].Blink;
            Flink_high = HIDWORD(Pool[8].Flink);
            if ( (_LIST_ENTRY *)v20 > Pool[9].Flink )
              Pool[9].Flink = (_LIST_ENTRY *)v20;
            if ( Flink_high > HIDWORD(Pool[9].Blink) )
              HIDWORD(Pool[9].Blink) = Flink_high;
            ExReleaseFastMutex((PFAST_MUTEX)&Pool[2].Blink);
          }
          else
          {
            *((_DWORD *)v17 + 10) = ExDefaultNonPagedPoolType;
            v17[6] = Caller;
            v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Pool->Blink);
            v23 = Pool[1].Blink;
            *v17 = Pool + 1;
            v24 = v22;
            v17[1] = v23;
            if ( v23->Flink != &Pool[1] )
              __fastfail(3u);
            v23->Flink = (_LIST_ENTRY *)v17;
            Pool[1].Blink = (_LIST_ENTRY *)v17;
            Pool[7].Flink = (_LIST_ENTRY *)((char *)Pool[7].Flink + v7);
            ++LODWORD(Pool[8].Flink);
            Flink = (unsigned __int64)Pool[7].Flink;
            v26 = (unsigned int)Pool[8].Flink;
            if ( (_LIST_ENTRY *)Flink > Pool[8].Blink )
              Pool[8].Blink = (_LIST_ENTRY *)Flink;
            if ( v26 > LODWORD(Pool[9].Blink) )
              LODWORD(Pool[9].Blink) = v26;
            KeReleaseSpinLock((PKSPIN_LOCK)&Pool->Blink, v24);
          }
          return v6;
        }
      }
    }
    else
    {
      if ( Size >= 0x1000 )
        return ExAllocatePoolWithTag((POOL_TYPE)Type, v7, Tag);
      if ( Size + 16 >= Size )
      {
        v7 = Size + 16;
        if ( Size + 16 < 0x1000 )
        {
          v11 = ExAllocatePoolWithTag((POOL_TYPE)Type, Size + 16, Tag);
          if ( v11 )
          {
            *v11 = v11;
            v6 = v11 + 2;
            v11[1] = FxDriverGlobals;
          }
          return v6;
        }
        return ExAllocatePoolWithTag((POOL_TYPE)Type, v7, Tag);
      }
      WPP_IFR_SF_i(FxDriverGlobals, (unsigned __int8)Pool, 0xAu, 0xDu, WPP_wdfpool_cpp_Traceguids, Size);
    }
    return 0LL;
  }
  WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xAu, WPP_wdfpool_cpp_Traceguids);
  v30 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    FxDriverGlobals->Public.DriverName,
    (const char *)&v30,
    FxDriverGlobals->Public.DriverName,
    (const char *)&v30);
  if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0LL;
}
