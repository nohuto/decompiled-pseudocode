/*
 * XREFs of IoFreeController @ 0x1400AE518
 * Callers:
 *     IoAllocateController @ 0x1400AE4B0 (IoAllocateController.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x1400AE6E8 (KeRemoveDeviceQueue.c)
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
