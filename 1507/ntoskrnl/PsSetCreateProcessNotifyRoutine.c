/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1405A70F8
 * Callers:
 *     VerifierPsSetCreateProcessNotifyRoutine @ 0x140742484 (VerifierPsSetCreateProcessNotifyRoutine.c)
 *     VfFaultsSetParameters @ 0x140746708 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x1407E507C (VerifierInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove, 0LL);
}
