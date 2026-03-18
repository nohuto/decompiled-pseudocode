/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1404E6108
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D0F1C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x1400D0F98 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x1400D1B8C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400D1CD0 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall PopReleasePowerRequestPushLock(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v2 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v3 = PopPowerRequestLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v2, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
