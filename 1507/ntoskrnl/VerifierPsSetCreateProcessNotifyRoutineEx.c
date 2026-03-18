/*
 * XREFs of VerifierPsSetCreateProcessNotifyRoutineEx @ 0x14074248C
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
