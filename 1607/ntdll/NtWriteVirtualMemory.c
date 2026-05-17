/*
 * XREFs of NtWriteVirtualMemory @ 0x1800A6B60
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D44 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800F06A0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
