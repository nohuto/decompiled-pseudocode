/*
 * XREFs of PopCreateKernelPowerRequest @ 0x14050137C
 * Callers:
 *     PoRegisterSystemState @ 0x14020561C (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140501300 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407BBC6C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400F9088 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopDiagTracePowerRequestCreate @ 0x140503074 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x1405035C0 (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopInsertPowerRequestObject @ 0x140503A20 (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  result = PopCreatePowerRequestObject(&v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    LOBYTE(v3) = 1;
    *(_DWORD *)(v8 + 20) = 18;
    PopAcquirePowerRequestPushLock(v3);
    PopInsertPowerRequestObject(v4, 0LL);
    PopUmpoSendPowerRequestOverrideQuery(v4, v5, v6, v7);
    PopReleaseRwLock(&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v4);
    result = 0LL;
    *a1 = v4;
  }
  return result;
}
