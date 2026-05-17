/*
 * XREFs of ZwSetInformationFile @ 0x1800A6900
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180054F48 (EtwpCreateFile.c)
 *     TpBindFileToDirect @ 0x18007A064 (TpBindFileToDirect.c)
 *     LdrpResSetFilePointer @ 0x1800DDAF0 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
