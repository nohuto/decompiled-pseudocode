/*
 * XREFs of NtReadFile @ 0x180093960
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetSetBootStatusData @ 0x180078490 (RtlGetSetBootStatusData.c)
 *     LdrpResReadFile @ 0x1800CC814 (LdrpResReadFile.c)
 *     _ResReadFile @ 0x1800FAA5C (_ResReadFile.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  __asm { syscall; Low latency system call }
  return result;
}
