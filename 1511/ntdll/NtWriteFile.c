/*
 * XREFs of NtWriteFile @ 0x1800A51C0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushBuffer @ 0x18005C0F4 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     RtlGetSetBootStatusData @ 0x1800849E0 (RtlGetSetBootStatusData.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E2A00 (RtlCreateBootStatusDataFile.c)
 *     EtwpWriteBufferCompressed @ 0x1800F4C9C (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800F4ECC (EtwpWriteRemainingCompressedData.c)
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
