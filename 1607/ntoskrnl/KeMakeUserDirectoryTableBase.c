/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1401DB9C8
 * Callers:
 *     MmStealTopLevelPage @ 0x1401E3504 (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
