/*
 * XREFs of VerifierPsTerminateSystemThread @ 0x1407424A4
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
