/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C012D248
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C012D1C0 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  __int64 v2; // rax

  if ( gnRITdemonTimerId )
  {
    if ( a1 )
      v2 = SetRITTimer(gnRITdemonTimerId, 0x3E8u, (__int64)xxxHungAppDemon, 0);
    else
      v2 = InternalSetTimer(
             0LL,
             gnRITdemonTimerId,
             gdwRITdemonTimerPowerSaveElapse,
             (__int64)xxxHungAppDemon,
             gdwRITdemonTimerPowerSaveCoalescing,
             4);
    gnRITdemonTimerId = v2;
  }
  if ( a1 )
  {
    if ( gtmridAniCursor )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
