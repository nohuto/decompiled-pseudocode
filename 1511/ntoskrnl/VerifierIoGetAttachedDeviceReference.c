/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x1406C074C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PDEVICE_OBJECT __stdcall VerifierIoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  return pXdvIoGetAttachedDeviceReference(DeviceObject);
}
