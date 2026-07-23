/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140575E80
 * Callers:
 *     VfFaultsSetParameters @ 0x140710F7C (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x1407B9E08 (VerifierInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
