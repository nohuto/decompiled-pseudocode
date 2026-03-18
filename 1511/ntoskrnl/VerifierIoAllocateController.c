/*
 * XREFs of VerifierIoAllocateController @ 0x1406C06C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  pXdvIoAllocateController(ControllerObject, DeviceObject, ExecutionRoutine, Context);
}
