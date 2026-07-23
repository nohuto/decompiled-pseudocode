/*
 * XREFs of ZwRaiseException @ 0x140153000
 * Callers:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x140024DF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1401F7A50 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
