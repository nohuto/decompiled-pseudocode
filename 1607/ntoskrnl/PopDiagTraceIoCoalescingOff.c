/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1406717FC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140205380 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, "PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
