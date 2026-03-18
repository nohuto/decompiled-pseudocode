/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C00FF690
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     KeepMachineUp @ 0x1C004A654 (KeepMachineUp.c)
 *     InitTimerCoalescing @ 0x1C01566B0 (InitTimerCoalescing.c)
 *     StartScreenSaver @ 0x1C0202440 (StartScreenSaver.c)
 * Callees:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00FF710 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 */

void __fastcall SetTimerCoalescingTolerance(int a1)
{
  int v1; // ecx
  int v2; // ecx

  gTimerCoalCurrentState = a1;
  gCurrentTimerCoalescingTolerance = *((_DWORD *)&gTimerCoalescingSpec + 4 * (gSessionId != 0) + a1);
  if ( gSessionId )
  {
    if ( !a1 )
    {
      gdwRITdemonLockState = 0;
LABEL_4:
      v1 = 1;
LABEL_5:
      AdjustRITDelayableTimers(v1);
      return;
    }
    v2 = a1 - 2;
    if ( !v2 )
    {
      gdwRITdemonLockState |= 1u;
      if ( (gdwRITdemonLockState & 2) == 0 && giScreenSaveTimeOutMs > 0 && (gbLockConsoleActive || (*gpsi & 0x200) != 0) )
        goto LABEL_4;
LABEL_10:
      v1 = 0;
      goto LABEL_5;
    }
    if ( v2 == 1 )
    {
      gdwRITdemonLockState |= 2u;
      if ( (gdwRITdemonLockState & 1) != 0 )
        goto LABEL_10;
    }
  }
}
