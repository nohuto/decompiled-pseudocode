/*
 * XREFs of RmpActivityHostStateDigestIsRunnable @ 0x180005FB0
 * Callers:
 *     RmpActivityHostQueryCategory @ 0x180005F24 (RmpActivityHostQueryCategory.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpActivityHostIsRunnable @ 0x18003BD38 (RmpActivityHostIsRunnable.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003C5A0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpActivityHostStateDigestIsRunnable(char a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (a1 & 1) == 0 && (a1 & 8) == 0 )
    return a1 >= 0;
  return result;
}
