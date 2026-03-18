/*
 * XREFs of PopInitializeIrpWorkers @ 0x1407E6434
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140159900 (PopCreatePowerThread.c)
 */

NTSTATUS PopInitializeIrpWorkers()
{
  NTSTATUS result; // eax
  int v1; // ebx

  PopCreateIrpWorkerAllowed = 1;
  qword_14032D638 = (__int64)&PopIrpThreadList;
  PopIrpThreadList = (__int64)&PopIrpThreadList;
  qword_14032E248 = (__int64)&PopIrpWorkerList;
  PopIrpWorkerList = (__int64)&PopIrpWorkerList;
  PopIrpWorkerCount = 0;
  qword_14032E230 = (__int64)&qword_14032E228;
  qword_14032E228 = (__int64)&qword_14032E228;
  PopIrpWorkerControlEvent.Header.WaitListHead.Blink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerControlEvent.Header.WaitListHead.Flink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  qword_14032D608 = (__int64)&qword_14032D600;
  qword_14032D600 = (__int64)&qword_14032D600;
  PopIrpWorkerInFlightCount = 0;
  PopIrpWorkerPendingCount = 0;
  PopIrpWorkerRequested = 0;
  PopIrpWorkerSemaphore = 5;
  byte_14032E222 = 8;
  dword_14032E224 = 0;
  dword_14032E238 = 0x7FFFFFFF;
  LOWORD(PopIrpWorkerControlEvent.Header.Lock) = 1;
  PopIrpWorkerControlEvent.Header.Size = 6;
  PopIrpWorkerControlEvent.Header.SignalState = 0;
  LODWORD(PopIrpWorkerMutex) = 1;
  qword_14032D5E8 = 0LL;
  dword_14032D5F0 = 0;
  word_14032D5F8 = 1;
  byte_14032D5FA = 6;
  dword_14032D5FC = 0;
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
