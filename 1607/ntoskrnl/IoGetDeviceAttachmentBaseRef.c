/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1400F93B8
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14008E914 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     PoStoreRequester @ 0x1400F914C (PoStoreRequester.c)
 *     PopThermalTraceRundownEvents @ 0x140110EF8 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401250DC (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401474E0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401CD67C (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1401FF2D4 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140207F00 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x1402092F8 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402093F0 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402094F8 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209A80 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140209DA4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140209EC4 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1402205A4 (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x1403CF498 (PopNotifyDevice.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0 (FsRtlAcquireFileExclusiveCommon.c)
 *     sub_140501030 @ 0x140501030 (sub_140501030.c)
 *     PopDiagTraceThermalRequest @ 0x14052E238 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14052E2B4 (PopDiagTraceCoolingExtension.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140546A10 (IoWMIDeviceObjectToInstanceName.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405748F0 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x140574A20 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140574A9C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140576728 (IopQueryInterfaceRecurseUp.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 *     PiEventRemovalOpenHandleVeto @ 0x14064D4CC (PiEventRemovalOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BDF0 (PopRegisterCoolingExtensionProtection.c)
 *     PoThermalCounterSetCallback @ 0x1406702D8 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x140671928 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406722FC (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1406723E8 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x140676960 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400F949C (IopGetDeviceAttachmentBase.c)
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
