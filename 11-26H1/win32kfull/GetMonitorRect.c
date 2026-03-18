/*
 * XREFs of GetMonitorRect @ 0x140030144
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     GetPrimaryMonitorRect @ 0x140252E48 (GetPrimaryMonitorRect.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1402995D0 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     UserGetHipDeviceInfo @ 0x1402A91D0 (UserGetHipDeviceInfo.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1402E1378 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__m128i *__fastcall GetMonitorRect(__m128i *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
