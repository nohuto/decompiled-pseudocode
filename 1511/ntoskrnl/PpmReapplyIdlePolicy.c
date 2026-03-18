/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14051B090
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14063A82C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 */

void PpmReapplyIdlePolicy()
{
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
}
