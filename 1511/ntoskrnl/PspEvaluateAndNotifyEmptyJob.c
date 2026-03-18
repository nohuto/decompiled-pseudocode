/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1403E9410
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x1403E93C8 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PspSendReliableJobNotification @ 0x140487C50 (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
  if ( a2 )
    --LODWORD(Event[49].Header.WaitListHead.Blink);
  if ( !LODWORD(Event[49].Header.WaitListHead.Blink) )
  {
    if ( _interlockedbittestandreset(&Event[54].Header.Lock, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset(&Event[54].Header.Lock, 0x15u)
      && a3
      && *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Blink) & 0x10) != 0 )
    {
      PspSendReliableJobNotification(Event);
    }
  }
  return PspUnlockJob(Event, CurrentThread);
}
