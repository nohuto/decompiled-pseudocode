/*
 * XREFs of PopW32ThreadLock @ 0x1C005BC70
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     NtUserSendInput @ 0x1C0047D60 (NtUserSendInput.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxSetProcessWindowStation @ 0x1C00DFB80 (xxxSetProcessWindowStation.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00FF460 (xxxSwitchDesktopWithFade.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01214B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0132C4C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserCreateWindowStation @ 0x1C0138AC0 (NtUserCreateWindowStation.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     xxxImmLoadLayout @ 0x1C013C690 (xxxImmLoadLayout.c)
 *     ClassUnlock @ 0x1C0154834 (ClassUnlock.c)
 *     xxxConnectService @ 0x1C015A9D0 (xxxConnectService.c)
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C6E14 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CD7D8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01CFE54 (xxxProcessPTPDeviceInput.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D6784 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DC374 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01EB3AC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01FBB00 (xxxDoDeferredPointerActivate.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0214030 (xxxClientCopyDDEIn1.c)
 *     NtUserInjectTouchInput @ 0x1C021D080 (NtUserInjectTouchInput.c)
 *     NtUserfnDDEINIT @ 0x1C0221F40 (NtUserfnDDEINIT.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022E6D4 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023A9E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     AddEllipsisAndDrawLine @ 0x1C024AC00 (AddEllipsisAndDrawLine.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
