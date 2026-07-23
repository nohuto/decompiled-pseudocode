/*
 * XREFs of KeFreezeProcess @ 0x1400C6DDC
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x1400C6E8C (KiFreezeSingleThread.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 */

void __fastcall KeFreezeProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  volatile LONG *v4; // r14
  __int64 v5; // rdx
  int v6; // r8d
  bool v7; // zf
  _QWORD **v8; // rdi
  _QWORD *i; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v6 = *(_DWORD *)(a1 + 616);
  v7 = v6 + ((*(_DWORD *)(a1 + 440) >> 3) & 1) == 0;
  *(_DWORD *)(a1 + 616) = v6 + 1;
  if ( v7 )
  {
    v8 = (_QWORD **)(a1 + 48);
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
      KiFreezeSingleThread(CurrentPrcb, i - 95);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    LOBYTE(v5) = CurrentIrql;
    KiReleaseProcessLockExclusive(a1, v5);
  }
}
