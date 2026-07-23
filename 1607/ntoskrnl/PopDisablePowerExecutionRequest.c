/*
 * XREFs of PopDisablePowerExecutionRequest @ 0x140503888
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 *     PopExecutionRequiredPowerRequest @ 0x1405039D8 (PopExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F7D8 (PopEnableExecutionRequiredPowerRequests.c)
 *     PopEnableSystemToExecutionRequiredPowerRequests @ 0x14066AAD8 (PopEnableSystemToExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopDisablePowerExecutionRequest(__int64 a1, char a2, char a3)
{
  __int64 v4; // rcx

  if ( (!*(_DWORD *)(a1 + 44) || !a2) && (!*(_DWORD *)(a1 + 108) || !a3) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
    {
      PsReleaseProcessWakeCounter(v4, a1);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  return 0LL;
}
