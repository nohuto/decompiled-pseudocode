/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C0013940
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004140 (ACPIDispatchIrp.c)
 *     ACPIThermalActivateConstraint @ 0x1C00080EC (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C000A438 (ACPIThermalGetSensorDevice.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0027E60 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIWakeWaitIrp @ 0x1C0028850 (ACPIWakeWaitIrp.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C0029A80 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002A710 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0049490 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C00495C0 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0049700 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C004C000 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C004E910 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C0087210 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 704), 0, 0);
  return result;
}
