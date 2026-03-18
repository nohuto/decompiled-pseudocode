/*
 * XREFs of ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001AF0 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfMemoryCreate @ 0x1C00029F0 (imp_WdfMemoryCreate.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00052E4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfRequestCreate @ 0x1C0006160 (imp_WdfRequestCreate.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00102B0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C00116C4 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     GetImageName @ 0x1C00136B4 (GetImageName.c)
 *     QueryAndAllocString @ 0x1C00139E8 (QueryAndAllocString.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0016928 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0018BD0 (imp_WdfRegistryQueryMultiString.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0019178 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0019670 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDriverCreate @ 0x1C0019790 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C001B570 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C001B830 (imp_WdfSpinLockCreate.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001BB14 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     imp_WdfWorkItemCreate @ 0x1C001BCD0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfObjectCreate @ 0x1C001C530 (imp_WdfObjectCreate.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C001D2F0 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001EB70 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F040 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002066C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00209E4 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020D30 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0021038 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00212F0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0022700 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0025414 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0025C00 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C002648C (-AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00266D0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0028FC0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029310 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002AD8C (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002BD40 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C002E150 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C002E444 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002F0E8 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C002FBAC (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C002FE90 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C002FFD0 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0030110 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0030330 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0030A90 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030EDC (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031294 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C0031470 (imp_WdfRegistryQueryString.c)
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C00321D0 (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x1C0032DE0 (imp_WdfPdoInitAllocate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0033F00 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00358B0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00367F0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0036E70 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C00370A0 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0037260 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0037B00 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C003A090 (imp_WdfPdoInitAddDeviceText.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003A1CC (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C003C9B0 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0067690 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C0075E80 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0075FE0 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C0076140 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0079E20 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C007B134 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007E114 (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0081214 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0081444 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0081C48 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C008265C (-CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C0083B80 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0083FB0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0084350 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0084620 (imp_WdfRegistryQueryUnicodeString.c)
 *     FxGetDevicePropertyString @ 0x1C0084D34 (FxGetDevicePropertyString.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C00891FC (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008CE6C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008CFE8 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008D830 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008E108 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C008EC24 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008F020 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0090958 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C009110C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009165C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C00919CC (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0091B00 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0091E1C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0092084 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00922D0 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00924FC (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092CBC (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C0093934 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00961C0 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009A6E0 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009A888 (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C009DD2C (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C009E178 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C009F914 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     VfAllocateContext @ 0x1C00D2048 (VfAllocateContext.c)
 * Callees:
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C007DA6C (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C007EE68 (-FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ddi @ 0x1C00818D8 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C00819D0 (WPP_IFR_SF_i.c)
 */

_QWORD *__fastcall FxPoolAllocator(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FX_POOL *Pool,
        unsigned __int32 Type,
        unsigned __int64 Size,
        ULONG Tag,
        void *Caller)
{
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbx
  _QWORD *v11; // rax
  int WdfVerifierAllocateFailCount; // eax
  SIZE_T v14; // rax
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
        v14 = 4096LL;
        if ( Size >= 0x1000 )
          v14 = Size;
        return ExAllocatePoolWithTag((POOL_TYPE)Type, v14, Tag);
      }
      if ( Size + 80 < Size )
      {
        WPP_IFR_SF_ddi(FxDriverGlobals, 0xFFu, Type, Size, traceGuid, globals, v19, Size);
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)Type, Size + 80, Tag);
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
