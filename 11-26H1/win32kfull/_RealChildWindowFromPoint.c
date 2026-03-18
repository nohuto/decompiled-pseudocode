/*
 * XREFs of _RealChildWindowFromPoint @ 0x14008BE64
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x14008B210 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1400462A4 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 */

tagWND *__fastcall RealChildWindowFromPoint(tagWND *this, struct tagPOINT a2)
{
  tagWND *v2; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rcx
  tagWND *v6; // rsi
  tagWND *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagPOINT v10; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v11; // [rsp+48h] [rbp+28h] BYREF

  v11 = a2;
  v2 = this;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(this);
  if ( (unsigned __int8)ShouldVirtualizeWindowRect(v2, CurrentThreadDpiAwarenessContext) )
    TransformPointBetweenCoordinateSpaces(&v11, &v11, v2, 0LL);
  if ( v2 != (tagWND *)GetDesktopWindow((__int64)v2) )
  {
    v4 = *((_QWORD *)v2 + 5);
    v11.x += *(_DWORD *)(v4 + 104);
    v11.y += *(_DWORD *)(v4 + 108);
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)v2 + 5) + 104LL, v11)
    || tagWND::PtOutsideClipRgnOrMaxClip(v2, &v11) )
  {
    return 0LL;
  }
  v6 = 0LL;
  v7 = (tagWND *)*((_QWORD *)v2 + 14);
  v10 = v11;
  while ( v7 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v7) || !IsWindowCloaked(v7)) )
    {
      TransformPointBetweenCoordinateSpaces(&v11, &v10, v7, v2);
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)v7 + 5) + 88LL, v11) )
      {
        if ( !tagWND::PtOutsideClipRgnOrMaxClip(v7, &v11) )
        {
          if ( *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904) + 868LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v7 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 28LL) & 0xF) != 7 )
          {
            return v7;
          }
          v6 = v7;
        }
      }
    }
    v7 = (tagWND *)*((_QWORD *)v7 + 11);
  }
  if ( v6 )
    return v6;
  return v2;
}
