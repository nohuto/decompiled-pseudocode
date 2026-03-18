/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C006F610 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     xxxSetWindowLong @ 0x1C00E43F0 (xxxSetWindowLong.c)
 *     SetDesktopPattern @ 0x1C00ED9CC (SetDesktopPattern.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     xxxDWP_UpdateUIState @ 0x1C00F579C (xxxDWP_UpdateUIState.c)
 *     xxxInternalPaintDesktop @ 0x1C010C4A4 (xxxInternalPaintDesktop.c)
 *     GreRealizeDefaultPalette @ 0x1C010CB04 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C010FA9C (GreGetSystemPaletteUse.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxRealizeDesktop @ 0x1C01E8E24 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r10d
  __int16 v7; // ax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProfileUserName; // rbx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  struct tagWND *v19; // [rsp+58h] [rbp-B0h]
  _BYTE v20[24]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v21[80]; // [rsp+80h] [rbp-88h] BYREF

  v5 = a2;
  v7 = *((_WORD *)a1 + 33);
  if ( v7 != 669 )
  {
    if ( v7 )
      return 0LL;
    a2 = *(unsigned __int16 *)(gpsi + 334LL);
    if ( *((_DWORD *)a1 + 58) + 376 < (unsigned int)a2 )
      return 0LL;
    if ( v5 != 1 )
      return xxxDefWindowProc(a1);
    *((_WORD *)a1 + 33) = 669;
  }
  if ( !*((_QWORD *)a1 + 11) )
  {
    if ( v5 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( v5 > 0x80 )
  {
    if ( v5 != 161 )
    {
      switch ( v5 )
      {
        case 0x112u:
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          return xxxDefWindowProc(a1);
        case 0x30Fu:
          goto LABEL_49;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_49:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && gMouseTrails && !gtmridMouseTrails )
            gtmridMouseTrails = SetRITTimer(0LL, 20LL, HideMouseTrails, 0LL);
          return 0LL;
        default:
          return xxxDefWindowProc(a1);
      }
    }
    return 0LL;
  }
  switch ( v5 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v20);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v20);
      xxxSendNotifyMessage(a1, 21LL, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong((_DWORD)a1, 0, CurrentProcessId, 0, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong((_DWORD)a1, 4, CurrentThreadId, 0, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v21);
      xxxEndPaint(a1);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( v5 != 20 )
  {
    switch ( v5 )
    {
      case 0x15u:
        xxxRedrawWindow(a1, 0LL, 0LL, 133);
        break;
      case 0x3Au:
        v9 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        v18 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v18;
        v19 = (struct tagWND *)v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        LOBYTE(a2) = 2;
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), a2);
        ThreadUnlock1(v11, v10);
        v12 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v18 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v18;
          v19 = v12;
          ++*((_DWORD *)v12 + 2);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(gspwndAltTab, 58LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
          ThreadUnlock1(v14, v13);
        }
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 24LL)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 24LL));
          if ( (*(_DWORD *)(grpdeskRitInput + 32LL) & 1) != 0 )
          {
            xxxSendNotifyMessage(-1LL, 785LL, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 32LL) &= ~1u;
          }
        }
        break;
      default:
        return xxxDefWindowProc(a1);
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
