/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400C7FC0
 * Callers:
 *     VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x14074C1D8 (VerifierExEnterPriorityRegionAndAcquireResourceShared.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceSharedNoReboot @ 0x14074C220 (VerifierExEnterPriorityRegionAndAcquireResourceSharedNoReboot.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400CA5E0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v2; // r14
  char v3; // bp
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v6; // edi
  PVOID *PoolWithTag; // rax
  volatile signed __int32 *v9; // rcx
  _KDPC *Dpc; // rcx
  volatile signed __int64 *p_Blink; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  CurrentIrql = 0;
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
    v9 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill10[8];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v9);
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v9);
    }
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
    p_Blink = (volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].WaitListEntry.Blink;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(p_Blink, retaddr);
    else
      _InterlockedAnd64(p_Blink, 0LL);
    __writecr8(CurrentIrql);
  }
  if ( v6 == 1 )
    KeAbProcessEffectiveIoPriorityChange(CurrentThread, 0LL);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
