/*
 * XREFs of MmIsSessionLeaderProcess @ 0x1405372D8
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 MmIsSessionLeaderProcess()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[107];
}
