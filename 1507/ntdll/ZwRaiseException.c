/*
 * XREFs of ZwRaiseException @ 0x180094DC0
 * Callers:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180014200 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x180095830 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800BD5D0 (LdrpLogFatalUserCallbackException.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800DDF20 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 332;
  __asm { syscall; Low latency system call }
  return result;
}
