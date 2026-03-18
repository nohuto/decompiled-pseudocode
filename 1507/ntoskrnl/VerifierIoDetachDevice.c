/*
 * XREFs of VerifierIoDetachDevice @ 0x140741F30
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
