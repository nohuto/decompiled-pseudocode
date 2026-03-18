/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C0065EE4
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C000B824 (DecomposeWindowIfNeeded.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     DefSetText @ 0x1C0054B90 (DefSetText.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C008227C (ComposeWindowIfNeeded.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C011E5EC (xxxGetTitleBarInfoEx.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0150050 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C2F4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r9

  v1 = *(_QWORD *)(a1 + 88);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 16);
    }
    if ( v1 == v4 && (unsigned int)IsWindowDesktopComposed(a1) )
      return 1;
  }
  return v2;
}
