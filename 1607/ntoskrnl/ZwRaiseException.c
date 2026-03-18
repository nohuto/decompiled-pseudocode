/*
 * XREFs of ZwRaiseException @ 0x14015C6E0
 * Callers:
 *     RtlUnwindEx @ 0x1400F5660 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140211E04 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord, Context, SearchFrames);
}
