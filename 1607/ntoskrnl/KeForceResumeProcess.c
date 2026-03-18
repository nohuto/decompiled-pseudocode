/*
 * XREFs of KeForceResumeProcess @ 0x1400C8E70
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1401E0600 (MiReAcquireCommitFailWorker.c)
 *     PspTerminateProcess @ 0x140507F68 (PspTerminateProcess.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PsFreezeProcess @ 0x14051E428 (PsFreezeProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1400C7560 (KiThawSingleThread.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F2E8C (KiReleaseProcessLockExclusive.c)
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
