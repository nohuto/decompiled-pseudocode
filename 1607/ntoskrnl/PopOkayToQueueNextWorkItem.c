/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x140581F78
 * Callers:
 *     PopThermalTelemetryWorker @ 0x140207078 (PopThermalTelemetryWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
