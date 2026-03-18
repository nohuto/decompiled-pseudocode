/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1401DBB9C
 * Callers:
 *     MmStealTopLevelPage @ 0x1401E36D8 (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x1401EF1E4 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x14065B8D0 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
