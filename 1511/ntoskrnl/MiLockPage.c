/*
 * XREFs of MiLockPage @ 0x1401DFF7C
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

// attributes: thunk
__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
