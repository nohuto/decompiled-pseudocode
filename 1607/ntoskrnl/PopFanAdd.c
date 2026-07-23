/*
 * XREFs of PopFanAdd @ 0x140673048
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     PopSqmFanEnumeration @ 0x1406768EC (PopSqmFanEnumeration.c)
 */

void __fastcall PopFanAdd(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 48LL) = -1073741667;
  KeInitializeEvent((PRKEVENT)(a1 + 128), NotificationEvent, 0);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = PopFanWorker;
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  PopSqmFanEnumeration();
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 80), DelayedWorkQueue);
}
