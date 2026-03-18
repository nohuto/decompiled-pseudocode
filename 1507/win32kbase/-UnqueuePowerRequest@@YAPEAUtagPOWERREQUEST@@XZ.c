/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C00096D4
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00095A0 (xxxUserPowerCalloutWorker.c)
 *     CleanupPowerRequestList @ 0x1C006D750 (CleanupPowerRequestList.c)
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
    v0 = qword_1C0101F28;
    v2 = *(_QWORD **)(qword_1C0101F28 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0101F28 != &gPowerRequestList || *v2 != qword_1C0101F28 )
      __fastfail(3u);
    qword_1C0101F28 = *(_QWORD *)(qword_1C0101F28 + 8);
    *v2 = &gPowerRequestList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  return (struct tagPOWERREQUEST *)v0;
}
