/*
 * XREFs of IoGetAttachedDeviceReference_0 @ 0x1C000FDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference_0(PDEVICE_OBJECT DeviceObject)
{
  return IoGetAttachedDeviceReference(DeviceObject);
}
