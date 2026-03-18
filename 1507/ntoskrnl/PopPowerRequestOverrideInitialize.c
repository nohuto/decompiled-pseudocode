/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x1405C17E8
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

void __fastcall PopPowerRequestOverrideInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *i; // rbx
  signed __int64 v8; // rcx
  ULONG_PTR v9; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax

  PopAcquirePowerRequestPushLock(0, a2, a3, a4);
  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
    PopUmpoSendPowerRequestOverrideQuery((__int64)i, v4, v5, v6);
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v8 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v9 = PopPowerRequestLock,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v8, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v4);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
