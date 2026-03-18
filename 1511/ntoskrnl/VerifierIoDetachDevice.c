/*
 * XREFs of VerifierIoDetachDevice @ 0x1406C073C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  pXdvIoDetachDevice(TargetDevice);
}
