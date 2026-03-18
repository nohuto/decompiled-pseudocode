/*
 * XREFs of MiUnlockPage @ 0x14017E538
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x140054C90 (MiUpdatePfnPriorityByPte.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x1406A5284 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140735E3C (MmAreMdlPagesLocked.c)
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
