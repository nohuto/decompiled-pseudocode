/*
 * XREFs of PopClearSpecialRequest @ 0x14040A1E8
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1404E9BB8 (PopPowerRequestActionInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PopDiagTracePowerRequestChange @ 0x1400D1E04 (PopDiagTracePowerRequestChange.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // edi
  signed __int64 v7; // rcx
  ULONG_PTR v8; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v10; // ax
  char v11; // r8
  void *v12; // rsi

  v2 = a1;
  if ( a2 == 3 )
  {
    v3 = 1;
    LOBYTE(a1) = 1;
    v4 = 0LL;
    PopAcquirePowerRequestPushLock(a1);
    if ( *(_QWORD *)(v2 + 96) )
    {
      v4 = *(_QWORD *)(v2 + 88);
      if ( v4 )
        *(_QWORD *)(v2 + 88) = 0LL;
      *(_QWORD *)(v2 + 96) = 0LL;
      --*(_DWORD *)(v2 + 44);
      PopDiagTracePowerRequestChange(v2);
      v6 = 0;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( qword_14032F7D8 )
      qword_14032F7D8 = 0LL;
    _m_prefetchw(&PopPowerRequestLock);
    v7 = PopPowerRequestLock - 16;
    if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v7 = 0LL;
    if ( (PopPowerRequestLock & 2) != 0
      || (v8 = PopPowerRequestLock,
          v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v7, PopPowerRequestLock)) )
    {
      ExfReleasePushLock(&PopPowerRequestLock, v5);
    }
    KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
    CurrentThread = KeGetCurrentThread();
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v4 )
    {
      v11 = v4;
      v12 = (void *)(v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v11 & 7) == 5 )
        v3 = 5;
      PspChargeJobWakeCounter(v12, v3, 0LL, v2);
      ObDereferenceObjectDeferDeleteWithTag(v12, 0x6B577350u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
