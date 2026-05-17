/*
 * XREFs of NtWriteVirtualMemory @ 0x1800A5800
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BDD8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800E74C0 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8 (PsspDuplicateSnapshotRemoteToRemote.c)
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
