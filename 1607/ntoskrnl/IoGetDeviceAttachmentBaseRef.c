/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1400FB62C
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14008F1B4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009F9F8 (FsRtlAcquireFileForModWriteEx.c)
 *     PoStoreRequester @ 0x1400FB3C0 (PoStoreRequester.c)
 *     PopThermalTraceRundownEvents @ 0x140110994 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140124B6C (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x14012AD80 (PopAllocateIrp.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140146F70 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401CD830 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1401FF4A8 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1402080D4 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x1402094CC (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402095C4 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402096CC (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209C54 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140209F78 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14020A098 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x140220778 (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x1403CF498 (PopNotifyDevice.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042BC1C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042BEA0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x14042DE60 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042E010 (FsRtlAcquireFileExclusiveCommon.c)
 *     sub_14051DFC8 @ 0x14051DFC8 (sub_14051DFC8.c)
 *     PopDiagTraceThermalRequest @ 0x14052DCF8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14052DD74 (PopDiagTraceCoolingExtension.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1405464D0 (IoWMIDeviceObjectToInstanceName.c)
 *     PopFxRegisterDevice @ 0x140566BDC (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405743B0 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1405744E0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14057455C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405761E8 (IopQueryInterfaceRecurseUp.c)
 *     PiControlGetDeviceStack @ 0x14064A43C (PiControlGetDeviceStack.c)
 *     PiEventRemovalOpenHandleVeto @ 0x14064D3E8 (PiEventRemovalOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BD0C (PopRegisterCoolingExtensionProtection.c)
 *     PoThermalCounterSetCallback @ 0x1406701F4 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x140671844 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140672218 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140672304 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14067687C (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400FB710 (IopGetDeviceAttachmentBase.c)
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
