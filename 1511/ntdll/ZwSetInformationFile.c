/*
 * XREFs of ZwSetInformationFile @ 0x1800A55A0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x1800470F0 (EtwpCreateFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     TpBindFileToDirect @ 0x1800779E4 (TpBindFileToDirect.c)
 *     LdrpResSetFilePointer @ 0x1800D5748 (LdrpResSetFilePointer.c)
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
