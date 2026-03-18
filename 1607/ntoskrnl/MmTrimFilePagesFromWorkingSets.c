/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1401EA500
 * Callers:
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14013135C (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmTrimFilePagesFromWorkingSets()
{
  NTSTATUS result; // eax

  if ( byte_140327798 )
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 256);
  return result;
}
