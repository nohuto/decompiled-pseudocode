/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1403B2C68
 * Callers:
 *     PopZeroHiberFile @ 0x140636434 (PopZeroHiberFile.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
