/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x14011F74C
 * Callers:
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MmIsSessionLeaderProcess @ 0x1405001DC (MmIsSessionLeaderProcess.c)
 *     NtSetDefaultHardErrorPort @ 0x14054A2E4 (NtSetDefaultHardErrorPort.c)
 *     PsGetCurrentServerSiloName @ 0x14063F730 (PsGetCurrentServerSiloName.c)
 *     ExpRaiseHardError @ 0x1406735D8 (ExpRaiseHardError.c)
 * Callees:
 *     <none>
 */

void *PsGetCurrentServerSiloGlobals()
{
  return PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
}
