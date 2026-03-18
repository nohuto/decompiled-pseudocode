/*
 * XREFs of PopEnablePowerExecutionRequest @ 0x1404CFD58
 * Callers:
 *     PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14054A65C (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x1404CFD98 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PopEnablePowerExecutionRequest(__int64 a1)
{
  if ( !*(_QWORD *)(a1 + 88) && PopExecutionRequiredTimeout && !PopLastCsEnterTime )
    *(_QWORD *)(a1 + 88) = PsChargeProcessWakeCounter(*(_QWORD *)(a1 + 96), 0LL, 1LL, a1);
  return 0LL;
}
