/*
 * XREFs of CmpCompleteLazyWrite @ 0x1400AE420
 * Callers:
 *     CmpLazyWriteWorker @ 0x140143B04 (CmpLazyWriteWorker.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall CmpCompleteLazyWrite(PKTIMER Timer, unsigned __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r14
  KIRQL v5; // al
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rdi
  KIRQL v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // r11
  ULONG Processor; // esi
  unsigned __int64 v12; // rdi
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v14; // rdi

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  Blink = Timer[2].TimerListEntry.Blink;
  v8 = v5;
  if ( !a2 && ((unsigned __int8)Blink & 7) != 3 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v9 = 1LL;
  if ( a2 )
  {
    v10 = *a2;
  }
  else
  {
    LOBYTE(v6) = 1;
    Processor = 1000;
    v12 = (unsigned __int64)Blink & 0xFFFFFFFFFFFFFFF8uLL;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v6);
    if ( UnbiasedInterruptTime >= v12 )
      goto LABEL_5;
    v14 = v12 - UnbiasedInterruptTime;
    if ( v14 <= v10 )
      goto LABEL_5;
    v10 = v14;
  }
  Processor = Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-(__int64)v10, 0, Processor, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v9;
  KeReleaseSpinLock(p_QuadPart, v8);
}
