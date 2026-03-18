/*
 * XREFs of WakeDIT @ 0x1C00E1684
 * Callers:
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     WaitForRitDisEngagement @ 0x1C01195D8 (WaitForRitDisEngagement.c)
 *     vShimNoDtToDitMouseBatch @ 0x1C01D2B00 (vShimNoDtToDitMouseBatch.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01D5F4C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 *     xxxCompositionInputSinkLuidFromPoint @ 0x1C02237C0 (xxxCompositionInputSinkLuidFromPoint.c)
 *     ?_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02293E0 (-_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C0229DE0 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeDIT(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( gbDIT )
  {
    _m_prefetchw(&gdwDITWakeReason);
    if ( (_InterlockedOr(&gdwDITWakeReason, a1) & a1) == 0 )
      ZwSetEvent(ghDITEvent, 0LL);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwDitIgnoredWakeReasons, a1);
  }
  return result;
}
