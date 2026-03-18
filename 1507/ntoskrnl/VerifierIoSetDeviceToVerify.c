/*
 * XREFs of VerifierIoSetDeviceToVerify @ 0x14025AFCC
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
