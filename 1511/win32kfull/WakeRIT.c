/*
 * XREFs of WakeRIT @ 0x1C00A0644
 * Callers:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C009F6C0 (UserDeactivateDwmInputProcessing.c)
 *     WakeRITForShutdown @ 0x1C009FA60 (WakeRITForShutdown.c)
 *     WaitForRitDisEngagement @ 0x1C009FBB8 (WaitForRitDisEngagement.c)
 *     _EnableSessionForMMCSS @ 0x1C00A05E0 (_EnableSessionForMMCSS.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     WakeRITForConfigSwitch @ 0x1C014F8E0 (WakeRITForConfigSwitch.c)
 *     CleanupInjectedTouchProcess @ 0x1C01DCCA0 (CleanupInjectedTouchProcess.c)
 *     ?SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z @ 0x1C01DE874 (-SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z.c)
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
