/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A58A0
 * Callers:
 *     PsspCaptureAuxiliaryPages @ 0x180044644 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x180065038 (PsspCaptureImageInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x18006CD40 (RtlpQueryReadVirtualMemory.c)
 *     RtlpWow64CheckRunningSoftwareCpu @ 0x1800D054C (RtlpWow64CheckRunningSoftwareCpu.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F5E80 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8 (PsspDuplicateSnapshotRemoteToRemote.c)
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
