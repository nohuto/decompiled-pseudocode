/*
 * XREFs of PopDisablePowerExecutionRequest @ 0x140520820
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400FB1B4 (PopPowerRequestCleanUp.c)
 *     PopExecutionRequiredPowerRequest @ 0x140520970 (PopExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F32C (PopEnableExecutionRequiredPowerRequests.c)
 *     PopEnableSystemToExecutionRequiredPowerRequests @ 0x14066A9F4 (PopEnableSystemToExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x140468620 (PsReleaseProcessWakeCounter.c)
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
