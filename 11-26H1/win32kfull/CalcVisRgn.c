/*
 * XREFs of CalcVisRgn @ 0x14004E180
 * Callers:
 *     UserVisrgnFromHwnd @ 0x140037FA0 (UserVisrgnFromHwnd.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004289C (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14004DFF4 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     zzzResetSharedDesktops @ 0x1401ED3F0 (zzzResetSharedDesktops.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1402A48E4 (UserGetClientRgn.c)
 *     NtUserGetWindowRgnEx @ 0x1402B5B00 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetLayeredOrRedirectedParent @ 0x140042940 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, _QWORD *a2, struct tagWND *a3, int a4)
{
  __int64 v4; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 StyleWindow; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  const signed __int32 *LayeredOrRedirectedParent; // rax
  __int64 v16; // rdx
  const signed __int32 *v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2[3];
  if ( !(unsigned int)IsVisible(a2)
    || v4 != *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176)
    && (a4 & 0x4000) == 0
    && (!GetStyleWindow((__int64)a2, 2568) || (a4 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(a2)) )
  {
    goto LABEL_13;
  }
  if ( (a4 & 0x4000) != 0 )
  {
    StyleWindow = GetStyleWindow((__int64)a2, 2848);
    v13 = (_QWORD *)StyleWindow;
    if ( StyleWindow )
    {
      if ( !GetRedirectionBitmap(StyleWindow, v12)
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13[2] + 456LL) + 1208LL) + 63448LL) == *v13 )
      {
        goto LABEL_13;
      }
    }
  }
  if ( (unsigned int)UpdatesLockedForDwm() )
  {
    if ( (a4 & 0x4000) == 0 )
    {
LABEL_13:
      v20 = 0LL;
      SetOrCreateRectRgnIndirectPublic(a1, &v20);
      return 0LL;
    }
    goto LABEL_15;
  }
  if ( (a4 & 0x4000) != 0 )
  {
LABEL_15:
    LayeredOrRedirectedParent = (const signed __int32 *)GetLayeredOrRedirectedParent(a2);
    v17 = LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      v18 = *((_QWORD *)LayeredOrRedirectedParent + 5);
      if ( GetRedirectionBitmap((__int64)LayeredOrRedirectedParent, v16) )
      {
        if ( _bittest((const signed __int32 *)(v18 + 24), 0x1Du) )
        {
          v19 = *(_DWORD *)(v18 + 232);
          if ( (v19 & 2) != 0 && (v19 & 1) == 0 && !_bittest(v17 + 95, 0x1Du) )
            a4 &= ~0x4000u;
        }
      }
    }
  }
  return CalcVisRgnWorker(a3, a1, a4);
}
