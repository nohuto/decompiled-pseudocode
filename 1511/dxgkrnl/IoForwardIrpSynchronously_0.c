/*
 * XREFs of IoForwardIrpSynchronously_0 @ 0x1C00115D0
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
