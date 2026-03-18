/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x1406CD328
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14020BF7C (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14020C0D4 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
