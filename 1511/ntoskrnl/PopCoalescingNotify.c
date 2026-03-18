/*
 * XREFs of PopCoalescingNotify @ 0x140635C3C
 * Callers:
 *     PopPolicyWorkerThread @ 0x14009934C (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PoIssueCoalescingNotification @ 0x1401EC7F4 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetTimer @ 0x1401EC8DC (PopCoalescingSetTimer.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 */

__int64 PopCoalescingNotify()
{
  PopAcquirePolicyLock();
  if ( PopCoalescingState )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopPrintEx(3u, "PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PoIssueCoalescingNotification(PopCoalescingRegistration, 3);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
