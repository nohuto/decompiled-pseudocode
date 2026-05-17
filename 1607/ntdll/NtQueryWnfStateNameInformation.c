/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A8E30
 * Callers:
 *     SignalStartWerSvc @ 0x1800089BC (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800658A0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x1800888F0 (RtlQueryWnfMetaNotification.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 337LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
