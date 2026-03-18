/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x1405A6F5C
 * Callers:
 *     VerifierPsSetCreateProcessNotifyRoutineEx @ 0x14074248C (VerifierPsSetCreateProcessNotifyRoutineEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  char v2; // r8

  v2 = 1;
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove, v2);
}
