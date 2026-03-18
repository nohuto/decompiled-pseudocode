/*
 * XREFs of WaitForRitDisEngagement @ 0x1C01195D8
 * Callers:
 *     UserActivateDwmInputProcessing @ 0x1C01194D0 (UserActivateDwmInputProcessing.c)
 * Callees:
 *     WakeDIT @ 0x1C00E1684 (WakeDIT.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 *     WakeRIT @ 0x1C011A044 (WakeRIT.c)
 *     DitTakeOver @ 0x1C011A098 (DitTakeOver.c)
 */

__int64 __fastcall WaitForRitDisEngagement(int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    return 1LL;
  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(64LL);
  v2 = 0;
  WaitForRitToCompleteLastCommand(gbDITUseIocp, 0, &v2);
  if ( gbDIT )
  {
    if ( (unsigned int)DitTakeOver(0LL) )
    {
      WakeRIT(512LL);
      WaitForRitToCompleteLastCommand(gbDITUseIocp, 1, &v2);
      if ( gbEnableDwmMouseProcessing )
      {
        _InterlockedAnd(&gdwDITWakeReason, 0xFFFFFFBF);
        _InterlockedExchange(&glDitMouseHandling, 1);
      }
      if ( v2 )
      {
        EtwTraceWakeDIT(v2);
        WakeDIT(v2);
      }
      return 1LL;
    }
    gbDIT = 0;
    WakeRIT(32LL);
    WaitForRitToCompleteLastCommand(gbDITUseIocp, 0, &v2);
  }
  return 0LL;
}
