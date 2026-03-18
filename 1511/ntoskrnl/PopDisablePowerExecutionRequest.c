/*
 * XREFs of PopDisablePowerExecutionRequest @ 0x140455D84
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14054A65C (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopDisablePowerExecutionRequest(__int64 a1, char a2)
{
  __int64 v3; // rcx

  if ( !*(_DWORD *)(a1 + 44) || !a2 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
    {
      PsReleaseProcessWakeCounter(v3, a1);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  return 0LL;
}
