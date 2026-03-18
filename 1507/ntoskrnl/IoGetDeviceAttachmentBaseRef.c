/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1400D0E10
 * Callers:
 *     PoStoreRequester @ 0x1400D0B50 (PoStoreRequester.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400E3638 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140148454 (PopTraceThermalZonePassiveHistogram.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140170D0C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401FAAFC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14023DA54 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x14023EA84 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x14023EB7C (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14023ED18 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14023EE20 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     SmKmEtwAppendObjectName @ 0x1402575EC (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x1403EEB1C (PopNotifyDevice.c)
 *     sub_14040AA68 @ 0x14040AA68 (sub_14040AA68.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140582B84 (IoWMIDeviceObjectToInstanceName.c)
 *     PopFxRegisterDevice @ 0x1405AC800 (PopFxRegisterDevice.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405B7B04 (IopQueryInterfaceRecurseUp.c)
 *     PopDiagTraceActiveCooling @ 0x1405C4314 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1405C4390 (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1405C64A0 (PopDiagTraceCoolingExtension.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 *     PoThermalCounterSetCallback @ 0x1406B7B48 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1406B9968 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406BA338 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1406BA424 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1406BEA0C (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1407B65F4 (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400D0EF4 (IopGetDeviceAttachmentBase.c)
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
