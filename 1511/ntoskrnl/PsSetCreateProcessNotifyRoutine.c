/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140530614
 * Callers:
 *     VerifierPsSetCreateProcessNotifyRoutine @ 0x1406C0C44 (VerifierPsSetCreateProcessNotifyRoutine.c)
 *     VfFaultsSetParameters @ 0x1406C4EDC (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x14076F860 (VerifierInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
