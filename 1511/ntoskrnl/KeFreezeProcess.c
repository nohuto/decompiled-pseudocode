/*
 * XREFs of KeFreezeProcess @ 0x140096ED4
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x140452D70 (PsFreezeProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x140096FC0 (KiFreezeSingleThread.c)
 */

void __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // rsi
  int v7; // eax
  int v8; // r11d
  _QWORD **v9; // rdi
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
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    __writecr8(CurrentIrql);
  }
  else
  {
    v9 = (_QWORD **)(a1 + 48);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      KiFreezeSingleThread(CurrentPrcb, i - 95);
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
}
