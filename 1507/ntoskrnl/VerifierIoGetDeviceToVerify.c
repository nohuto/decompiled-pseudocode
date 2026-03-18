/*
 * XREFs of VerifierIoGetDeviceToVerify @ 0x14025AFBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PDEVICE_OBJECT __stdcall VerifierIoGetDeviceToVerify(PETHREAD Thread)
{
  return pXdvIoGetDeviceToVerify(Thread);
}
