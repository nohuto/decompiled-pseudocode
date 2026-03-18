/*
 * XREFs of MiReturnFsDirectPages @ 0x1406AA504
 * Callers:
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnFsDirectPages(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return MiRemovePhysicalMemory(a1, a2, 2LL, a4);
}
