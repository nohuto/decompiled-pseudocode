/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140065520
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140061FA0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v2; // r14
  char v3; // bp
  KIRQL v4; // al
  signed __int32 v6; // edi
  PVOID *PoolWithTag; // rax
  _KDPC *Dpc; // rdx

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
  v6 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime);
  if ( v3 )
  {
    if ( v2 )
    {
      Dpc = CurrentThread[1].Timer.Dpc;
      if ( *(struct _KTHREAD **)&Dpc->TargetInfoAsUlong != (struct _KTHREAD *)&CurrentThread[1].Timer.TimerListEntry.Blink )
        __fastfail(3u);
      *v2 = &CurrentThread[1].Timer.TimerListEntry.Blink;
      v2[1] = Dpc;
      *(_QWORD *)&Dpc->TargetInfoAsUlong = v2;
      CurrentThread[1].Timer.Dpc = (_KDPC *)v2;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].WaitListEntry.Blink, v4);
  }
  if ( v6 == 1 )
    KeAbProcessEffectiveIoPriorityChange((__int64)CurrentThread, 0);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
