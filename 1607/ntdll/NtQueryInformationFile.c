/*
 * XREFs of NtQueryInformationFile @ 0x1800A6640
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800DD100 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800DDBF4 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800EF1E0 (RtlpGetFileSize.c)
 *     _ResGetFileSizeEx @ 0x180104A80 (_ResGetFileSizeEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 17;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
