/*
 * XREFs of PopInitializeIrpWorkers @ 0x140770504
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140125DF8 (PopCreatePowerThread.c)
 */

NTSTATUS PopInitializeIrpWorkers()
{
  NTSTATUS result; // eax
  int v1; // ebx

  PopCreateIrpWorkerAllowed = 1;
  qword_1402DD1E8 = (__int64)&PopIrpThreadList;
  PopIrpThreadList = (__int64)&PopIrpThreadList;
  qword_1402DDC68 = (__int64)&PopIrpWorkerList;
  PopIrpWorkerList = (__int64)&PopIrpWorkerList;
  PopIrpWorkerCount = 0;
  qword_1402DDC50 = (__int64)&qword_1402DDC48;
  qword_1402DDC48 = (__int64)&qword_1402DDC48;
  PopIrpWorkerControlEvent.Header.WaitListHead.Blink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerControlEvent.Header.WaitListHead.Flink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Blink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Flink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerInFlightCount = 0;
  PopIrpWorkerPendingCount = 0;
  PopIrpWorkerRequested = 0;
  PopIrpWorkerSemaphore = 5;
  byte_1402DDC42 = 8;
  dword_1402DDC44 = 0;
  dword_1402DDC58 = 0x7FFFFFFF;
  LOWORD(PopIrpWorkerControlEvent.Header.Lock) = 1;
  PopIrpWorkerControlEvent.Header.Size = 6;
  PopIrpWorkerControlEvent.Header.SignalState = 0;
  PopIrpWorkerMutex.Count = 1;
  PopIrpWorkerMutex.Owner = 0LL;
  PopIrpWorkerMutex.Contention = 0;
  LOWORD(PopIrpWorkerMutex.Event.Header.Lock) = 1;
  PopIrpWorkerMutex.Event.Header.Size = 6;
  PopIrpWorkerMutex.Event.Header.SignalState = 0;
  ExInitializeNPagedLookasideList(&PopDynamicIrpWorkerLookaside, 0LL, 0LL, 0x200u, 8uLL, 0x72496F50u, 0);
  result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorkerControl, 0LL);
  if ( result >= 0 )
  {
    PopIrpWorkerPendingCount = 2;
    v1 = 0;
    while ( 1 )
    {
      result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorker, 0LL);
      if ( result < 0 )
        break;
      if ( (unsigned int)++v1 >= 2 )
        return 0;
    }
  }
  return result;
}
