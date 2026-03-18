/*
 * XREFs of VerifierPsTerminateSystemThread @ 0x1406C0C64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsTerminateSystemThread(NTSTATUS ExitStatus)
{
  return pXdvPsTerminateSystemThread(ExitStatus);
}
