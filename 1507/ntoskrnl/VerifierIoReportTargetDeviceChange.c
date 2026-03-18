/*
 * XREFs of VerifierIoReportTargetDeviceChange @ 0x140742028
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
