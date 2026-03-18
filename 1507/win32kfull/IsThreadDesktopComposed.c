/*
 * XREFs of IsThreadDesktopComposed @ 0x1C008BBD0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x1C008BA30 (UserIsCurrentThreadDesktopComposed.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     xxxSetDeskWallpaper @ 0x1C0152250 (xxxSetDeskWallpaper.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022D2C0 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022D7D4 (xxxDitCompositionInputSinkLuidFromPoint.c)
 *     xxxPointerWindowHitTest @ 0x1C022DAC8 (xxxPointerWindowHitTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 416);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(*(_QWORD *)(v1 + 8) + 260LL) & 1;
  return result;
}
