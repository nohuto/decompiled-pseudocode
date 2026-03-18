/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140671718
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140205554 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x140081AE0 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, "PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
