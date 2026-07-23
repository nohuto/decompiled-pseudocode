/*
 * XREFs of KeFreezeProcessNew @ 0x1401D1F5C
 * Callers:
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x1400C6E8C (KiFreezeSingleThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 */

__int64 __fastcall KeFreezeProcessNew(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // r15
  int v7; // ecx
  unsigned int v8; // esi
  _QWORD **v10; // rdi
  _QWORD *i; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_DWORD *)(a1 + 616);
  v8 = v7 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime();
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 616) = v7 + 1;
  }
  if ( v8 )
  {
    KiReleaseProcessLockExclusive(a1, CurrentIrql);
    return v8;
  }
  else
  {
    v10 = (_QWORD **)(a1 + 48);
    for ( i = *v10; i != v10; i = (_QWORD *)*i )
      KiFreezeSingleThread((__int64)CurrentPrcb, (__int64)(i - 95));
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
    return 0LL;
  }
}
