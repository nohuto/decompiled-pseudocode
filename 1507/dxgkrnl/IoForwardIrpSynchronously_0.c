/*
 * XREFs of IoForwardIrpSynchronously_0 @ 0x1C000FE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall IoForwardIrpSynchronously_0(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IoForwardIrpSynchronously(DeviceObject, Irp);
}
