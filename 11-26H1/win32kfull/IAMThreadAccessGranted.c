/*
 * XREFs of IAMThreadAccessGranted @ 0x1401A2EB0
 * Callers:
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140022150 (NtUserPostMessage.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     NtUserRegisterForCustomDockTargets @ 0x14019D020 (NtUserRegisterForCustomDockTargets.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserSendEventMessage @ 0x1401A0DF0 (NtUserSendEventMessage.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1401A10E0 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserSetActivationFilter @ 0x1401A1510 (NtUserSetActivationFilter.c)
 *     NtUserRegisterHotKey @ 0x1401A23E0 (NtUserRegisterHotKey.c)
 *     NtUserAllowSetForegroundWindow @ 0x1401A2A40 (NtUserAllowSetForegroundWindow.c)
 *     ValidateHwndIAM @ 0x1401A2C8C (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1401A2DC8 (ValidateHwndIAMComponetUIAware.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1401A5D50 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x14023F4A0 (NtUserEnableShellWindowManagementBehavior.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1402A6DF8 (ExemptedFromImmersiveRestrictions.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x1402AE210 (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x1402B1AF0 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x1402B5D30 (NtUserGetWindowTrackInfoAsync.c)
 *     NtUserSetBridgeWindowChild @ 0x1402BBB10 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetCancelRotationDelayHintWindow @ 0x1402BBF00 (NtUserSetCancelRotationDelayHintWindow.c)
 *     NtUserSetShellSpecialWindow @ 0x1402BDD00 (NtUserSetShellSpecialWindow.c)
 *     NtUserSetWindowShowState @ 0x1402BE910 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 *     NtUserSuppressWindowDisplayChange @ 0x1402C01E0 (NtUserSuppressWindowDisplayChange.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402C0AF0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1401A2EE8 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rdx
  bool result; // al

  IAMThread = FindIAMThread(a1);
  result = 0;
  if ( IAMThread )
    return *((_QWORD *)IAMThread + 3) == *((_QWORD *)a1 + 61);
  return result;
}
