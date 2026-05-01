/*
 * XREFs of RmpActivityHostIsRunnable @ 0x180004940
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180003B2C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpPolicyPopulateFastCommitUse @ 0x1800048C8 (RmpPolicyPopulateFastCommitUse.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180032310 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIsRunnable(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 664) & 4) == 0 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 666) & 4) == 0 )
    return 1LL;
  result = 0LL;
  if ( !a2 )
    return 1LL;
  return result;
}
