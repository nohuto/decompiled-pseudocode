/*
 * XREFs of ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007FB4 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     _DelegateCapturePointers @ 0x1C01E118C (_DelegateCapturePointers.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01F76AC (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01F7B4C (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01F864C (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F943C (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9698 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FA76C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01FB800 (DelegateCoalescePointerMessage.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01FBB00 (xxxDoDeferredPointerActivate.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0220200 (NtUserSetManipulationInputTarget.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022E6D4 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F4EC (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F1B4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall FindAndReferenceFrameById(unsigned int a1)
{
  struct tagPOINTERINPUTFRAME *result; // rax

  result = FindFrameById(a1);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)result + 5);
  return result;
}
