/*
 * XREFs of CiCommitTimerResolution @ 0x1C0001CD0
 * Callers:
 *     CiSchedulerCompleteTimerResolutionTransition @ 0x1C0001610 (CiSchedulerCompleteTimerResolutionTransition.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSystemAdjustTimerResolution @ 0x1C0001DA0 (CiSystemAdjustTimerResolution.c)
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 */

__int64 __fastcall CiCommitTimerResolution(int a1, int a2)
{
  PDEVICE_OBJECT v2; // rcx
  __int64 result; // rax

  if ( a1 <= 1 )
  {
    if ( a2 > 1 )
    {
      v2 = WPP_GLOBAL_Control;
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids);
      LOBYTE(v2) = 1;
      return CiSystemAdjustTimerResolution(v2);
    }
  }
  else if ( a2 < 1 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids);
    return CiSystemAdjustTimerResolution(0LL);
  }
  return result;
}
