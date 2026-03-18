/*
 * XREFs of ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C0004430 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C00048C0 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     GetImageName @ 0x1C00059B4 (GetImageName.c)
 *     QueryAndAllocString @ 0x1C0005CF8 (QueryAndAllocString.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0009070 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0009840 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0009A50 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0009F30 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1C000A110 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C000A2E0 (--_GFxSystemWorkItem@@UEAAPEAXI@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C000A744 (--1FxAutoString@@QEAA@XZ.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C000CA34 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000E28C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C000F1E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C000FDCC (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C000FE58 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C000FFA0 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0010230 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0010B40 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0015D30 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0017B80 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C080 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C001D290 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D78C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C001F7C0 (--_EFxWorkItem@@UEAAPEAXI@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0021410 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     ??_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z @ 0x1C0028400 (--_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C002C6C0 (imp_WdfRegistryQueryString.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031C70 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C005BA38 (--1FxPagedObject@@UEAA@XZ.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C005D32C (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C0064BF0 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C0068210 (--_GFxDpc@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C0068D10 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C0069120 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0069D10 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C006AAF0 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ??1Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C006B1A0 (--1Info@FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C006B1B8 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ??_EFxCallbackLock@@UEAAPEAXI@Z @ 0x1C0074D30 (--_EFxCallbackLock@@UEAAPEAXI@Z.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0074D60 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x1C0074DA0 (--_EFxCallbackSpinLock@@UEAAPEAXI@Z.c)
 *     ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1C0074DE0 (--_GFxDeviceBase@@MEAAPEAXI@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C0075BF4 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0075D20 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C007630C (--1FxDevice@@UEAA@XZ.c)
 *     ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C00765E0 (--_GFxDevice@@UEAAPEAXI@Z.c)
 *     ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C0076FF0 (--_EFxRequestFromLookaside@@UEAAPEAXI@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C007702C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C00777E0 (--_EFxTimer@@UEAAPEAXI@Z.c)
 *     ??_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z @ 0x1C0077BF0 (--_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z.c)
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1C0077CB0 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 *     ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0077D20 (--_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C00781A0 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C00781E0 (--_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C0078820 (--_EFxRequestMemory@@UEAAPEAXI@Z.c)
 *     ??_EFxMemoryBufferFromPool@@MEAAPEAXI@Z @ 0x1C0078CD0 (--_EFxMemoryBufferFromPool@@MEAAPEAXI@Z.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C0078EE0 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??1FxTagHistory@@QEAA@XZ @ 0x1C007A8F0 (--1FxTagHistory@@QEAA@XZ.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007B2D0 (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C007BC6C (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C007C6C0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C007CF60 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007D690 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C007DA70 (imp_WdfRegistryQueryUnicodeString.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C007F908 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x1C007FC50 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 *     FxGetDevicePropertyString @ 0x1C007FCB0 (FxGetDevicePropertyString.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0080E1C (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C00810B0 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     ??_EFxIoTarget@@MEAAPEAXI@Z @ 0x1C00838E0 (--_EFxIoTarget@@MEAAPEAXI@Z.c)
 *     ??_EFxIoTargetSelf@@MEAAPEAXI@Z @ 0x1C0085030 (--_EFxIoTargetSelf@@MEAAPEAXI@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0085A80 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C008B500 (--_EFxUsbDevice@@MEAAPEAXI@Z.c)
 *     ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x1C008B5B0 (--_EFxUsbDeviceControlContext@@UEAAPEAXI@Z.c)
 *     ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x1C008B5F0 (--_GFxUsbDeviceStringContext@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C008B680 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C008B6D0 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008C380 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008D5AC (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008E8F0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EDA0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C008F1FC (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x1C008F2B0 (--_EFxUsbInterface@@MEAAPEAXI@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C008F2EC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C008FCEC (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008FE1C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x1C00904D0 (--_GFxUsbPipe@@MEAAPEAXI@Z.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C009050C (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 *     ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x1C0090530 (--_EFxUsbPipeRequestContext@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x1C0090570 (--_EFxUsbPipeTransferContext@@UEAAPEAXI@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0094728 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x1C00947F0 (--_EFxPkgIo@@UEAAPEAXI@Z.c)
 *     ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1C0095520 (--_EFxIoQueue@@UEAAPEAXI@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0095930 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C009907C (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x1C0099110 (--_EFxPkgPdo@@UEAAPEAXI@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C009914C (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C00993C0 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00996A0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009CA20 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C009CC00 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C009CC30 (--_EFxPkgPnp@@MEAAPEAXI@Z.c)
 *     ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C009CC6C (--_GFxSelfManagedIoMachine@@QEAAPEAXI@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C009FA48 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 *     ??_EFxPkgFdo@@MEAAPEAXI@Z @ 0x1C009FA90 (--_EFxPkgFdo@@MEAAPEAXI@Z.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C009FAD0 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C009FE18 (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1C00A1B60 (--_EFxInterrupt@@UEAAPEAXI@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A1B9C (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C00A49B0 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C00A63D0 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 *     ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C00A6B10 (--_EFxRelatedDevice@@UEAAPEAXI@Z.c)
 *     ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1C00A6CC0 (--_GFxSyncRequest@@UEAAPEAXI@Z.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1C00CD5E0 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00CD960 (AddEventHooksWdfIoQueueCreate.c)
 *     VfAddContextToHandle @ 0x1C00CDBB4 (VfAddContextToHandle.c)
 * Callees:
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

void __fastcall FxPoolFree(_QWORD *ptr)
{
  _POOL_TYPE *v1; // rbx
  unsigned __int8 IsPagedPoolType; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  _POOL_TYPE **v5; // rax
  KIRQL v6; // al
  __int64 v7; // rdx
  _POOL_TYPE **v8; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !ptr )
    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
  if ( ((unsigned __int16)ptr & 0xFFF) != 0 )
  {
    v1 = (_POOL_TYPE *)*(ptr - 2);
    if ( *(_BYTE *)(*(ptr - 1) + 264LL) )
    {
      IsPagedPoolType = FxIsPagedPoolType(v1[10]);
      v3 = *((_QWORD *)v1 + 2);
      if ( IsPagedPoolType )
      {
        ExAcquireFastMutex((PFAST_MUTEX)(v3 + 40));
        v4 = *(_QWORD *)v1;
        v5 = (_POOL_TYPE **)*((_QWORD *)v1 + 1);
        if ( *(_POOL_TYPE **)(*(_QWORD *)v1 + 8LL) != v1 || *v5 != v1 )
          __fastfail(3u);
        *v5 = (_POOL_TYPE *)v4;
        *(_QWORD *)(v4 + 8) = v5;
        *(_QWORD *)(*((_QWORD *)v1 + 2) + 120LL) -= *((_QWORD *)v1 + 4);
        --*(_DWORD *)(*((_QWORD *)v1 + 2) + 132LL);
        ExReleaseFastMutex((PFAST_MUTEX)(*((_QWORD *)v1 + 2) + 40LL));
      }
      else
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 8));
        v7 = *(_QWORD *)v1;
        v8 = (_POOL_TYPE **)*((_QWORD *)v1 + 1);
        if ( *(_POOL_TYPE **)(*(_QWORD *)v1 + 8LL) != v1 || *v8 != v1 )
          __fastfail(3u);
        *v8 = (_POOL_TYPE *)v7;
        *(_QWORD *)(v7 + 8) = v8;
        *(_QWORD *)(*((_QWORD *)v1 + 2) + 112LL) -= *((_QWORD *)v1 + 4);
        --*(_DWORD *)(*((_QWORD *)v1 + 2) + 128LL);
        KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)v1 + 2) + 8LL), v6);
      }
      memset(v1, 0, *((_QWORD *)v1 + 4) + 64LL);
    }
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    ExFreePoolWithTag(ptr, 0);
  }
}
