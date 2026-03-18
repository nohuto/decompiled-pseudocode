/*
 * XREFs of VerifierIoReportTargetDeviceChange @ 0x1406C0834
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoReportTargetDeviceChange(PDEVICE_OBJECT PhysicalDeviceObject, PVOID NotificationStructure)
{
  return pXdvIoReportTargetDeviceChange(PhysicalDeviceObject, NotificationStructure);
}
