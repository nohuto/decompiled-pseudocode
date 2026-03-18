/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0
 * Callers:
 *     VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406C9568 (VerifierExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceExclusiveNoReboot @ 0x1406C95B0 (VerifierExEnterPriorityRegionAndAcquireResourceExclusiveNoReboot.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     KiAbThreadInsertList @ 0x1400EC5C8 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v2; // r14
  char v3; // bp
  KIRQL v4; // al
  signed __int32 v6; // edi
  PVOID *PoolWithTag; // rax
  _KDPC *Dpc; // rdx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( PspAlwaysTrackIoBoosting )
  {
    v3 = 1;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x70uLL);
      RtlCaptureStackBackTrace(1u, 0xAu, v2 + 2, 0LL);
      v2[12] = KeGetCurrentThread();
      v2[13] = 0LL;
    }
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].WaitListEntry.Blink);
  }
  v6 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1);
  if ( v3 )
  {
    if ( v2 )
    {
      Dpc = CurrentThread[1].Timer.Dpc;
      *v2 = &CurrentThread[1].Timer.TimerListEntry.Blink;
      v2[1] = Dpc;
      if ( *(struct _KTHREAD **)&Dpc->TargetInfoAsUlong != (struct _KTHREAD *)&CurrentThread[1].Timer.TimerListEntry.Blink )
        __fastfail(3u);
      *(_QWORD *)&Dpc->TargetInfoAsUlong = v2;
      CurrentThread[1].Timer.Dpc = (_KDPC *)v2;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].WaitListEntry.Blink, v4);
  }
  if ( v6 == 1 && KiAbEnabled && CurrentThread->AbWaitEntryCount )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(
                         CurrentThread,
                         &CurrentPrcb->AbPropagateBoostsList,
                         &CurrentThread->PropagateBoostsEntry) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
