/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1401EA32C
 * Callers:
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmTrimFilePagesFromWorkingSets()
{
  NTSTATUS result; // eax

  if ( byte_1403277D8 )
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 256);
  return result;
}
