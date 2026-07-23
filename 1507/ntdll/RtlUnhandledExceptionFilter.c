/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800E3F70
 * Callers:
 *     __raise_securityfailure @ 0x1800840B4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x1800840E0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
