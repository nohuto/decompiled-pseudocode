/*
 * XREFs of ZwRaiseException @ 0x1800A8E70
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180006B2C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800EC770 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 339LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
