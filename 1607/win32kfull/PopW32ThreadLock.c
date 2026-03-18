/*
 * XREFs of PopW32ThreadLock @ 0x1C006FA40
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     NtUserSendInput @ 0x1C009EAE0 (NtUserSendInput.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     NtUserCreateWindowStation @ 0x1C00E9E50 (NtUserCreateWindowStation.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     xxxConnectService @ 0x1C00EB590 (xxxConnectService.c)
 *     xxxSetProcessWindowStation @ 0x1C0105760 (xxxSetProcessWindowStation.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0106CB4 (xxxSwitchDesktopWithFade.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxImmLoadLayout @ 0x1C012EE1C (xxxImmLoadLayout.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01D43F8 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ClassUnlock @ 0x1C01DEF3C (ClassUnlock.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1384 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3314 (xxxDoDeferredPointerActivate.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxClientCopyDDEIn1 @ 0x1C020CAD0 (xxxClientCopyDDEIn1.c)
 *     NtUserInjectTouchInput @ 0x1C0216970 (NtUserInjectTouchInput.c)
 *     NtUserfnDDEINIT @ 0x1C021C2A0 (NtUserfnDDEINIT.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     AddEllipsisAndDrawLine @ 0x1C0246ED0 (AddEllipsisAndDrawLine.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
