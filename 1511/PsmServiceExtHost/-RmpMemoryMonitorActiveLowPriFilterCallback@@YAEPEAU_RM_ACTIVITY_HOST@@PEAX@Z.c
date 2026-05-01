/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800417C0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180006744 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpActivityHostGetStateDigest @ 0x18000AB60 (RmpActivityHostGetStateDigest.c)
 *     RmpActivityHostIsKillable @ 0x180040FC4 (RmpActivityHostIsKillable.c)
 */

bool __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char StateDigest; // al

  StateDigest = RmpActivityHostGetStateDigest((__int64)a1);
  return RmpActivityHostStateDigestIsRunnable(StateDigest) && RmpActivityHostIsKillable((__int64)a1);
}
