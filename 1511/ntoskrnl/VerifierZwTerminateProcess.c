/*
 * XREFs of VerifierZwTerminateProcess @ 0x1406C0DFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return pXdvZwTerminateProcess(ProcessHandle, ExitStatus);
}
