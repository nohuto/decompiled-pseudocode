/*
 * XREFs of VerifierPsSetCreateProcessNotifyRoutineEx @ 0x1406C0C4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsSetCreateProcessNotifyRoutineEx(
        PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine,
        BOOLEAN Remove)
{
  return pXdvPsSetCreateProcessNotifyRoutineEx(NotifyRoutine, Remove);
}
