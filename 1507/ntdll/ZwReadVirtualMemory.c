/*
 * XREFs of ZwReadVirtualMemory @ 0x180093CF0
 * Callers:
 *     PsspCaptureImageInformation @ 0x180051140 (PsspCaptureImageInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     RtlpQueryReadVirtualMemory @ 0x180069410 (RtlpQueryReadVirtualMemory.c)
 *     RtlpWow64CheckRunningSoftwareCpu @ 0x1800C721C (RtlpWow64CheckRunningSoftwareCpu.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F65A0 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
