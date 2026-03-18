/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14054F718
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
