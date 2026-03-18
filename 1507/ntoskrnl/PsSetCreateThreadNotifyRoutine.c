/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x1405A6F64
 * Callers:
 *     VerifierPsSetCreateThreadNotifyRoutine @ 0x140742494 (VerifierPsSetCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
