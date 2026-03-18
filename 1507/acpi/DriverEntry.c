/*
 * XREFs of DriverEntry @ 0x1C0084228
 * Callers:
 *     GsDriverEntry @ 0x1C0084210 (GsDriverEntry.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 *     AcpiInitializeExternalResourceTranslation @ 0x1C0065DE0 (AcpiInitializeExternalResourceTranslation.c)
 *     ACPIGlobalInitialize @ 0x1C00849A8 (ACPIGlobalInitialize.c)
 *     ACPIInitializeWorker @ 0x1C0084A88 (ACPIInitializeWorker.c)
 *     Simulator_InitializeInterface @ 0x1C0084BAC (Simulator_InitializeInterface.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0085328 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C008552C (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitGetEmOverride @ 0x1C0085AD8 (ACPIInitGetEmOverride.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rax

  AcpiOverrideAttributes = 0;
  AcpiRetainDebugDeviceInD0 = 0;
  ACPIInitGetEmOverride();
  ACPIInitReadRegistryKeys();
  ACPIInitGetPlatformOverrides();
  if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    Simulator_InitializeInterface();
  AcpiRegistryPath.Length = 0;
  v4 = (unsigned __int16)(RegistryPath->Length + 2);
  AcpiDriverObject = DriverObject;
  AcpiRegistryPath.MaximumLength = v4;
  AcpiRegistryPath.Buffer = (unsigned __int16 *)ExAllocatePoolWithTag(
                                                  PagedPool,
                                                  RegistryPath->Length + 2LL,
                                                  0x4D706341u);
  if ( AcpiRegistryPath.Buffer )
    RtlCopyUnicodeString(&AcpiRegistryPath, RegistryPath);
  else
    AcpiRegistryPath.MaximumLength = 0;
  KeInitializeDpc(&AcpiPowerDpc, (PKDEFERRED_ROUTINE)ACPIDevicePowerDpc, 0LL);
  KeInitializeDpc(&AcpiBuildDpc, (PKDEFERRED_ROUTINE)ACPIBuildDeviceDpc, 0LL);
  KeInitializeDpc(&AcpiGpeDpc, (PKDEFERRED_ROUTINE)ACPIInterruptDispatchEventDpc, 0LL);
  KeInitializeTimer(&AcpiGpeTimer);
  KeInitializeSpinLock(&AcpiDeviceTreeLock);
  KeInitializeSpinLock(&AcpiPowerLock);
  KeInitializeSpinLock(&AcpiPowerQueueLock);
  KeInitializeSpinLock(&AcpiBuildQueueLock);
  KeInitializeSpinLock(&AcpiThermalLock);
  KeInitializeSpinLock(&AcpiThermalConstraintLock);
  KeInitializeSpinLock(&AcpiFanLock);
  KeInitializeSpinLock(&AcpiButtonLock);
  KeInitializeSpinLock(&AcpiGetLock);
  KeInitializeSpinLock(&AcpiPm1EnableRegisterLock);
  AcpiOpRegionLock.Count = 1;
  AcpiOpRegionLock.Owner = 0LL;
  AcpiOpRegionLock.Contention = 0;
  KeInitializeEvent(&AcpiOpRegionLock.Event, SynchronizationEvent, 0);
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  qword_1C0059B38 = (__int64)&AcpiPowerDelayedQueueList;
  AcpiPowerDelayedQueueList = (__int64)&AcpiPowerDelayedQueueList;
  qword_1C0059B48 = (__int64)&AcpiPowerQueueList;
  AcpiPowerQueueList = (__int64)&AcpiPowerQueueList;
  qword_1C0059B58 = (__int64)&AcpiPowerBlockedOnDependencyList;
  AcpiPowerBlockedOnDependencyList = (__int64)&AcpiPowerBlockedOnDependencyList;
  qword_1C0059B68 = (__int64)&AcpiPowerBlockedOnPhase3List;
  AcpiPowerBlockedOnPhase3List = (__int64)&AcpiPowerBlockedOnPhase3List;
  qword_1C0059B78 = (__int64)&AcpiPowerPhase0List;
  AcpiPowerPhase0List = (__int64)&AcpiPowerPhase0List;
  qword_1C0059B88 = (__int64)&AcpiPowerPhase1List;
  AcpiPowerPhase1List = (__int64)&AcpiPowerPhase1List;
  qword_1C0059B98 = (__int64)&AcpiPowerPhase2List;
  AcpiPowerPhase2List = (__int64)&AcpiPowerPhase2List;
  qword_1C0059BA8 = (__int64)&AcpiPowerPhase3List;
  AcpiPowerPhase3List = (__int64)&AcpiPowerPhase3List;
  qword_1C0059BB8 = (__int64)&AcpiPowerPhase4List;
  AcpiPowerPhase4List = (PSLIST_ENTRY)&AcpiPowerPhase4List;
  qword_1C0059BC8 = (__int64)&AcpiPowerPhase5List;
  AcpiPowerPhase5List = (__int64)&AcpiPowerPhase5List;
  qword_1C0059BD8 = (__int64)&AcpiPowerWaitWakeList;
  AcpiPowerWaitWakeList = (__int64)&AcpiPowerWaitWakeList;
  qword_1C0059458 = (__int64)&AcpiPowerWaitWakeInterruptList;
  AcpiPowerWaitWakeInterruptList = (__int64)&AcpiPowerWaitWakeInterruptList;
  qword_1C0059BE8 = (__int64)&AcpiPowerSynchronizeList;
  AcpiPowerSynchronizeList = (__int64)&AcpiPowerSynchronizeList;
  AcpiPowerDpcFlags = 0;
  qword_1C0059BF8 = (__int64)&AcpiPowerNodeList;
  AcpiPowerNodeList = (__int64)&AcpiPowerNodeList;
  AcpiPowerCurrentPagingPathTransitions = 0;
  qword_1C0059C08 = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
  AcpiDevicesWhichMightNeedEnumerationList = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
  AcpiBuildDpcFlags = 0;
  qword_1C0059E58 = (__int64)&AcpiBuildQueueList;
  AcpiBuildQueueList = (__int64)&AcpiBuildQueueList;
  qword_1C0059EE8 = (__int64)&AcpiBuildDeviceList;
  AcpiBuildDeviceList = (__int64)&AcpiBuildDeviceList;
  qword_1C0059E68 = (__int64)&AcpiBuildDelayedDependencyList;
  AcpiBuildDelayedDependencyList = (__int64)&AcpiBuildDelayedDependencyList;
  qword_1C0059E78 = (__int64)&AcpiBuildOperationRegionList;
  AcpiBuildOperationRegionList = (__int64)&AcpiBuildOperationRegionList;
  qword_1C0059E88 = (__int64)&AcpiBuildPowerResourceList;
  AcpiBuildPowerResourceList = (__int64)&AcpiBuildPowerResourceList;
  qword_1C0059E98 = (__int64)&AcpiBuildRunMethodList;
  AcpiBuildRunMethodList = (__int64)&AcpiBuildRunMethodList;
  qword_1C0059EA8 = (__int64)&AcpiBuildSpecialSynchronizationList;
  AcpiBuildSpecialSynchronizationList = (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList;
  qword_1C0059EB8 = (__int64)&AcpiBuildSynchronizationList;
  AcpiBuildSynchronizationList = (PSLIST_ENTRY)&AcpiBuildSynchronizationList;
  qword_1C0059EC8 = (__int64)&AcpiBuildThermalZoneList;
  AcpiBuildThermalZoneList = (__int64)&AcpiBuildThermalZoneList;
  qword_1C0059DE8 = (__int64)&AcpiUnresolvedEjectList;
  AcpiUnresolvedEjectList = (__int64)&AcpiUnresolvedEjectList;
  qword_1C00594E8 = (__int64)&AcpiThermalList;
  AcpiThermalList = (__int64)&AcpiThermalList;
  qword_1C0059518 = (__int64)&AcpiThermalClientList;
  AcpiThermalClientList = (__int64)&AcpiThermalClientList;
  qword_1C00594F8 = (__int64)&AcpiThermalUnclaimedConstraintList;
  AcpiThermalUnclaimedConstraintList = (__int64)&AcpiThermalUnclaimedConstraintList;
  qword_1C0059528 = (__int64)&AcpiThermalZoneList;
  AcpiThermalZoneList = (__int64)&AcpiThermalZoneList;
  qword_1C00599E8 = (__int64)&AcpiFanList;
  AcpiFanList = (__int64)&AcpiFanList;
  qword_1C0059DD8 = (__int64)&AcpiButtonList;
  AcpiButtonList = (__int64)&AcpiButtonList;
  qword_1C005A088 = (__int64)&AcpiGetListEntry;
  AcpiGetListEntry = (__int64)&AcpiGetListEntry;
  qword_1C0059608 = (__int64)&AcpiOpRegionHandlerList;
  AcpiOpRegionHandlerList = (__int64)&AcpiOpRegionHandlerList;
  AcpiBuildFixedButtonEnumerated = 0;
  AcpiFatalOutstanding = 0;
  AcpiGpeDpcRunning = 0;
  AcpiGpeDpcScheduled = 0;
  AcpiGpeWorkDone = 0;
  AcpiRegisteredOpRegionMask = 0;
  ExInitializeNPagedLookasideList(&BuildRequestLookAsideList, 0LL, 0LL, 0x200u, 0x88uLL, 0x44706341u, 0x1Eu);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList,
    0LL,
    0LL,
    0x200u,
    0x108uLL,
    0x50706341u,
    0x3Eu);
  ExInitializeNPagedLookasideList(&DeviceExtensionLookAsideList, 0LL, 0LL, 0x200u, 0x390uLL, 0x44706341u, 0x40u);
  ExInitializeNPagedLookasideList(&RequestDependencyLookAsideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x44706341u, 0x32u);
  ExInitializeNPagedLookasideList(&ObjectDataLookAsideList, 0LL, 0LL, 0x200u, 0x28uLL, 0x4F706341u, 0x66u);
  ExInitializeNPagedLookasideList(&XswContextLookAsideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x50706341u, 0x10u);
  ExInitializeNPagedLookasideList(&WakeInterruptLookAsideList, 0LL, 0LL, 0x200u, 0x60uLL, 0x50706341u, 0x10u);
  ExInitializeNPagedLookasideList(&NotificationContextLookAsideList, 0LL, 0LL, 0x200u, 0x18uLL, 0x4D706341u, 0x10u);
  KeInitializeSpinLock(&gPreAllocPciPoolSpinLock);
  memset(gPreAllocPciPool, 0, 0x240uLL);
  KeInitializeSpinLock(&gBBNResultCacheLock);
  qword_1C00598D8 = (__int64)&gBBNResultCacheListHead;
  gBBNResultCacheListHead = (__int64)&gBBNResultCacheListHead;
  ACPIInitializeWorker();
  DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ACPIDispatchAddDevice;
  memset64(DriverObject->MajorFunction, (unsigned __int64)ACPIDispatchIrp, 0x1CuLL);
  DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ACPIUnload;
  memset(&ACPIFastIoDispatch, 0, 0xE0uLL);
  ACPIFastIoDispatch = 224;
  qword_1C0059F68 = (__int64)ACPIFilterFastIoDetachCallback;
  DriverObject->FastIoDispatch = (_FAST_IO_DISPATCH *)&ACPIFastIoDispatch;
  EtwRegister(&ACPI_ETW_PROVIDER, (PETWENABLECALLBACK)AcpiDiagTraceControlCallback, 0LL, &AcpiDiagHandle);
  EtwRegister(
    &THERMAL_POLLING_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagThermalPollingTraceControlCallback,
    0LL,
    &AcpiDiagThermalPollingHandle);
  KeInitializeTimer(&AcpiDiagThermalPollingTimer);
  KeInitializeDpc(&AcpiDiagThermalPollingDpc, (PKDEFERRED_ROUTINE)AcpiDiagThermalPollingTimerRoutine, 0LL);
  ACPIGlobalInitialize();
  AcpiInitializeExternalResourceTranslation(DriverObject);
  qword_1C0059C28 = (__int64)&AcpiDeviceFirmwareLockHandlerList;
  AcpiDeviceFirmwareLockHandlerList = (__int64)&AcpiDeviceFirmwareLockHandlerList;
  KeInitializeSpinLock(&AcpiDeviceFirmwareLockGlobalLock);
  AcpiIsBootComplete = 0;
  IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)BootCompleteCallback, &AcpiRegistryPath);
  return 0;
}
