/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C0227678
 * Callers:
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 * Callees:
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     xxxSendMinRectMessages @ 0x1C00F95D8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
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
      xxxSendMinRectMessages((unsigned __int64 *)a1, (struct _LARGE_STRING *)&v4);
      if ( !IsRectEmptyInl(&v4) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)a1 + 7, &v4);
    }
    SetVisible((__int64)a1, 0);
    RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((char *)a1 + 112);
    xxxShowOwnedWindows((__int64)a1, 1u, (__int64)RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1);
    return PostEventMessageEx(
             *((_QWORD *)a1 + 2),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL),
             0xAu,
             (LARGE_INTEGER *)a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
