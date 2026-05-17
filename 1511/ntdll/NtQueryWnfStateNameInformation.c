/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A7A50
 * Callers:
 *     SignalStartWerSvc @ 0x180003070 (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x18004EFC0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180084750 (RtlQueryWnfMetaNotification.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 333LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
