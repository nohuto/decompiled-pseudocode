/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x14034F558
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14034F2E8 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     UninitializeTelemetryAssertsKM @ 0x14034F420 (UninitializeTelemetryAssertsKM.c)
 * Callees:
 *     <none>
 */

void UninitializeTelemetryAssertsLocks()
{
  if ( g_AssertFastMutex )
  {
    ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
    g_AssertFastMutex = 0LL;
  }
}
