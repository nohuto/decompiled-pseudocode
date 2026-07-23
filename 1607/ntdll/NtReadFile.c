/*
 * XREFs of NtReadFile @ 0x1800A64E0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetSetBootStatusData @ 0x180087EC0 (RtlpGetSetBootStatusData.c)
 *     RtlCheckBootStatusIntegrity @ 0x18008CFB0 (RtlCheckBootStatusIntegrity.c)
 *     LdrpResReadFile @ 0x1800DD4C4 (LdrpResReadFile.c)
 *     _ResReadFile @ 0x180104C60 (_ResReadFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReadFile(
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

  result = 6;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
