/*
 * XREFs of GetMessageWindow @ 0x1C0063580
 * Callers:
 *     HasMessageRootWindow @ 0x1C000D06C (HasMessageRootWindow.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00631C8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00937D8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     _GetAncestor @ 0x1C00987DC (_GetAncestor.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     NtUserSetBrokeredForeground @ 0x1C00ED700 (NtUserSetBrokeredForeground.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00ED9E0 (_RegisterWindowArrangementCallout.c)
 *     NtUserGetAncestor @ 0x1C00F8680 (NtUserGetAncestor.c)
 *     xxxMouseActivate @ 0x1C0109300 (xxxMouseActivate.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C01203B0 (NtUserSetParent.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01CAC88 (xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     MagSlicerControl @ 0x1C01F6210 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMessageWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 96);
  return result;
}
