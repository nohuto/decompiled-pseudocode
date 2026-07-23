/*
 * XREFs of PopAcquireRwLockShared @ 0x14000DC30
 * Callers:
 *     PpmIdleUsingStateSelection @ 0x140009ED4 (PpmIdleUsingStateSelection.c)
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     PopThermalTraceRundownEvents @ 0x140110EF8 (PopThermalTraceRundownEvents.c)
 *     PopThermalSxExit @ 0x140114DA8 (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x14012503C (PopThermalSxEntry.c)
 *     PpmQueryPlatformStateResidency @ 0x140200B3C (PpmQueryPlatformStateResidency.c)
 *     PopThermalTelemetryWorker @ 0x140207078 (PopThermalTelemetryWorker.c)
 *     PopProcessorInformation @ 0x140500E84 (PopProcessorInformation.c)
 *     PopCurrentPowerState @ 0x140502CF0 (PopCurrentPowerState.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     PopBatteryDeviceState @ 0x14066ED80 (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x14066EFA4 (PopBatteryEtwCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406702D8 (PoThermalCounterSetCallback.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670738 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmWmiGetAllData @ 0x14067335C (PpmWmiGetAllData.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
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
