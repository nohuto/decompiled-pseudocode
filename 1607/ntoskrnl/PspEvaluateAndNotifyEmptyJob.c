/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140469F64
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x14046A034 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404E2F28 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     PspHardDereferenceSiloWorker @ 0x14020F654 (PspHardDereferenceSiloWorker.c)
 *     PspSendReliableJobNotification @ 0x14047310C (PspSendReliableJobNotification.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
  if ( a2 )
    --Event[51].Header.LockNV;
  if ( !Event[51].Header.LockNV )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[54].Header.WaitListHead.Flink & 0x40000000) != 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x1Du);
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  PspUnlockJob((__int64)Event, (__int64)CurrentThread);
}
