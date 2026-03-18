/*
 * XREFs of MiUnlockPage @ 0x1401DFF84
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x140625888 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x1406B5B58 (MmAreMdlPagesLocked.c)
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
