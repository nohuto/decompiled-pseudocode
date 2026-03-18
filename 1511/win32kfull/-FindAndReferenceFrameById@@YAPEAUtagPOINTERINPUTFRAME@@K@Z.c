/*
 * XREFs of ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000B1DC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
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
 *     NtUserSetManipulationInputTarget @ 0x1C0220020 (NtUserSetManipulationInputTarget.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F8CC (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F604 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall FindAndReferenceFrameById(unsigned int a1)
{
  struct tagPOINTERINPUTFRAME *result; // rax

  result = FindFrameById(a1);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)result + 5);
  return result;
}
