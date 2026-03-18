/*
 * XREFs of MmIsSessionLeaderProcess @ 0x14057AC40
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140154878 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 7);
}
