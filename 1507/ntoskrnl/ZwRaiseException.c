/*
 * XREFs of ZwRaiseException @ 0x140181970
 * Callers:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x140246A34 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
