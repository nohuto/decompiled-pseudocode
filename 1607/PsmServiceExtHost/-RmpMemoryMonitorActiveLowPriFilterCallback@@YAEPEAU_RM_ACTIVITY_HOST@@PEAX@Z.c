/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180032310
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostIsRunnable @ 0x180004940 (RmpActivityHostIsRunnable.c)
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 */

char __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  __int64 v2; // rcx
  char v3; // dl

  if ( (unsigned int)RmpActivityHostIsRunnable((__int64)a1, 1) && RmpActivityHostIsRevocable(v2) )
    return v3;
  else
    return 0;
}
