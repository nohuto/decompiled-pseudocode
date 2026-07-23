/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14066B7A4
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1403F652C (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140672A94 (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 */

void PpmReapplyIdlePolicy()
{
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
  PopReleaseRwLock(&PpmIdlePolicyLock);
}
