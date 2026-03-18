/*
 * XREFs of MmIsSessionLeaderProcess @ 0x1405001DC
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14011F74C (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 7);
}
