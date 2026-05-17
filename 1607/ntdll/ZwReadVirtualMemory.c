/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A6C00
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspCaptureImageInformation @ 0x180006648 (PsspCaptureImageInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlpQueryReadVirtualMemory @ 0x18006DE60 (RtlpQueryReadVirtualMemory.c)
 *     RtlpWow64CheckRunningSoftwareCpu @ 0x1800D83FC (RtlpWow64CheckRunningSoftwareCpu.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 * Callees:
 *     <none>
 */

__int64 ZwReadVirtualMemory()
{
  __int64 result; // rax

  result = 63LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
