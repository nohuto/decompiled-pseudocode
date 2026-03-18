/*
 * XREFs of RtlULongLongMult @ 0x1C001F6B0
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0007460 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D1C0 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000F444 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000F5D4 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiStartNodeYield @ 0x1C0014268 (VidSchiStartNodeYield.c)
 *     VidSchEnableLatencyToleranceTimer @ 0x1C00154D0 (VidSchEnableLatencyToleranceTimer.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  NTSTATUS result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return result;
}
