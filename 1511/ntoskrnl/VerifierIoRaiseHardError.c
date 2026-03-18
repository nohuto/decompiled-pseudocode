/*
 * XREFs of VerifierIoRaiseHardError @ 0x1406C07BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  pXdvIoRaiseHardError(Irp, Vpb, RealDeviceObject);
}
