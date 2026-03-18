/*
 * XREFs of PopCreateKernelPowerRequest @ 0x1404E5880
 * Callers:
 *     PoRegisterSystemState @ 0x14023AC68 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x1404E5804 (PoCreatePowerRequest.c)
 *     PopSetupHighPerfPowerRequest @ 0x140599E20 (PopSetupHighPerfPowerRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x1404E5E2C (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopInsertPowerRequestObject @ 0x1404E6410 (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  signed __int64 v9; // rcx
  ULONG_PTR v10; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v12; // ax
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  result = PopCreatePowerRequestObject(&v14);
  if ( (int)result >= 0 )
  {
    v4 = v14;
    LOBYTE(v3) = 1;
    *(_DWORD *)(v14 + 20) = 18;
    PopAcquirePowerRequestPushLock(v3);
    PopInsertPowerRequestObject(v4, 0LL);
    PopUmpoSendPowerRequestOverrideQuery(v4, v5, v6, v7);
    if ( qword_14032F7D8 )
      qword_14032F7D8 = 0LL;
    _m_prefetchw(&PopPowerRequestLock);
    v9 = PopPowerRequestLock - 16;
    if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v9 = 0LL;
    if ( (PopPowerRequestLock & 2) != 0
      || (v10 = PopPowerRequestLock,
          v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v9, PopPowerRequestLock)) )
    {
      ExfReleasePushLock(&PopPowerRequestLock, v8);
    }
    KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
    CurrentThread = KeGetCurrentThread();
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v13 = v14;
    PopDiagTracePowerRequestCreate(0LL, v14);
    result = 0LL;
    *a1 = v13;
  }
  return result;
}
