/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x1800671E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180067200 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
