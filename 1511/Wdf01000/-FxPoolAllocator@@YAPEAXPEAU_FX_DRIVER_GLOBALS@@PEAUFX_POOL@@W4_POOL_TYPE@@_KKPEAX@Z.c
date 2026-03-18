/*
 * XREFs of ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700
 * Callers:
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003D38 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfRequestCreate @ 0x1C0004DF0 (imp_WdfRequestCreate.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0005BC8 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006070 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00087F0 (imp_WdfRegistryOpenKey.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfMemoryCreate @ 0x1C000D480 (imp_WdfMemoryCreate.c)
 *     GetImageName @ 0x1C000E28C (GetImageName.c)
 *     QueryAndAllocString @ 0x1C000E5D0 (QueryAndAllocString.c)
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C0011048 (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0011AA0 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00160CC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0016240 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C0018170 (-AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0018C60 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0019880 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001AF10 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001B9DC (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001CE88 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001D150 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C001D280 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C001D5B0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001F684 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001F830 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FA50 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0020120 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0023840 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0023B6C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0023DE0 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0024670 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002592C (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025F90 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C0027694 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027DC0 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0028170 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0028310 (imp_WdfRegistryQueryMultiString.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028600 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C0028820 (imp_WdfRegistryQueryString.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfPdoInitAllocate @ 0x1C002A190 (imp_WdfPdoInitAllocate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C002B4F0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002CFB0 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C002D2E0 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C002E430 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C002E540 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0031564 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0032180 (imp_WdfPdoInitAddDeviceText.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00322B4 (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0034358 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00573C0 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C0063830 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0063990 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C0063AF0 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065FD0 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0069AE4 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C006BB6C (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006E6FC (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006E960 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006F0B8 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C00700F8 (-CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C0070BB0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0070FD0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0071350 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C00715F0 (imp_WdfRegistryQueryUnicodeString.c)
 *     FxGetDevicePropertyString @ 0x1C00727CC (FxGetDevicePropertyString.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0076F18 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C007AC90 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007B05C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007C954 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007CE0C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007D068 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007D2A4 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007D4C8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DC6C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C007E584 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007EE28 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C007EF5C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007F8D4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007FA4C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0080290 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C0080A4C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C008197C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00841A0 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087A60 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087C00 (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C008ACD0 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008C47C (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008DF00 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     VfAllocateContext @ 0x1C00B7B94 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C002E38C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C006B488 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C006C874 (-FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ddi @ 0x1C006ED5C (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C006EE4C (WPP_IFR_SF_i.c)
 */

_QWORD *__fastcall FxPoolAllocator(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FX_POOL *Pool,
        unsigned __int32 Type,
        SIZE_T Size,
        ULONG Tag,
        void *Caller)
{
  _QWORD *v6; // rdi
  SIZE_T v7; // rbx
  _QWORD *v11; // rax
  int WdfVerifierAllocateFailCount; // eax
  SIZE_T v14; // rdx
  _QWORD *PoolWithTag; // rax
  FX_POOL_TRACKER *v16; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  int globals; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]

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
        WPP_IFR_SF_ddi(FxDriverGlobals, v14, Type, Size, traceGuid, globals, v19, Size);
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)Type, v14, Tag);
        if ( PoolWithTag )
        {
          PoolWithTag[8] = PoolWithTag;
          PoolWithTag[9] = FxDriverGlobals;
          v6 = PoolWithTag + 10;
          if ( FxIsPagedPoolType((_POOL_TYPE)Type) )
            FxPoolInsertPagedAllocateTracker(Pool, v16, v7, Tag, Caller);
          else
            FxPoolInsertNonPagedAllocateTracker(Pool, v16, v7, Tag, Caller);
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
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xAu, WPP_wdfpool_cpp_Traceguids);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return 0LL;
}
