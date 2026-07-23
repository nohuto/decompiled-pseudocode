/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1800A59E0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18008389C (RtlpQueryDiskSpacePolicyByHandle.c)
 *     LdrpCheckAppDirType @ 0x1800CA8C4 (LdrpCheckAppDirType.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FSINFOCLASS FsInformationClass)
{
  NTSTATUS result; // eax

  result = 73;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
