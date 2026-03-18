/*
 * XREFs of IsThreadDesktopComposed @ 0x1C0058D20
 * Callers:
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x1C0058B70 (UserIsCurrentThreadDesktopComposed.c)
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxSetDeskWallpaper @ 0x1C012E514 (xxxSetDeskWallpaper.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022331C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C0223944 (xxxDitCompositionInputSinkLuidFromPoint.c)
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 408);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(*(_QWORD *)(v1 + 8) + 244LL) & 1;
  return result;
}
