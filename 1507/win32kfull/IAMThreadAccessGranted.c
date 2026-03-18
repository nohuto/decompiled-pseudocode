/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0082890
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0008E30 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0009000 (NtUserSetActivationFilter.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 *     _PostTransformableMessageIL @ 0x1C004E7D4 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C006FDF0 (NtUserPostMessage.c)
 *     _GetWindowTrackInfoAsync @ 0x1C007D610 (_GetWindowTrackInfoAsync.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C007D720 (NtUserSetActiveProcessForMonitor.c)
 *     _AllowSetForegroundWindow @ 0x1C007DD60 (_AllowSetForegroundWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAM @ 0x1C008284C (ValidateHwndIAM.c)
 *     _DeferWindowPosAndBand @ 0x1C00843D4 (_DeferWindowPosAndBand.c)
 *     _RegisterWindowArrangementCallout @ 0x1C0154AF0 (_RegisterWindowArrangementCallout.c)
 *     NtUserSetImmersiveBackgroundWindow @ 0x1C0156790 (NtUserSetImmersiveBackgroundWindow.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C0157040 (_EnableShellWindowManagementBehavior.c)
 *     _SetActiveImmersiveWindow @ 0x1C01D12F0 (_SetActiveImmersiveWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D14F0 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C0218700 (NtUserClearForeground.c)
 *     NtUserSetFallbackForeground @ 0x1C0220000 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0220B40 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C0220F10 (NtUserSetWindowShowState.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C00828BC (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 416);
}
