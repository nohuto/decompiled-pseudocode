/*
 * XREFs of TakeTelemetryAssertsLock @ 0x140254E9C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14023B280 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     UninitializeTelemetryAssertsKM @ 0x14034F420 (UninitializeTelemetryAssertsKM.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0LL;
}
