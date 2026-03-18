/*
 * XREFs of MmIsSessionLeaderProcess @ 0x140536D98
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 MmIsSessionLeaderProcess()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[107];
}
