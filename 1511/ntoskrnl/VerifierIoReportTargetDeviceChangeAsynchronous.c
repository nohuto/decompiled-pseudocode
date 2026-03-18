/*
 * XREFs of VerifierIoReportTargetDeviceChangeAsynchronous @ 0x1406C083C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoReportTargetDeviceChangeAsynchronous(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PVOID NotificationStructure,
        PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID Context)
{
  return pXdvIoReportTargetDeviceChangeAsynchronous(PhysicalDeviceObject, NotificationStructure, Callback, Context);
}
