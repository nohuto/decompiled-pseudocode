/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x14067EAB8
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 */

int __fastcall PspQueueDeferredWorkAndWait(__int64 a1, __int64 a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  int (__fastcall *v6)(__int64); // [rsp+68h] [rbp-20h]
  __int64 v7; // [rsp+70h] [rbp-18h]
  int v8; // [rsp+78h] [rbp-10h]

  if ( PsIsSystemProcess(KeGetCurrentThread()->ApcState.Process) )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  v6 = PspInitializeServerSiloDeferred;
  v7 = a2;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
