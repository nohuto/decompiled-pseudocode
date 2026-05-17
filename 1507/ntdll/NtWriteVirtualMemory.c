/*
 * XREFs of NtWriteVirtualMemory @ 0x180093CA0
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180083478 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  __asm { syscall; Low latency system call }
  return result;
}
