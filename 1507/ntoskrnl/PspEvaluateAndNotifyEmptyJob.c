/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140505E20
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x140505DD8 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspSendReliableJobNotification @ 0x140553D20 (PspSendReliableJobNotification.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v7; // ax

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
  ExReleaseResourceLite((PERESOURCE)&Event[2].Header.WaitListHead);
  if ( CurrentThread )
  {
    v7 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v7;
    if ( !v7 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
