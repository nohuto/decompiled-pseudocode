/*
 * XREFs of MmFlushAllPages @ 0x1401136F0
 * Callers:
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmFlushAllPages()
{
  return MiFlushAllPages();
}
