/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140530480
 * Callers:
 *     VerifierPsSetCreateThreadNotifyRoutine @ 0x1406C0C54 (VerifierPsSetCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
