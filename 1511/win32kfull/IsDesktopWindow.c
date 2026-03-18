/*
 * XREFs of IsDesktopWindow @ 0x1C007AA1C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     TrackLayeredZorder @ 0x1C007A464 (TrackLayeredZorder.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007A628 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C007A9E0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00D1D3C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01FEBB4 (MagSlicerControl.c)
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
