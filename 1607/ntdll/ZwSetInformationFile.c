/*
 * XREFs of ZwSetInformationFile @ 0x1800A6900
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180054F38 (EtwpCreateFile.c)
 *     TpBindFileToDirect @ 0x18007A054 (TpBindFileToDirect.c)
 *     LdrpResSetFilePointer @ 0x1800DDBB0 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 39;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
