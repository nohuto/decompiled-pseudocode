/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1401CBC30
 * Callers:
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
