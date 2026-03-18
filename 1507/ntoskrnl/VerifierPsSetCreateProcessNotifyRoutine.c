/*
 * XREFs of VerifierPsSetCreateProcessNotifyRoutine @ 0x140742484
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsSetCreateProcessNotifyRoutine(
        PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine,
        BOOLEAN Remove)
{
  return pXdvPsSetCreateProcessNotifyRoutine(NotifyRoutine, Remove);
}
