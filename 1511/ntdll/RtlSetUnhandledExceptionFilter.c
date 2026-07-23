/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180072AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180072AD0 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
