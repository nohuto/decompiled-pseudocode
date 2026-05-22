/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18009DD4D
 * Callers:
 *     __imp_load_MITRegisterManipulationThread @ 0x18009DD41 (__imp_load_MITRegisterManipulationThread.c)
 *     __imp_load_MITSetManipulationInputTarget @ 0x18009DDC6 (__imp_load_MITSetManipulationInputTarget.c)
 *     __imp_load_MITUpdateInputGlobals @ 0x18009DDD2 (__imp_load_MITUpdateInputGlobals.c)
 *     __imp_load_MITSetInputCallbacks @ 0x18009DDDE (__imp_load_MITSetInputCallbacks.c)
 *     __imp_load_MITDisableMouseIntercept @ 0x18009DDEA (__imp_load_MITDisableMouseIntercept.c)
 *     __imp_load_MITEnableMouseIntercept @ 0x18009DDF6 (__imp_load_MITEnableMouseIntercept.c)
 *     __imp_load_MITCoreMsgKOpenConnectionTo @ 0x18009DE02 (__imp_load_MITCoreMsgKOpenConnectionTo.c)
 *     __imp_load_MITBindInputTypeToMonitors @ 0x18009DE0E (__imp_load_MITBindInputTypeToMonitors.c)
 *     __imp_load_MITSetForegroundRoutingInfo @ 0x18009DE1A (__imp_load_MITSetForegroundRoutingInfo.c)
 *     __imp_load_MITSynthesizeMouseInput @ 0x18009E662 (__imp_load_MITSynthesizeMouseInput.c)
 *     __imp_load_MITSynthesizeTouchInput @ 0x18009E66E (__imp_load_MITSynthesizeTouchInput.c)
 *     __imp_load_MITInjectLegacyISMTouchFrame @ 0x18009E67A (__imp_load_MITInjectLegacyISMTouchFrame.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002FD40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_mit_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
