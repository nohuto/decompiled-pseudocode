/*
 * XREFs of ZwCreateFile @ 0x180093E50
 * Callers:
 *     RtlpQueryDiskSpacePolicy @ 0x180003720 (RtlpQueryDiskSpacePolicy.c)
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x1800787B8 (EtwpCreateFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18007F690 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x180081340 (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800DC840 (RtlCreateBootStatusDataFile.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  NTSTATUS result; // eax

  result = 85;
  __asm { syscall; Low latency system call }
  return result;
}
