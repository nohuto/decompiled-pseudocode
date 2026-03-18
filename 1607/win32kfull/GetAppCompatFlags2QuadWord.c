/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C010FCE0
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     NtUserEnableMouseInPointer @ 0x1C010FBF0 (NtUserEnableMouseInPointer.c)
 *     W32kCddDisableGdiHwAcceleration @ 0x1C010FCA0 (W32kCddDisableGdiHwAcceleration.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C014717C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D20AC (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01F9A54 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C0232604 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return *(_QWORD *)(ThreadWin32Thread + 568);
}
