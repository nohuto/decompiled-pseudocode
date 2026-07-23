/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1401252C0
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x14012520C (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14014CD2C (PopIrpWorkerControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140131050 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rdi
  int PowerThread; // ebx

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = v2;
  if ( !v2 )
  {
    PowerThread = -1073741670;
LABEL_7:
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    return (unsigned int)PowerThread;
  }
  *v2 = a1;
  PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
  if ( PowerThread < 0 )
  {
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v3);
    goto LABEL_7;
  }
  return 0;
}
