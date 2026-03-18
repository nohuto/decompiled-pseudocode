/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x140741F40
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
