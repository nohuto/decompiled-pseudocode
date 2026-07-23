/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1401EA204
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x1406A2A5C (EtwpSetMark.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmEmptyAllWorkingSets()
{
  NTSTATUS result; // eax

  result = qword_140324DE8;
  if ( byte_1403277D8 )
  {
    ++*(_DWORD *)(qword_140324DE8 + 28);
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
  }
  return result;
}
