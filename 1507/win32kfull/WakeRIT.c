/*
 * XREFs of WakeRIT @ 0x1C00F42E4
 * Callers:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C00F3B10 (UserDeactivateDwmInputProcessing.c)
 *     WaitForRitDisEngagement @ 0x1C00F3EF4 (WaitForRitDisEngagement.c)
 *     _EnableSessionForMMCSS @ 0x1C00F4280 (_EnableSessionForMMCSS.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C012FB50 (xxxUserPowerStateCalloutWorker.c)
 *     WakeRITForShutdown @ 0x1C0132A80 (WakeRITForShutdown.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 *     WakeRITForConfigSwitch @ 0x1C01DA340 (WakeRITForConfigSwitch.c)
 *     CleanupInjectedTouchProcess @ 0x1C01DC600 (CleanupInjectedTouchProcess.c)
 *     ?SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z @ 0x1C01DE26C (-SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z.c)
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
