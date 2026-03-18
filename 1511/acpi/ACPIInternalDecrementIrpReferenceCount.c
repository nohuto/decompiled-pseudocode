/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C0007C70
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001000 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C0007150 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIThermalActivateConstraint @ 0x1C00079E8 (ACPIThermalActivateConstraint.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0007B50 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     ACPIWakeWaitIrp @ 0x1C0021D70 (ACPIWakeWaitIrp.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C0023990 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C00387A0 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0038830 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C00388D0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C003A0D0 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C003BC80 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C0066E70 (ACPIIrpCompletionRoutineWorker.c)
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
