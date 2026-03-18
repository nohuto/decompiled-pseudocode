/*
 * XREFs of PopEnablePowerExecutionRequest @ 0x14051E148
 * Callers:
 *     PopExecutionRequiredPowerRequest @ 0x140520970 (PopExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F32C (PopEnableExecutionRequiredPowerRequests.c)
 *     PopEnableSystemToExecutionRequiredPowerRequests @ 0x14066A9F4 (PopEnableSystemToExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x14051E1B0 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PopEnablePowerExecutionRequest(__int64 a1, char a2)
{
  bool v2; // al

  v2 = 0;
  if ( a2 )
    v2 = *(_DWORD *)(a1 + 44) != 0;
  if ( !PopPowerRequestSyncedPowerSource && *(_DWORD *)(a1 + 108) )
    v2 = 1;
  if ( v2 && !*(_QWORD *)(a1 + 88) && PopExecutionRequiredTimeout && !PopLastCsEnterTime )
    *(_QWORD *)(a1 + 88) = PsChargeProcessWakeCounter(*(_QWORD *)(a1 + 96), 0LL, 1LL, a1);
  return 0LL;
}
