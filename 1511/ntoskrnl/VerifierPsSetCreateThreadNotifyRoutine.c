/*
 * XREFs of VerifierPsSetCreateThreadNotifyRoutine @ 0x1406C0C54
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
