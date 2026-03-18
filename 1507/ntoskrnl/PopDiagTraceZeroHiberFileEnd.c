/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140403F08
 * Callers:
 *     PopZeroHiberFile @ 0x1406B5D1C (PopZeroHiberFile.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
