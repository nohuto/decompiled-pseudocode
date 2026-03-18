/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C006FA48
 * Callers:
 *     CleanupPowerRequestList @ 0x1C006F870 (CleanupPowerRequestList.c)
 *     xxxUserPowerCalloutWorker @ 0x1C006F920 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     <none>
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  __int64 v0; // rbx
  _QWORD *v2; // rax

  v0 = 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( gPowerRequestList.Flink != &gPowerRequestList )
  {
    v0 = qword_1C011BCF8;
    v2 = *(_QWORD **)(qword_1C011BCF8 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C011BCF8 != &gPowerRequestList || *v2 != qword_1C011BCF8 )
      __fastfail(3u);
    qword_1C011BCF8 = *(_QWORD *)(qword_1C011BCF8 + 8);
    *v2 = &gPowerRequestList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  return (struct tagPOWERREQUEST *)v0;
}
