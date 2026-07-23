/*
 * XREFs of PopQueueWorkItem @ 0x14014B7CC
 * Callers:
 *     PopThermalTelemetryCallback @ 0x14020706C (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140207348 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x14020B2BC (PopNetEvaluationTimerCallback.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x14020D500 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopNetSetConnectivityConstraint @ 0x14057EDF8 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140580A6C (PopNetClearConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x14066FB44 (PdcPoNetworkResiliency.c)
 *     PopNetCompliantNicUpdate @ 0x140673748 (PopNetCompliantNicUpdate.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
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
