/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x140159898
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x140147CEC (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14016ECA8 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopCreatePowerThread @ 0x140159900 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  void *v4; // rdi
  int PowerThread; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // eax

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v4 = v2;
  if ( v2 )
  {
    *v2 = a1;
    PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
    if ( PowerThread >= 0 )
      return 0;
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v4);
  }
  else
  {
    PowerThread = -1073741670;
  }
  v7 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, v3);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  --PopIrpWorkerPendingCount;
  qword_14032D5E8 = 0LL;
  dword_14032D610 = CurrentIrql;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v10);
  __writecr8(CurrentIrql);
  KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
  return (unsigned int)PowerThread;
}
