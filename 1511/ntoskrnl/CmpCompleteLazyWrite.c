/*
 * XREFs of CmpCompleteLazyWrite @ 0x1400EFC68
 * Callers:
 *     CmpLazyWriteWorker @ 0x14013CADC (CmpLazyWriteWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 */

void __fastcall CmpCompleteLazyWrite(PKTIMER Timer, unsigned __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r14
  KIRQL v5; // al
  struct _LIST_ENTRY *Blink; // rdi
  KIRQL v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r11
  ULONG Processor; // esi
  unsigned __int64 v11; // rdi
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v13; // rdi

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  Blink = Timer[2].TimerListEntry.Blink;
  v7 = v5;
  if ( !a2 && ((unsigned __int8)Blink & 7) != 3 )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  v8 = 1LL;
  if ( a2 )
  {
    v9 = *a2;
  }
  else
  {
    Processor = 1000;
    v11 = (unsigned __int64)Blink & 0xFFFFFFFFFFFFFFF8uLL;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime >= v11 )
      goto LABEL_5;
    v13 = v11 - UnbiasedInterruptTime;
    if ( v13 <= v9 )
      goto LABEL_5;
    v9 = v13;
  }
  Processor = Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-(__int64)v9, 0, Processor, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v8;
  KeReleaseSpinLock(p_QuadPart, v7);
}
