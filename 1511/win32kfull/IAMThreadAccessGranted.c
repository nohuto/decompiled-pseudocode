/*
 * XREFs of IAMThreadAccessGranted @ 0x1C00789B0
 * Callers:
 *     NtUserSendEventMessage @ 0x1C000B840 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C000BC60 (NtUserSetActivationFilter.c)
 *     NtUserPostMessage @ 0x1C005F7D0 (NtUserPostMessage.c)
 *     _DeferWindowPosAndBand @ 0x1C0074600 (_DeferWindowPosAndBand.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAM @ 0x1C007896C (ValidateHwndIAM.c)
 *     NtUserRegisterHotKey @ 0x1C008A600 (NtUserRegisterHotKey.c)
 *     _AllowSetForegroundWindow @ 0x1C008B3E0 (_AllowSetForegroundWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     CheckForegroundRight @ 0x1C008D2FC (CheckForegroundRight.c)
 *     _PostTransformableMessageIL @ 0x1C009176C (_PostTransformableMessageIL.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0096A00 (NtUserSetActiveProcessForMonitor.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 *     _GetWindowTrackInfoAsync @ 0x1C01025C0 (_GetWindowTrackInfoAsync.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C0113580 (_EnableShellWindowManagementBehavior.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D2F70 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D3168 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C02184D0 (NtUserClearForeground.c)
 *     NtUserSetFallbackForeground @ 0x1C021FE20 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0220980 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C0220D90 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0221A00 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C00789DC (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 408);
}
