/*
 * XREFs of RemoteRedrawRectangle @ 0x1C01EFABC
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C02029CC (CtxDisplayIOCtl.c)
 *     NtUserRemoteRedrawRectangle @ 0x1C021F4C0 (NtUserRemoteRedrawRectangle.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     vDrvInvalidateRect @ 0x1C02B8A54 (vDrvInvalidateRect.c)
 */

__int64 __fastcall RemoteRedrawRectangle(_DWORD *a1)
{
  struct tagWND *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !gspdeskShouldBeForeground )
  {
    v2 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v6;
      v6[1] = v2;
      ++*((_DWORD *)v2 + 2);
      vDrvInvalidateRect(*gpDispInfo, a1);
      xxxRedrawWindow(gspwndFullScreen, a1, 0LL, 645);
      return ThreadUnlock1(v4, v3);
    }
  }
  return result;
}
