/*
 * XREFs of NtWriteFile @ 0x1800A6520
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x180002558 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800031C0 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFlushBuffer @ 0x180052EB4 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetSetBootStatusData @ 0x180087EC0 (RtlpGetSetBootStatusData.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E5210 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E5370 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
