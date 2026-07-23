/*
 * XREFs of ZwRaiseException @ 0x1800A7A90
 * Callers:
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800A8BC0 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CA2F0 (LdrpLogFatalUserCallbackException.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800E36D0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 335;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
