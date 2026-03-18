/*
 * XREFs of VerifierPsSetCreateThreadNotifyRoutine @ 0x140742494
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return pXdvPsSetCreateThreadNotifyRoutine(NotifyRoutine);
}
