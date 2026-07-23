/*
 * XREFs of NtWriteFile @ 0x180093980
 * Callers:
 *     EtwpFlushBuffer @ 0x180009AB4 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetSetBootStatusData @ 0x180078490 (RtlGetSetBootStatusData.c)
 *     RtlCreateBootStatusDataFile @ 0x1800DC840 (RtlCreateBootStatusDataFile.c)
 *     EtwpWriteBufferCompressed @ 0x1800F52A0 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800F54D0 (EtwpWriteRemainingCompressedData.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
