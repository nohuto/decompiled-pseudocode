/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C0100420 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     xxxSetWindowLong @ 0x1C009B210 (xxxSetWindowLong.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     GreRealizeDefaultPalette @ 0x1C01008B0 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0100A04 (GreGetSystemPaletteUse.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 *     xxxInternalPaintDesktop @ 0x1C0100C4C (xxxInternalPaintDesktop.c)
 *     SetDesktopPattern @ 0x1C010CF14 (SetDesktopPattern.c)
 *     xxxDWP_UpdateUIState @ 0x1C01148BC (xxxDWP_UpdateUIState.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxRealizeDesktop @ 0x1C01DF6B4 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // r10d
  __int16 v7; // ax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProfileUserName; // rbx
  int CurrentProcessId; // eax
  int CurrentThreadId; // eax
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  struct tagWND *v19; // [rsp+58h] [rbp-B0h]
  _BYTE v20[24]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v21[80]; // [rsp+80h] [rbp-88h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = *((_WORD *)a1 + 33);
  if ( v7 != 669 )
  {
    if ( v7 )
      return 0LL;
    if ( a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    if ( *((_DWORD *)a1 + 58) + 360 < (unsigned int)*(unsigned __int16 *)(gpsi + 334LL) )
      return 0LL;
    *((_WORD *)a1 + 33) = 669;
  }
  if ( !*((_QWORD *)a1 + 11) )
  {
    if ( a2 != 128 )
    {
LABEL_9:
      a3 = v4;
      a2 = v5;
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          a3 = 61760LL;
          if ( v4 == 61760 )
          {
            a2 = 274;
            return xxxDefWindowProc(a1, a2, a3, a4);
          }
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          v4 = 61744LL;
          v5 = 274;
          goto LABEL_9;
        case 0x30Fu:
          goto LABEL_48;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_48:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && gMouseTrails && !gtmridMouseTrails )
            gtmridMouseTrails = SetRITTimer(0LL, 0x14u, (__int64)HideMouseTrails, 0);
          return 0LL;
        default:
          goto LABEL_9;
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v20);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v20);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0, CurrentProcessId, 0LL, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 4, CurrentThreadId, 0LL, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v21);
      xxxEndPaint(a1);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
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
        xxxMakeWindowForegroundWithState(*(_DWORD **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 2);
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
            xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 32LL) &= ~1u;
          }
        }
        break;
      default:
        goto LABEL_9;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, v4, 1LL);
  return 1LL;
}
