/*
 * XREFs of VerifierIoSetDeviceToVerify @ 0x14020B930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  pXdvIoSetDeviceToVerify(Thread, DeviceObject);
}
