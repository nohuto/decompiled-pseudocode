/*
 * XREFs of PopAcquireRwLockShared @ 0x14000E0B0
 * Callers:
 *     PpmIdleUsingStateSelection @ 0x14000A354 (PpmIdleUsingStateSelection.c)
 *     PoGetIdleTimes @ 0x14000DBB4 (PoGetIdleTimes.c)
 *     PopThermalTraceRundownEvents @ 0x140110994 (PopThermalTraceRundownEvents.c)
 *     PopThermalSxExit @ 0x140114838 (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x140124ACC (PopThermalSxEntry.c)
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 *     PopThermalTelemetryWorker @ 0x14020724C (PopThermalTelemetryWorker.c)
 *     PopProcessorInformation @ 0x14051DE1C (PopProcessorInformation.c)
 *     PopCurrentPowerState @ 0x14051FC88 (PopCurrentPowerState.c)
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     PopBatteryDeviceState @ 0x14066EC9C (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x14066EEC0 (PopBatteryEtwCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406701F4 (PoThermalCounterSetCallback.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670654 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmWmiGetAllData @ 0x140673278 (PpmWmiGetAllData.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(a1, v3, a1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
