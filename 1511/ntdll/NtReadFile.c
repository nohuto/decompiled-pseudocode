/*
 * XREFs of NtReadFile @ 0x1800A5180
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     RtlGetSetBootStatusData @ 0x1800849E0 (RtlGetSetBootStatusData.c)
 *     LdrpResReadFile @ 0x1800D5054 (LdrpResReadFile.c)
 *     _ResReadFile @ 0x1800FA374 (_ResReadFile.c)
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
