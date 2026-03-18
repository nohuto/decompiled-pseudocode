/*
 * XREFs of VerifierFsRtlBalanceReads @ 0x140741C6C
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
