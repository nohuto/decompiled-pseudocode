/*
 * XREFs of MiUnlockPage @ 0x1401F2B80
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

__int64 __fastcall MiUnlockPage(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = a2;
  __writecr8(a2);
  return result;
}
