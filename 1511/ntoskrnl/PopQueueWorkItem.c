/*
 * XREFs of PopQueueWorkItem @ 0x1401E69E8
 * Callers:
 *     PopThermalTelemetryCallback @ 0x1401EE6A0 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1401EEA10 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x1401F3BF0 (PopDripsWatchdogTimerCallbackRoutine.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, DelayedWorkQueue);
    return 1;
  }
  return v1;
}
