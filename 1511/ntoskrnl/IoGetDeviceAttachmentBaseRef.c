/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140098860
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14003079C (FsRtlReleaseFileForModWrite.c)
 *     PoStoreRequester @ 0x140098274 (PoStoreRequester.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14011A180 (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140142D5C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401BF298 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1401E6B24 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1401EF4F0 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x1401F06F0 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1401F07E8 (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1401F09BC (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1401F0AC4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     SmKmEtwAppendObjectName @ 0x140208358 (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x1403A51FC (PopNotifyDevice.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1403F9340 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 *     sub_140496614 @ 0x140496614 (sub_140496614.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14050B564 (IoWMIDeviceObjectToInstanceName.c)
 *     PopFxRegisterDevice @ 0x14051B960 (PopFxRegisterDevice.c)
 *     IopQueryInterfaceRecurseUp @ 0x140541978 (IopQueryInterfaceRecurseUp.c)
 *     PopCheckThermalPolicy @ 0x14054CA88 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x14054CBB8 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14054CC34 (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTraceThermalRequest @ 0x14054E6B4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14054E730 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x1406159EC (PiControlGetDeviceStack.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140633814 (PopRegisterCoolingExtensionProtection.c)
 *     PoThermalCounterSetCallback @ 0x140637DBC (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x140639874 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14063A270 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14063A35C (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14063E108 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x140098944 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // di
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(DeviceObject);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return DeviceAttachmentBase;
}
