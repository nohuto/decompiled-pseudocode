/*
 * XREFs of IovpUnloadDriver @ 0x1406B58F4
 * Callers:
 *     IovUnloadDrivers @ 0x1406B5208 (IovUnloadDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IopCheckUnloadDriver @ 0x1400D103C (IopCheckUnloadDriver.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+68h] [rbp-20h]
  char v6; // [rsp+90h] [rbp+8h] BYREF

  if ( !Object[13] )
    return 3221225488LL;
  ObfReferenceObject(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v6) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v6 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    ((void (__fastcall *)(_QWORD *))Object[13])(Object);
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    v5 = Object;
    WorkItem.Parameter = &WorkItem;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  ObfDereferenceObject(Object);
  return 0LL;
}
