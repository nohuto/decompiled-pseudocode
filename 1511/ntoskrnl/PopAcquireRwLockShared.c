/*
 * XREFs of PopAcquireRwLockShared @ 0x14009DB3C
 * Callers:
 *     PpmIdleUsingStateSelection @ 0x140097180 (PpmIdleUsingStateSelection.c)
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x14011AAA0 (PopThermalSxExit.c)
 *     PpmQueryPlatformStateResidency @ 0x1401E82FC (PpmQueryPlatformStateResidency.c)
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 *     PopThermalTraceRundownEvents @ 0x1401EE73C (PopThermalTraceRundownEvents.c)
 *     PopCurrentPowerState @ 0x140454230 (PopCurrentPowerState.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PopProcessorInformation @ 0x14046167C (PopProcessorInformation.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     PopBatteryDeviceState @ 0x1406368C0 (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x140636AE4 (PopBatteryEtwCallback.c)
 *     PoThermalCounterSetCallback @ 0x140637DBC (PoThermalCounterSetCallback.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140638208 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmWmiGetAllData @ 0x14063BEEC (PpmWmiGetAllData.c)
 *     PopFanReportBootStartDevices @ 0x14076620C (PopFanReportBootStartDevices.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PopAcquireRwLockShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)a1, v3, (ULONG_PTR)a1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
