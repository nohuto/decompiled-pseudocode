/*
 * XREFs of WheapSqmWaitWorkerRoutine @ 0x1406FDF48
 * Callers:
 *     WheapSqmCollectConfigurationDataPoints @ 0x1405C16C4 (WheapSqmCollectConfigurationDataPoints.c)
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1406FCF9C (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapIsSqmLoggerRunning @ 0x1406FDB80 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406FDE14 (WheapSqmCollectPshedPluginTelemetry.c)
 */

char WheapSqmWaitWorkerRoutine()
{
  unsigned int v0; // eax
  __int64 v1; // rdx

  if ( WheapIsSqmLoggerRunning() )
  {
    WheapSqmCollectWheaPolicyTelemetry();
    WheapSqmCollectPshedPluginTelemetry();
    LOBYTE(v0) = WheapSqmCollectWheaOscTelemetry();
  }
  else
  {
    v0 = WheapSqmWaitRetryCount + 1;
    WheapSqmWaitRetryCount = v0;
    if ( v0 <= 7 )
    {
      v1 = -WheapSqmWaitTimeout;
      WheapSqmWaitTimeout *= 2LL;
      LOBYTE(v0) = KiSetTimerEx((__int64)&WheapSqmWaitTimer, v1, 0, 0, (__int64)&WheapSqmWaitTimerDpc);
    }
  }
  return v0;
}
