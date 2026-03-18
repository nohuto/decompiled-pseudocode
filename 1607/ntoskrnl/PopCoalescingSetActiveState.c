/*
 * XREFs of PopCoalescingSetActiveState @ 0x140205554
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x14066DFF4 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1402055F0 (PopCoalescingSetTimer.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14056F36C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140671718 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140671740 (PopDiagTraceIoCoalescingOn.c)
 */

__int64 __fastcall PopCoalescingSetActiveState(char a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v3 = PopEnforcedCoalescingSpindownTimeout;
    PopCoalescingState |= 1u;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingSetTimer();
  }
  else
  {
    PopCoalescingState &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios();
  }
  PopUpdateDiskIdleTimeoutSetting();
  if ( !a1 )
    return PopDiagTraceIoCoalescingOff();
  LOBYTE(v1) = PopCoalescingEnforced == 0;
  return PopDiagTraceIoCoalescingOn(v5, v4, v6, v1);
}
