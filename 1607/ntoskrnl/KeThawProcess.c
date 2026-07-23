/*
 * XREFs of KeThawProcess @ 0x1400C52E8
 * Callers:
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1400C5400 (KiThawSingleThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 */

void __fastcall KeThawProcess(__int64 a1, char a2)
{
  _QWORD **v3; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r11d
  _QWORD *i; // rax
  _QWORD *j; // rbx

  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (volatile LONG *)(a1 + 64);
  v8 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 616);
  v11 = v10 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( v11 )
  {
    if ( a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
      v8 = KiQueryUnbiasedInterruptTime(0LL) - *(_QWORD *)(a1 + 72);
    }
    else
    {
      *(_DWORD *)(a1 + 616) = v10 - 1;
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
  {
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
      *(i - 64) += v8;
  }
  if ( v11 == 1 )
  {
    for ( j = *v3; j != v3; j = (_QWORD *)*j )
      KiThawSingleThread(CurrentPrcb, j - 95, 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    LOBYTE(v9) = CurrentIrql;
    KiReleaseProcessLockExclusive(a1, v9);
  }
}
