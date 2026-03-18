/*
 * XREFs of PopPowerRequestDeleteEntryNoLock @ 0x1406B0C50
 * Callers:
 *     PopCreatePowerRequestObject @ 0x1404E5E2C (PopCreatePowerRequestObject.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

void __fastcall PopPowerRequestDeleteEntryNoLock(PVOID Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  signed __int64 v6; // rcx
  ULONG_PTR v7; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v9; // ax

  PopAcquirePowerRequestPushLock(1, a2, a3, a4);
  RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v6 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v7 = PopPowerRequestLock,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v6, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
