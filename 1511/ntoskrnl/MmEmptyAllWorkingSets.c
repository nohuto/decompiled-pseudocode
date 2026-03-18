/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1401D86C4
 * Callers:
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x140661FD0 (EtwpSetMark.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 */

NTSTATUS MmEmptyAllWorkingSets()
{
  NTSTATUS result; // eax

  result = qword_140301330;
  if ( byte_1402FF6D8 )
  {
    ++*(_DWORD *)(qword_140301330 + 28);
    return MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
  }
  return result;
}
