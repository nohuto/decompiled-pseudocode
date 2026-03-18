/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1401343C4
 * Callers:
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     PsUnregisterMonitorServerSilo @ 0x14063FD40 (PsUnregisterMonitorServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int16 Object; // [rsp+50h] [rbp-30h] BYREF
  char v5; // [rsp+52h] [rbp-2Eh]
  int v6; // [rsp+54h] [rbp-2Ch]
  _QWORD v7[4]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+78h] [rbp-8h]

  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
    return a1(a2);
  v6 = 0;
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  v7[1] = v7;
  v7[0] = v7;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  v7[2] = a1;
  v7[3] = a2;
  WorkItem.Parameter = &Object;
  Object = 1;
  v5 = 6;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Object, UserRequest, 0, 0, 0LL);
  return v8;
}
