/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C0004FB0
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001000 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C0004CE0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIThermalActivateConstraint @ 0x1C0004D2C (ACPIThermalActivateConstraint.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0004E90 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     ACPIWakeWaitIrp @ 0x1C0021580 (ACPIWakeWaitIrp.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C00232C0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0037BB0 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0037C40 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0037CE0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C00394C0 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C003B8F0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C0066350 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 672), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 696), 0, 0);
  return result;
}
