/*
 * XREFs of PopW32ThreadLock @ 0x1C00829E0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     NtUserSendInput @ 0x1C00828A0 (NtUserSendInput.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     NtUserCreateWindowStation @ 0x1C00D5C80 (NtUserCreateWindowStation.c)
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 *     xxxSetProcessWindowStation @ 0x1C00E3150 (xxxSetProcessWindowStation.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00E3890 (xxxSwitchDesktopWithFade.c)
 *     xxxImmLoadLayout @ 0x1C010DCE0 (xxxImmLoadLayout.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0114B2C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014B1C0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxConnectService @ 0x1C0150634 (xxxConnectService.c)
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C89D4 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D81F4 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DCA10 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ClassUnlock @ 0x1C01E86C4 (ClassUnlock.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01EB8CC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01FA180 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01FBF94 (xxxDoDeferredPointerActivate.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0213ED8 (xxxClientCopyDDEIn1.c)
 *     NtUserInjectTouchInput @ 0x1C021CE90 (NtUserInjectTouchInput.c)
 *     NtUserfnDDEINIT @ 0x1C0222110 (NtUserfnDDEINIT.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023ABBC (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     AddEllipsisAndDrawLine @ 0x1C024ABC0 (AddEllipsisAndDrawLine.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
