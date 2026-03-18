/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1405C74C4
 * Callers:
 *     PopThermalTelemetryWorker @ 0x14023CB00 (PopThermalTelemetryWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14040397C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
