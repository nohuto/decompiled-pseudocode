/*
 * XREFs of PopQueueWorkItem @ 0x14014B25C
 * Callers:
 *     PopThermalTelemetryCallback @ 0x140207240 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14020751C (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x14020B490 (PopNetEvaluationTimerCallback.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x14020D6D4 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopNetSetConnectivityConstraint @ 0x14057E94C (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x1405805C0 (PopNetClearConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x14066FA60 (PdcPoNetworkResiliency.c)
 *     PopNetCompliantNicUpdate @ 0x140673664 (PopNetCompliantNicUpdate.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
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
