/*
 * XREFs of CiAcquireTaskIndexListLock @ 0x1C000B4E0
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0002570 (CiTaskIndexDereference.c)
 * Callees:
 *     <none>
 */

__int64 CiAcquireTaskIndexListLock()
{
  return CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
}
