/*
 * XREFs of PopQueueWorkItem @ 0x140233B20
 * Callers:
 *     PopThermalTelemetryCallback @ 0x14023CAF4 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14023D0C8 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x140241CCC (PopDripsWatchdogTimerCallbackRoutine.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
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
