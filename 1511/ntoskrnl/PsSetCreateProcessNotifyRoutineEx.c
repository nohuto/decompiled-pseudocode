/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x140530468
 * Callers:
 *     VerifierPsSetCreateProcessNotifyRoutineEx @ 0x1406C0C4C (VerifierPsSetCreateProcessNotifyRoutineEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  unsigned int v2; // eax

  v2 = 2;
  if ( Remove )
    v2 = 3;
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, v2);
}
