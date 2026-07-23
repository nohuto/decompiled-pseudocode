/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1405037B8
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400F96D4 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400F9750 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400F988C (PoSetPowerRequestInternal.c)
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x1405035C0 (PopCreatePowerRequestObject.c)
 *     PopSystemRequiredCallback @ 0x140503728 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140503988 (PopExecutionRequiredCallback.c)
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 *     PopExecutionRequiredSettingCallback @ 0x14057F74C (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140580E94 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestPowerSourceSettingCallback @ 0x1405817AC (PopPowerRequestPowerSourceSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x14066A94C (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x14066A9C4 (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x14066AA48 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x14066AB34 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x14066C138 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  if ( a1 )
    return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared(&PopPowerRequestLock);
}
