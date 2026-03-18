/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C0040280
 * Callers:
 *     NtUserEnableMouseInPointer @ 0x1C003FC70 (NtUserEnableMouseInPointer.c)
 *     W32kCddDisableGdiHwAcceleration @ 0x1C0040240 (W32kCddDisableGdiHwAcceleration.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0115D6C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D9CE8 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C020239C (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C023A984 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(_QWORD *)(ThreadWin32Thread + 576);
}
