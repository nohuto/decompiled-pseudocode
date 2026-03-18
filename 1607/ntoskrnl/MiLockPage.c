/*
 * XREFs of MiLockPage @ 0x1401593D8
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x14002E6B0 (MiUpdatePfnPriorityByPte.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiDecrementHugeContext @ 0x140140E7C (MiDecrementHugeContext.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A01C (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x14065B124 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140701990 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
