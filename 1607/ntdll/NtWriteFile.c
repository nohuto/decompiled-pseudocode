/*
 * XREFs of NtWriteFile @ 0x1800A6520
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x180002558 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800031C0 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFlushBuffer @ 0x180052EC4 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetSetBootStatusData @ 0x180087ED0 (RtlpGetSetBootStatusData.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E5150 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E52B0 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
