/*
 * XREFs of TtmpDeactivateSessionWorker @ 0x140679004
 * Callers:
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpSessionPowerControl @ 0x1406790A4 (TtmpSessionPowerControl.c)
 *     TtmpSetCsSessionGoal @ 0x140679334 (TtmpSetCsSessionGoal.c)
 *     TtmiLogSessionDeactivate @ 0x14067B908 (TtmiLogSessionDeactivate.c)
 */

__int64 __fastcall TtmpDeactivateSessionWorker(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 0x180) == 0 )
  {
    if ( (v2 & 8) != 0 )
    {
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFF7;
      TtmiLogSessionDeactivate();
    }
    v5 = *(_DWORD *)(a1 + 4);
    if ( (v5 & 0x400) != 0 )
    {
      if ( (v5 & 0x200) == 0 )
      {
        LOBYTE(a2) = 1;
        TtmpSetCsSessionGoal(a1, a2, *(unsigned int *)(a1 + 16));
        *(_DWORD *)(a1 + 4) |= 0x200u;
      }
      *(_DWORD *)(a1 + 4) &= ~0x20u;
      return 0LL;
    }
    if ( (v5 & 0x40) == 0 )
    {
      v6 = *(unsigned int *)(a1 + 16);
      *(_DWORD *)(a1 + 4) = v5 | 0x40;
      TtmpSessionPowerControl(a1, 0LL, v6);
    }
  }
  return 259LL;
}
