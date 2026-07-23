/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A6C00
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspCaptureImageInformation @ 0x180006638 (PsspCaptureImageInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     RtlpQueryReadVirtualMemory @ 0x18006DE50 (RtlpQueryReadVirtualMemory.c)
 *     RtlpWow64CheckRunningSoftwareCpu @ 0x1800D84BC (RtlpWow64CheckRunningSoftwareCpu.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
