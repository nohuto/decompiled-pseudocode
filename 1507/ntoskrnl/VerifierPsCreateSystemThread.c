/*
 * XREFs of VerifierPsCreateSystemThread @ 0x14074242C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return pXdvPsCreateSystemThread(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext);
}
