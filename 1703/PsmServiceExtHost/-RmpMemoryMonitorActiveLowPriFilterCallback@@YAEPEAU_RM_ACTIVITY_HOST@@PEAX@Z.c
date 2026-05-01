/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180035CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001E2C (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E7D8 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

bool __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rcx

  return (unsigned int)RmpActivityHostIsRunnable(a1, 1) && (unsigned int)RmpActivityHostIsRevocable(v2);
}
