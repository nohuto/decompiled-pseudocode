/*
 * XREFs of VerifierZwTerminateProcess @ 0x14074263C
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
