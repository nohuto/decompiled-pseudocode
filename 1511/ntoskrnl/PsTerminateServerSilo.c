/*
 * XREFs of PsTerminateServerSilo @ 0x14063FD38
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 * Callees:
 *     <none>
 */

char __fastcall PsTerminateServerSilo(struct _KEVENT *a1, int a2)
{
  return PspTerminateAllProcessesInJobHierarchy(a1, a2, 0);
}
