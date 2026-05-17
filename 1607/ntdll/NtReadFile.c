/*
 * XREFs of NtReadFile @ 0x1800A64E0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetSetBootStatusData @ 0x180087ED0 (RtlpGetSetBootStatusData.c)
 *     RtlCheckBootStatusIntegrity @ 0x18008CFC0 (RtlCheckBootStatusIntegrity.c)
 *     LdrpResReadFile @ 0x1800DD404 (LdrpResReadFile.c)
 *     _ResReadFile @ 0x180104D20 (_ResReadFile.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
