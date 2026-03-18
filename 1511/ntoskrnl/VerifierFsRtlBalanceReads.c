/*
 * XREFs of VerifierFsRtlBalanceReads @ 0x1406C0478
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlBalanceReads(PDEVICE_OBJECT TargetDevice)
{
  return pXdvFsRtlBalanceReads(TargetDevice);
}
