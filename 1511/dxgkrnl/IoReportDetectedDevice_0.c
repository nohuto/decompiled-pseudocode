/*
 * XREFs of IoReportDetectedDevice_0 @ 0x1C00116D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoReportDetectedDevice_0(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  return IoReportDetectedDevice(
           DriverObject,
           LegacyBusType,
           BusNumber,
           SlotNumber,
           ResourceList,
           ResourceRequirements,
           ResourceAssigned,
           DeviceObject);
}
