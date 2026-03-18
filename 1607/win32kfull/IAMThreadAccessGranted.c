/*
 * XREFs of IAMThreadAccessGranted @ 0x1C00A6F0C
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C000CF30 (NtUserSetActivationFilter.c)
 *     NtUserSendEventMessage @ 0x1C000DDC0 (NtUserSendEventMessage.c)
 *     NtUserPostMessage @ 0x1C0080290 (NtUserPostMessage.c)
 *     NtUserRegisterHotKey @ 0x1C0097D10 (NtUserRegisterHotKey.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0098A20 (NtUserSetActiveProcessForMonitor.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0098B90 (_GetWindowTrackInfoAsync.c)
 *     _AllowSetForegroundWindow @ 0x1C0099100 (_AllowSetForegroundWindow.c)
 *     _PostTransformableMessageIL @ 0x1C009CD54 (_PostTransformableMessageIL.c)
 *     _DeferWindowPosAndBand @ 0x1C00A5BBC (_DeferWindowPosAndBand.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAM @ 0x1C00A6EC8 (ValidateHwndIAM.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00AB1B8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00ED9E0 (_RegisterWindowArrangementCallout.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C0134AB0 (_EnableShellWindowManagementBehavior.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01CABE0 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01CAF0C (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C02110A0 (NtUserClearForeground.c)
 *     NtUserSetFallbackForeground @ 0x1C0219A90 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C021A8E0 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C021ACF0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C021BB40 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C00A6F38 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 408);
}
