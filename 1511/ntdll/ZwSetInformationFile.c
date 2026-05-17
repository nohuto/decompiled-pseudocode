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
