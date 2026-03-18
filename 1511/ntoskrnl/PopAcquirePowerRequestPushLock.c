/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140455DB0
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140097768 (PoSetPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14009896C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x14054A5D0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x14054B2B0 (PopPowerRequestOverrideInitialize.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x140632414 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x14063248C (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x140632510 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x140632588 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x140633C50 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  if ( a1 )
    return PopAcquireRwLockExclusive((__int64)&PopPowerRequestLock);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared((volatile signed __int64 *)&PopPowerRequestLock);
}
