/*
 * XREFs of ZwCreateFile @ 0x1800A6EC0
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     EtwpCreateFile @ 0x180054F38 (EtwpCreateFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180086C74 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpGetVolumeHandle @ 0x18008B8B0 (RtlpGetVolumeHandle.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C140 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E5210 (RtlCreateBootStatusDataFile.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
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
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
