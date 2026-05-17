/*
 * XREFs of ZwSetInformationFile @ 0x180093B70
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x1800787B8 (EtwpCreateFile.c)
 *     TpBindFileToDirect @ 0x18007D710 (TpBindFileToDirect.c)
 *     LdrpResSetFilePointer @ 0x1800CCF08 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  __asm { syscall; Low latency system call }
  return result;
}
