/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14066B6C0
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 */

void PpmReapplyIdlePolicy()
{
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
  PopReleaseRwLock(&PpmIdlePolicyLock);
}
