/*
 * XREFs of PopPowerRequestInsertElementNoLock @ 0x1404E5F40
 * Callers:
 *     PopCreatePowerRequestObject @ 0x1404E5E2C (PopCreatePowerRequestObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400D0A24 (RtlInsertElementGenericTableAvl.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

PVOID __fastcall PopPowerRequestInsertElementNoLock(__int64 a1)
{
  __int64 v1; // rdx
  PVOID inserted; // rbx
  signed __int64 v3; // rcx
  ULONG_PTR v4; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v6; // ax
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v9 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v3 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v4 = PopPowerRequestLock,
        v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v3, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v1);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return inserted;
}
