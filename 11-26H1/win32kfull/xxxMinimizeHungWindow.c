/*
 * XREFs of xxxMinimizeHungWindow @ 0x140292240
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1401C0368 (xxxShowOwnedWindows.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     xxxDrawAnimatedRects @ 0x1402F0AF8 (xxxDrawAnimatedRects.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  struct tagWND *v3; // rdi
  __int64 RectRgnIndirect; // rbx
  struct tagWND *v5; // rcx
  struct tagRECT v6; // [rsp+40h] [rbp-28h] BYREF

  result = *((_QWORD *)a1 + 5);
  v3 = a1;
  v6 = 0LL;
  LOBYTE(a1) = *(_BYTE *)(result + 31);
  if ( ((unsigned __int8)a1 & 0x20) == 0 && ((unsigned __int8)a1 & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66792) & 0x10000) != 0 )
    {
      xxxSendMinRectMessages((unsigned __int64 *)v3, (__int64)&v6);
      if ( !IsRectEmptyInl(&v6) )
        xxxDrawAnimatedRects(v3);
    }
    SetVisible((__int64)v3, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)v3 + 5) + 88LL);
    xxxShowOwnedWindows((__int64)v3, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v3, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)v3 + 13) == GetDesktopWindow((__int64)v3) )
      xxxActivateOnMinimize(v5);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)v3 + 2),
             *(struct tagQ **)(*((_QWORD *)v3 + 2) + 464LL),
             0xAu,
             v3,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
