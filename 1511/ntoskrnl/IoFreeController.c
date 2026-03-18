/*
 * XREFs of IoFreeController @ 0x14011B214
 * Callers:
 *     IoAllocateController @ 0x14011B1AC (IoAllocateController.c)
 *     VerifierIoFreeController @ 0x1406C0744 (VerifierIoFreeController.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x14011B3E4 (KeRemoveDeviceQueue.c)
 */

void __stdcall IoFreeController(PCONTROLLER_OBJECT ControllerObject)
{
  KDEVICE_QUEUE *p_DeviceWaitQueue; // rbx
  PKDEVICE_QUEUE_ENTRY v2; // rax

  p_DeviceWaitQueue = &ControllerObject->DeviceWaitQueue;
  do
    v2 = KeRemoveDeviceQueue(p_DeviceWaitQueue);
  while ( v2
       && ((unsigned int (__fastcall *)(ULONG *, struct _LIST_ENTRY *, _QWORD, struct _LIST_ENTRY *))v2[1].DeviceListEntry.Flink)(
            &v2[-4].SortKey,
            v2[-2].DeviceListEntry.Flink,
            0LL,
            v2[1].DeviceListEntry.Blink) == 2 );
}
