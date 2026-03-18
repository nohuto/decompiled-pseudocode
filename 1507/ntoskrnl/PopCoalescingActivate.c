/*
 * XREFs of PopCoalescingActivate @ 0x1406B5318
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopCoalescingEnforce @ 0x140565944 (PopCoalescingEnforce.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PoIssueCoalescingNotification @ 0x14023AB10 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetTimer @ 0x14023ABF8 (PopCoalescingSetTimer.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A6C70 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1406B9864 (PopDiagTraceIoCoalescingOn.c)
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
