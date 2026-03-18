/*
 * XREFs of PsCreateSystemThread_0 @ 0x1C00114A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PsCreateSystemThread_0(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThread(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext);
}
