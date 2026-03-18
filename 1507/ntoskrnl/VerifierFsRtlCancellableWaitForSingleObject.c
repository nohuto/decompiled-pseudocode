/*
 * XREFs of VerifierFsRtlCancellableWaitForSingleObject @ 0x140741C7C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  return pXdvFsRtlCancellableWaitForSingleObject(Object, Timeout, Irp);
}
