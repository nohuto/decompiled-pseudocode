/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003C5A0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180005FB0 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 */

bool __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char StateDigest; // al

  StateDigest = RmpActivityHostGetStateDigest((__int64)a1);
  return RmpActivityHostStateDigestIsRunnable(StateDigest) && RmpActivityHostIsKillable((__int64)a1);
}
