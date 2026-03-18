/*
 * XREFs of WakeRIT @ 0x1C011A044
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C01190F0 (UserDeactivateDwmInputProcessing.c)
 *     WakeRITForShutdown @ 0x1C0119480 (WakeRITForShutdown.c)
 *     WaitForRitDisEngagement @ 0x1C01195D8 (WaitForRitDisEngagement.c)
 *     _EnableSessionForMMCSS @ 0x1C0119FE0 (_EnableSessionForMMCSS.c)
 *     WakeRITForConfigSwitch @ 0x1C0155260 (WakeRITForConfigSwitch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( gpkeRITEvent )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent(gpkeRITEvent, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
