/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14021B898
 * Callers:
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmTrimFilePagesFromWorkingSets()
{
  NTSTATUS result; // eax

  if ( byte_14034FB98 )
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 256);
  return result;
}
