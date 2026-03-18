/*
 * XREFs of WakeDIT @ 0x1C0007B04
 * Callers:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     WaitForRitDisEngagement @ 0x1C00F3EF4 (WaitForRitDisEngagement.c)
 *     xxxAssessPointerContactStateTimerCallback @ 0x1C01CD7C0 (xxxAssessPointerContactStateTimerCallback.c)
 *     vShimNoDtToDitMouseBatch @ 0x1C01DAB40 (vShimNoDtToDitMouseBatch.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DC4A8 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE20C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 *     xxxCompositionInputSinkLuidFromPoint @ 0x1C022D750 (xxxCompositionInputSinkLuidFromPoint.c)
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
