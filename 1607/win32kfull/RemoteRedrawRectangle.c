/*
 * XREFs of RemoteRedrawRectangle @ 0x1C01E57FC
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01FA080 (CtxDisplayIOCtl.c)
 *     NtUserRemoteRedrawRectangle @ 0x1C0218E20 (NtUserRemoteRedrawRectangle.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     vDrvInvalidateRect @ 0x1C02BB09C (vDrvInvalidateRect.c)
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
      v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v6;
      v6[1] = v2;
      ++*((_DWORD *)v2 + 2);
      vDrvInvalidateRect(*gpDispInfo, a1);
      xxxRedrawWindow(gspwndFullScreen, a1, 0LL, 645);
      return ThreadUnlock1(v4, v3);
    }
  }
  return result;
}
