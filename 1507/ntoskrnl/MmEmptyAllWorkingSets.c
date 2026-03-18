/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14021B770
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x1406E50A4 (EtwpSetMark.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmEmptyAllWorkingSets()
{
  NTSTATUS result; // eax

  result = qword_140355188;
  if ( byte_14034FB98 )
  {
    ++*(_DWORD *)(qword_140355188 + 28);
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
  }
  return result;
}
