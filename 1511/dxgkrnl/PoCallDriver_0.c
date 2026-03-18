/*
 * XREFs of PoCallDriver_0 @ 0x1C00116B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoCallDriver_0(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return PoCallDriver(DeviceObject, Irp);
}
