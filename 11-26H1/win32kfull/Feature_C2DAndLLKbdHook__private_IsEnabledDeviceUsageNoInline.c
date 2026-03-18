/*
 * XREFs of Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x1402A7C80
 * Callers:
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x1402A7868 (-HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z.c)
 * Callees:
 *     Feature_C2DAndLLKbdHook__private_IsEnabledFallback @ 0x1402A7CBC (Feature_C2DAndLLKbdHook__private_IsEnabledFallback.c)
 */

__int64 Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_C2DAndLLKbdHook__private_featureState & 0x10) != 0 )
    return Feature_C2DAndLLKbdHook__private_featureState & 1;
  else
    return Feature_C2DAndLLKbdHook__private_IsEnabledFallback(
             (unsigned int)Feature_C2DAndLLKbdHook__private_featureState,
             3LL);
}
