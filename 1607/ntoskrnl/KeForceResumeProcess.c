/*
 * XREFs of KeForceResumeProcess @ 0x1400C6D10
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1401E042C (MiReAcquireCommitFailWorker.c)
 *     PspTerminateProcess @ 0x1404EAEF8 (PspTerminateProcess.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1400C5400 (KiThawSingleThread.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 */

void __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  volatile LONG *v5; // r14
  __int64 v6; // rdx
  _QWORD *i; // rbx

  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
    *(_DWORD *)(a1 + 616) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
      KiThawSingleThread((__int64)CurrentPrcb, (__int64)(i - 95), 1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    LOBYTE(v6) = CurrentIrql;
    KiReleaseProcessLockExclusive(a1, v6);
  }
}
