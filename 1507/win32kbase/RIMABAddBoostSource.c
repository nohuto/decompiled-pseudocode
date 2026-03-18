/*
 * XREFs of RIMABAddBoostSource @ 0x1C00D2084
 * Callers:
 *     RIMABAssessContactForArbitrationSuspension @ 0x1C00D2328 (RIMABAssessContactForArbitrationSuspension.c)
 * Callees:
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 *     RIMICUpdateDeviceRank @ 0x1C00D2ED8 (RIMICUpdateDeviceRank.c)
 */

void __fastcall RIMABAddBoostSource(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // edx

  if ( gFastSwitchingEnabled )
  {
    v6 = *(_QWORD *)(a2 + 680);
    v7 = *(_DWORD *)(2400LL * a3 + v6 + 2392);
    if ( (v7 & 0x2000) == 0 )
    {
      *(_DWORD *)(2400LL * a3 + v6 + 2392) = v7 | 0x2000;
      ++*(_DWORD *)(a2 + 1548);
      if ( *(int *)(a2 + 1476) < 4 )
      {
        RIMICUpdateDeviceRank(a2, 1LL);
        RIMABSeekAndAbortLowerRankedActivity(a1, a2, v8);
        RIMABArbitratePrimaryStatus(a1, a2, a3);
      }
    }
  }
}
