/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1401D87EC
 * Callers:
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmTrimFilePagesFromWorkingSets()
{
  NTSTATUS result; // eax

  if ( byte_1402FF6D8 )
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 256);
  return result;
}
