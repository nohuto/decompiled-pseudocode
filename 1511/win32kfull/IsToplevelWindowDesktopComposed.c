/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C00569D8
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     DefSetText @ 0x1C0072B08 (DefSetText.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     DecomposeWindowIfNeeded @ 0x1C008001C (DecomposeWindowIfNeeded.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C6534 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00C7B60 (xxxGetTitleBarInfoEx.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0223A90 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C0227878 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C5F8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 88) )
  {
    DesktopWindow = GetDesktopWindow(a1, a1);
    if ( v4 == DesktopWindow )
      return (unsigned int)IsWindowDesktopComposed(v3) != 0;
  }
  return v1;
}
