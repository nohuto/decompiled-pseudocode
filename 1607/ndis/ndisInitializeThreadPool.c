/*
 * XREFs of ndisInitializeThreadPool @ 0x1C01046D0
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     ndisCreateThread @ 0x1C00A86D4 (ndisCreateThread.c)
 */

__int64 ndisInitializeThreadPool()
{
  int Thread; // ebx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  KeInitializeTimerEx(&ndisThreadPoolTimer, SynchronizationTimer);
  KeInitializeQueue(&ndisWorkerQueue, 0);
  KeInitializeSpinLock(&ndisThreadPoolLock);
  ndisThreadPoolTimerDueTime.QuadPart = -10000000LL;
  Thread = ndisCreateThread((KSTART_ROUTINE *)ndisThreadPoolTimerHandler, 0LL, 0, (PVOID *)&ndisThreadPoolTimerThread);
  if ( Thread >= 0 )
  {
    KeSetBasePriorityThread(ndisThreadPoolTimerThread, -1);
    Thread = ndisCreateThread((KSTART_ROUTINE *)ndisWorkerThread, 0LL, 0, &Object);
    if ( Thread >= 0 )
    {
      ObfDereferenceObject(Object);
      LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = 1;
    }
  }
  return (unsigned int)Thread;
}
