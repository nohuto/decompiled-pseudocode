/*
 * XREFs of WheapSqmWaitWorkerRoutine @ 0x14067972C
 * Callers:
 *     WheapSqmCollectConfigurationDataPoints @ 0x14054A10C (WheapSqmCollectConfigurationDataPoints.c)
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x140678780 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapIsSqmLoggerRunning @ 0x140679364 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406795F8 (WheapSqmCollectPshedPluginTelemetry.c)
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
      LOBYTE(v0) = KeSetTimer(&WheapSqmWaitTimer, (LARGE_INTEGER)v1, &WheapSqmWaitTimerDpc);
    }
  }
  return v0;
}
