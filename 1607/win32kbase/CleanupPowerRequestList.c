/*
 * XREFs of CleanupPowerRequestList @ 0x1C006F870
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C006F8D0 (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C006FA48 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00B1F50 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 */

void CleanupPowerRequestList()
{
  struct tagPOWERREQUEST *v0; // rax

  gbNoMorePowerCallouts = 1;
  if ( gpEventPowerRequest )
  {
    ObfDereferenceObject(gpEventPowerRequest);
    gpEventPowerRequest = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    while ( 1 )
    {
      v0 = UnqueuePowerRequest();
      if ( !v0 )
        break;
      CancelPowerRequest(v0);
    }
    CleanupPowerWatchdog(&gpRequestQueueWatchdog);
    CleanupPowerWatchdog(&gpRequestWorkerWatchdog);
  }
}
