/*
 * XREFs of IsDesktopWindow @ 0x1C0063530
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     TrackLayeredZorder @ 0x1C0062A4C (TrackLayeredZorder.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00631C8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00632E0 (UserGetRedirectedWindowOrigin.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00634F4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00937D8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097780 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01F6210 (MagSlicerControl.c)
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
