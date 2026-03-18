/*
 * XREFs of MmFlushAllPages @ 0x140118BBC
 * Callers:
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmFlushAllPages()
{
  return MiFlushAllPages();
}
