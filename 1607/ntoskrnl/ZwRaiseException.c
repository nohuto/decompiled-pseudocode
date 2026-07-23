/*
 * XREFs of ZwRaiseException @ 0x14015CC50
 * Callers:
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140211C30 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
