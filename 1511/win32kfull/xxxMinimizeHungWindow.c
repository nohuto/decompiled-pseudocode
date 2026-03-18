/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C02279D4
 * Callers:
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C7790 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00C94C4 (xxxShowOwnedWindows.c)
 *     xxxSendMinRectMessages @ 0x1C00FF20C (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C0227878 (xxxDrawAnimatedRects.c)
 */

char __fastcall xxxMinimizeHungWindow(struct tagWND *a1)
{
  char result; // al
  HRGN RectRgnIndirect; // rbx
  struct tagRECT v4; // [rsp+40h] [rbp-28h] BYREF

  result = *((_BYTE *)a1 + 55);
  if ( (result & 0x20) == 0 && (result & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      *(_QWORD *)&v4.left = 0LL;
      *(_QWORD *)&v4.right = 0LL;
      xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&v4);
      if ( !IsRectEmptyInl(&v4) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)a1 + 7, &v4);
    }
    SetVisible((__int64)a1, 0);
    RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((char *)a1 + 112);
    xxxShowOwnedWindows((__int64)a1, 1, (__int64)RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1);
    return PostEventMessageEx(
             *((_QWORD *)a1 + 2),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
             0xAu,
             (__int64)a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
