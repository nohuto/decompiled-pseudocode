/*
 * XREFs of VerifierIoReportDetectedDevice @ 0x1406C082C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  return pXdvIoReportDetectedDevice(
           DriverObject,
           LegacyBusType,
           BusNumber,
           SlotNumber,
           ResourceList,
           ResourceRequirements,
           ResourceAssigned,
           DeviceObject);
}
