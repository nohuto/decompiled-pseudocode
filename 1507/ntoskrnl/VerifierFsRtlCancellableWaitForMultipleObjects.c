/*
 * XREFs of VerifierFsRtlCancellableWaitForMultipleObjects @ 0x140741C74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlCancellableWaitForMultipleObjects(
        ULONG Count,
        PVOID ObjectArray[],
        WAIT_TYPE WaitType,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray,
        PIRP Irp)
{
  return pXdvFsRtlCancellableWaitForMultipleObjects(Count, ObjectArray, WaitType, Timeout, WaitBlockArray, Irp);
}
