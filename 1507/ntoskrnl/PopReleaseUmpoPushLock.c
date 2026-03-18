/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1404E6304
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x1404FFA1C (PopUmpoProcessMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall PopReleaseUmpoPushLock(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  _m_prefetchw(&PopUmpoPushLock);
  v2 = PopUmpoPushLock - 16;
  if ( (PopUmpoPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (PopUmpoPushLock & 2) != 0
    || (v3 = PopUmpoPushLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, v2, PopUmpoPushLock)) )
  {
    ExfReleasePushLock(&PopUmpoPushLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&PopUmpoPushLock);
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
