/*
 * XREFs of PopCoalescingActivate @ 0x140635B48
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopCoalescingEnforce @ 0x1404F715C (PopCoalescingEnforce.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PoIssueCoalescingNotification @ 0x1401EC7F4 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetTimer @ 0x1401EC8DC (PopCoalescingSetTimer.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140530318 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140639770 (PopDiagTraceIoCoalescingOn.c)
 */

__int64 __fastcall PopCoalescingActivate(char a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax

  v1 = 0;
  if ( a1 )
  {
    if ( PopCoalescingState )
      return result;
    v3 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v3 = PopEnforcedCoalescingSpindownTimeout;
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingState = 1;
    PopCoalescingSetTimer();
  }
  else
  {
    if ( !PopCoalescingState )
      return result;
    PopCoalescingState = 0;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios();
  }
  PopUpdateDiskIdleTimeoutSetting();
  if ( a1 )
  {
    LOBYTE(v1) = PopCoalescingEnforced == 0;
    PopDiagTraceIoCoalescingOn(v5, v4, v6, v1);
  }
  else
  {
    PopPrintEx(3u, "PopCoalescing: OFF notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
  }
  return PoIssueCoalescingNotification(PopCoalescingRegistration, 2 - (unsigned int)(a1 != 0));
}
