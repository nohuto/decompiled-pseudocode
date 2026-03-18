/*
 * XREFs of PopCoalescingNotify @ 0x1406B540C
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400D0054 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PoIssueCoalescingNotification @ 0x14023AB10 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetTimer @ 0x14023ABF8 (PopCoalescingSetTimer.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
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
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
