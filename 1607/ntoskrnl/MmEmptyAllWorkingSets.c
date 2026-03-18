/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1401EA3D8
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x1406A2924 (EtwpSetMark.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14013135C (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmEmptyAllWorkingSets()
{
  NTSTATUS result; // eax

  result = qword_140324DA8;
  if ( byte_140327798 )
  {
    ++*(_DWORD *)(qword_140324DA8 + 28);
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
  }
  return result;
}
