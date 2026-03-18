/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x140154878
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MmIsSessionLeaderProcess @ 0x14057AC40 (MmIsSessionLeaderProcess.c)
 *     NtSetDefaultHardErrorPort @ 0x1405C18B4 (NtSetDefaultHardErrorPort.c)
 *     ExpRaiseHardError @ 0x1406F7B94 (ExpRaiseHardError.c)
 * Callees:
 *     <none>
 */

void *PsGetCurrentServerSiloGlobals()
{
  return PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
}
