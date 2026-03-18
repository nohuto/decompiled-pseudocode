/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140520750
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400FB1B4 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400FB954 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400FB9D0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400FBB0C (PoSetPowerRequestInternal.c)
 *     PopCreateKernelPowerRequest @ 0x14051E314 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     PopSystemRequiredCallback @ 0x1405206C0 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140520920 (PopExecutionRequiredCallback.c)
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 *     PopExecutionRequiredSettingCallback @ 0x14057F2A0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405809E8 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestPowerSourceSettingCallback @ 0x140581300 (PopPowerRequestPowerSourceSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x14066A868 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x14066A8E0 (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x14066A964 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x14066AA50 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x14066C054 (PopGetPowerRequestListInfo.c)
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
