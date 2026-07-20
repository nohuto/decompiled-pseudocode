/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x14000C320
 * Callers:
 *     __report_gsfailure @ 0x14000BFF0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall RtlUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_RtlUnhandledExceptionFilter(ExceptionInfo);
}
