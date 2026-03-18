/*
 * XREFs of WakeDIT @ 0x1C0009CEC
 * Callers:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     WaitForRitDisEngagement @ 0x1C009FBB8 (WaitForRitDisEngagement.c)
 *     xxxAssessPointerContactStateTimerCallback @ 0x1C01CF3B0 (xxxAssessPointerContactStateTimerCallback.c)
 *     vShimNoDtToDitMouseBatch @ 0x1C01DB140 (vShimNoDtToDitMouseBatch.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DCB44 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE810 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 *     xxxCompositionInputSinkLuidFromPoint @ 0x1C022DA54 (xxxCompositionInputSinkLuidFromPoint.c)
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
