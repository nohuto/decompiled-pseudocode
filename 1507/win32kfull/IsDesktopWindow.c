/*
 * XREFs of IsDesktopWindow @ 0x1C0012B0C
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C000A564 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     TrackLayeredZorder @ 0x1C000F54C (TrackLayeredZorder.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00100E4 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0012A30 (UserGetRedirectedWindowOrigin.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0012AD0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C008227C (ComposeWindowIfNeeded.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0149EF4 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     MagSlicerControl @ 0x1C01FE734 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    if ( v4 )
      v3 = *(_QWORD *)(v4 + 16);
  }
  if ( a1 == v3 )
    return 1LL;
  return result;
}
