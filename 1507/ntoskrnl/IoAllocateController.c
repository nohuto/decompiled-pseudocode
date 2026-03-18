/*
 * XREFs of IoAllocateController @ 0x14014F6C4
 * Callers:
 *     VerifierIoAllocateController @ 0x140741EB8 (VerifierIoAllocateController.c)
 * Callees:
 *     IoFreeController @ 0x14014F4F0 (IoFreeController.c)
 *     KeInsertDeviceQueue @ 0x14014F7D0 (KeInsertDeviceQueue.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && ((unsigned int (__fastcall *)(PDEVICE_OBJECT, struct _IRP *, _QWORD, PVOID))ExecutionRoutine)(
         DeviceObject,
         DeviceObject->CurrentIrp,
         0LL,
         Context) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
