/*
 * XREFs of ZwRaiseException @ 0x1800A8E70
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180006B1C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D1860 (LdrpLogFatalUserCallbackException.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800EC830 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 339;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
