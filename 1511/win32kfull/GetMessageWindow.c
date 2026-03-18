/*
 * XREFs of GetMessageWindow @ 0x1C007AA6C
 * Callers:
 *     HasMessageRootWindow @ 0x1C000B940 (HasMessageRootWindow.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007A628 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     _GetAncestor @ 0x1C00D0504 (_GetAncestor.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D58E0 (NtUserSetBrokeredForeground.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 *     NtUserGetAncestor @ 0x1C00D9D10 (NtUserGetAncestor.c)
 *     xxxMouseActivate @ 0x1C00E95C4 (xxxMouseActivate.c)
 *     NtUserSetParent @ 0x1C00FF920 (NtUserSetParent.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D3018 (xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     MagSlicerControl @ 0x1C01FEBB4 (MagSlicerControl.c)
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
