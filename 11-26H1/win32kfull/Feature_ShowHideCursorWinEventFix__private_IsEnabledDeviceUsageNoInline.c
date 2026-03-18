/*
 * XREFs of Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x1402537B8
 * Callers:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback @ 0x1402971E8 (Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback.c)
 */

__int64 Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShowHideCursorWinEventFix__private_featureState & 0x10) != 0 )
    return Feature_ShowHideCursorWinEventFix__private_featureState & 1;
  else
    return Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback(
             (unsigned int)Feature_ShowHideCursorWinEventFix__private_featureState,
             3LL);
}
