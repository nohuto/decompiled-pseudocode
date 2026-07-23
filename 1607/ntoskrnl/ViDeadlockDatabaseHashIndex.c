/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x140715110
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1402237EC (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140223944 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
