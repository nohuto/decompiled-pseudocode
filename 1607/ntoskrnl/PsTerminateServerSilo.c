/*
 * XREFs of PsTerminateServerSilo @ 0x14067E25C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x14067FCDC (PspCatchCriticalBreak.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404C5E8C (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( PspIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
