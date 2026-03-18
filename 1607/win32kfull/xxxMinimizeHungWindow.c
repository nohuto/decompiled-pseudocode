/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C0227630
 * Callers:
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxShowOwnedWindows @ 0x1C00B29B0 (xxxShowOwnedWindows.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 */

char __fastcall xxxMinimizeHungWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  HRGN RectRgnIndirect; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagRECT v10; // [rsp+40h] [rbp-28h] BYREF

  result = *((_BYTE *)a1 + 55);
  if ( (result & 0x20) == 0 && (result & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      *(_QWORD *)&v10.left = 0LL;
      *(_QWORD *)&v10.right = 0LL;
      xxxSendMinRectMessages((__int64 *)a1, &v10.left, a3, a4);
      if ( !IsRectEmptyInl(&v10) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)a1 + 7, &v10);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((char *)a1 + 112);
    xxxShowOwnedWindows((__int64)a1, 1, (__int64)RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1, v7, v8, v9);
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
