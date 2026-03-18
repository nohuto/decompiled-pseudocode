/*
 * XREFs of MmFlushAllPages @ 0x14014D698
 * Callers:
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmFlushAllPages()
{
  return MiFlushAllPages();
}
