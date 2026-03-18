/*
 * XREFs of PopReleaseAwaymodeLock @ 0x1403EF0EC
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1406B0A18 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall PopReleaseAwaymodeLock(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  _m_prefetchw(&PopAwaymodeLock);
  v2 = PopAwaymodeLock - 16;
  if ( (PopAwaymodeLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (PopAwaymodeLock & 2) != 0
    || (v3 = PopAwaymodeLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopAwaymodeLock, v2, PopAwaymodeLock)) )
  {
    ExfReleasePushLock(&PopAwaymodeLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&PopAwaymodeLock);
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
