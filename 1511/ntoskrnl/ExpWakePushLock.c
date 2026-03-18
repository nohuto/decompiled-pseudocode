/*
 * XREFs of ExpWakePushLock @ 0x140030B00
 * Callers:
 *     ExpOptimizePushLockList @ 0x140020F4C (ExpOptimizePushLockList.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140030AA0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockSharedEx @ 0x1400C8BAC (ExfReleasePushLockSharedEx.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x140032408 (KiAbApplyWakeupBoost.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

int __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 CurrentThread)
{
  int v4; // r8d
  _QWORD *v5; // r10
  struct _KEVENT *v6; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  signed __int64 v8; // rtt
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  signed __int64 v12; // rtt
  _QWORD *v13; // rcx

  v4 = 1;
  while ( (CurrentThread & 1) == 0 )
  {
LABEL_3:
    v5 = (_QWORD *)(CurrentThread & 0xFFFFFFFFFFFFFFF0uLL);
    v6 = *(struct _KEVENT **)((CurrentThread & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v6 )
    {
      do
      {
        v13 = v5;
        v5 = (_QWORD *)v5[3];
        v5[5] = v13;
        v6 = (struct _KEVENT *)v5[4];
      }
      while ( !v6 );
      if ( v5 != (_QWORD *)(CurrentThread & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((CurrentThread & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v6;
    }
    if ( (v6[2].Header.SignalState & 1) != 0 )
    {
      Blink = v6[1].Header.WaitListHead.Blink;
      if ( Blink )
      {
        *(_QWORD *)((CurrentThread & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = Blink;
        v6[1].Header.WaitListHead.Blink = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        v4 = 0;
LABEL_7:
        CurrentIrql = 2;
        if ( v6[1].Header.WaitListHead.Blink )
        {
          CurrentIrql = KeGetCurrentIrql();
          LODWORD(CurrentThread) = 2;
          __writecr8(2uLL);
        }
        if ( !v4 )
        {
          Flink = v6[2].Header.WaitListHead.Flink;
          if ( Flink )
          {
            CurrentThread = (signed __int64)KeGetCurrentThread();
            if ( KiAbEnabled )
              LODWORD(CurrentThread) = KiAbApplyWakeupBoost((unsigned int)*(char *)(CurrentThread + 195), Flink, 0LL);
          }
        }
        do
        {
          v10 = v6[1].Header.WaitListHead.Blink;
          if ( !_interlockedbittestandreset(&v6[2].Header.SignalState, 1u) )
            LODWORD(CurrentThread) = KeSetEvent(v6, 0, 0);
          v6 = (struct _KEVENT *)v10;
        }
        while ( v10 );
        if ( CurrentIrql != 2 )
        {
          LODWORD(CurrentThread) = CurrentIrql;
          __writecr8(CurrentIrql);
        }
        return CurrentThread;
      }
    }
    v8 = CurrentThread;
    CurrentThread = _InterlockedCompareExchange64(a1, 0LL, CurrentThread);
    if ( v8 == CurrentThread )
      goto LABEL_7;
  }
  while ( 1 )
  {
    v12 = CurrentThread;
    CurrentThread = _InterlockedCompareExchange64(a1, CurrentThread - 4, CurrentThread);
    if ( v12 == CurrentThread )
      return CurrentThread;
    if ( (CurrentThread & 1) == 0 )
      goto LABEL_3;
  }
}
