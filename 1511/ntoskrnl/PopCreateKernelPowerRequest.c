/*
 * XREFs of PopCreateKernelPowerRequest @ 0x140454CCC
 * Callers:
 *     PoRegisterSystemState @ 0x1401EC9AC (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140454C18 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407663AC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopInsertPowerRequestObject @ 0x140454C94 (PopInsertPowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x140454D34 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(__int64 **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  result = PopCreatePowerRequestObject(&v9, a2);
  if ( (int)result >= 0 )
  {
    v5 = (__int64 *)v9;
    LOBYTE(v4) = 1;
    *(_DWORD *)(v9 + 20) = 18;
    PopAcquirePowerRequestPushLock(v4);
    PopInsertPowerRequestObject(v5, 0);
    PopUmpoSendPowerRequestOverrideQuery((__int64)v5, v6, v7, v8);
    PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v5);
    result = 0LL;
    *a1 = v5;
  }
  return result;
}
