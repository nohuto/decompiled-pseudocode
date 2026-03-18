/*
 * XREFs of ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000B1DC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0111A00 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0114B2C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01E179C (_DelegateCapturePointers.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01F7B5C (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01F7FFC (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01F8AFC (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F98EC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9B3C (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01FA180 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FAC0C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01FBC90 (DelegateCoalescePointerMessage.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01FBF94 (xxxDoDeferredPointerActivate.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0220020 (NtUserSetManipulationInputTarget.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F440 (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?DereferencePointerInputFrame@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F4E0 (-DereferencePointerInputFrame@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C022F540 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C022F834 (-FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F8CC (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022FB68 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F968 (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall UnreferenceFrameInt(struct tagPOINTERINPUTFRAME *a1)
{
  if ( _InterlockedDecrement((volatile signed __int32 *)a1 + 5) || *((_DWORD *)a1 + 7) != *((_DWORD *)a1 + 6) )
    return *((unsigned int *)a1 + 5);
  FreeTPFrame(a1);
  return 0LL;
}
