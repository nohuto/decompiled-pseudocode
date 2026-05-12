/*
 * XREFs of RaidAdapterCancelPauseTimer @ 0x1C00234C8
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002382C (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C00131A0 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0014130 (RaidResumeAdapterQueue.c)
 */

BOOLEAN __fastcall RaidAdapterCancelPauseTimer(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // di

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1);
  return v3;
}
