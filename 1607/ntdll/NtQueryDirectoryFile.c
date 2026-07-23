/*
 * XREFs of NtQueryDirectoryFile @ 0x1800A6AC0
 * Callers:
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104664 (_ResFindNextFileW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  NTSTATUS result; // eax

  result = 53;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
