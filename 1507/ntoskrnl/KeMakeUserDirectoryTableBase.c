/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14020ACD0
 * Callers:
 *     MmStealTopLevelPage @ 0x14010EF54 (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
