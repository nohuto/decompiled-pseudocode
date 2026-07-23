/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1403DF954
 * Callers:
 *     PopZeroHiberFile @ 0x14066E8C0 (PopZeroHiberFile.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
