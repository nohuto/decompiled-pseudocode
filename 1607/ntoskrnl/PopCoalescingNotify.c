/*
 * XREFs of PopCoalescingNotify @ 0x14066E158
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400093E8 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1400AE73C (PopDiagTraceEventNoPayload.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x14020541C (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14020548C (PopEnsureCoalescingWorkerWillRun.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 PopCoalescingNotify()
{
  PopAcquirePolicyLock();
  if ( (PopCoalescingState & 2) != 0 )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopCoalescingState |= 4u;
    PopEnsureCoalescingWorkerWillRun();
    PopPrintEx(3u, "PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
