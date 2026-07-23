/*
 * XREFs of MiUnlockPage @ 0x1401F29AC
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

__int64 __fastcall MiUnlockPage(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = a2;
  __writecr8(a2);
  return result;
}
