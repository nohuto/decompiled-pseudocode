/*
 * XREFs of GetMessageWindow @ 0x1C005CD50
 * Callers:
 *     HasMessageRootWindow @ 0x1C0008CF8 (HasMessageRootWindow.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00100E4 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     NtUserGetAncestor @ 0x1C00C6DD0 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C00E9F5C (_GetAncestor.c)
 *     NtUserSetParent @ 0x1C00F8C50 (NtUserSetParent.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C01549C0 (NtUserSetBrokeredForeground.c)
 *     _RegisterWindowArrangementCallout @ 0x1C0154AF0 (_RegisterWindowArrangementCallout.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D13A0 (xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     MagSlicerControl @ 0x1C01FE734 (MagSlicerControl.c)
 *     NtUserSetFallbackForeground @ 0x1C0220000 (NtUserSetFallbackForeground.c)
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
