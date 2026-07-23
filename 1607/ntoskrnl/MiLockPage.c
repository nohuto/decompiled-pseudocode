/*
 * XREFs of MiLockPage @ 0x140159948
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x14002E230 (MiUpdatePfnPriorityByPte.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiDecrementHugeContext @ 0x1401413EC (MiDecrementHugeContext.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x14065B208 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x1407019C0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
