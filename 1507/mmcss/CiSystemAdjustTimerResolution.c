/*
 * XREFs of CiSystemAdjustTimerResolution @ 0x1C0001DA0
 * Callers:
 *     CiCommitTimerResolution @ 0x1C0001CD0 (CiCommitTimerResolution.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0003FAC (WPP_SF_dd.c)
 *     WPP_SF_d @ 0x1C0004164 (WPP_SF_d.c)
 */

ULONG __fastcall CiSystemAdjustTimerResolution(BOOLEAN a1)
{
  ULONG result; // eax

  result = ExSetTimerResolution(WPP_MAIN_CB.ActiveThreadCount, a1);
  if ( a1 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      return WPP_SF_dd(
               WPP_GLOBAL_Control->AttachedDevice,
               10LL,
               &WPP_8446a7c63dc532b86ac6f3a978ec1331_Traceguids,
               WPP_MAIN_CB.ActiveThreadCount,
               result);
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    return WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_8446a7c63dc532b86ac6f3a978ec1331_Traceguids, result);
  }
  return result;
}
