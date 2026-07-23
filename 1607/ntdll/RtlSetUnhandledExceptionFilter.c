/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180074C10
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180074C30 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
