/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x140124D50
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x140124C9C (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14014C7BC (PopIrpWorkerControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140130AE0 (PopCreatePowerThread.c)
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
