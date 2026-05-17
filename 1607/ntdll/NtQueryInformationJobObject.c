/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A8AF0
 * Callers:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD80 (RtlGetCurrentServiceSessionId.c)
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 *     RtlIsMultiSessionSku @ 0x180072080 (RtlIsMultiSessionSku.c)
 *     TppJobpRundownJob @ 0x180084428 (TppJobpRundownJob.c)
 *     RtlGetActiveConsoleId @ 0x1800863B0 (RtlGetActiveConsoleId.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1800EEE80 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlpSiloGetNtProductType @ 0x1800EF9C4 (RtlpSiloGetNtProductType.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 311LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
