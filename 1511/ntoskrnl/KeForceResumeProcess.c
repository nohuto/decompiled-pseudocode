/*
 * XREFs of KeForceResumeProcess @ 0x1400946B4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1401D0384 (MiReAcquireCommitFailWorker.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspTerminateProcess @ 0x140450604 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x140452D70 (PsFreezeProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x140095E5C (KiThawSingleThread.c)
 */

void __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v5; // rsi
  __int64 v6; // r8
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
    {
      LOBYTE(v6) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v6);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    __writecr8(CurrentIrql);
  }
}
