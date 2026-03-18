/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C007B4A0 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxEndPaint @ 0x1C0079A28 (xxxEndPaint.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     GreRealizeDefaultPalette @ 0x1C007B930 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C007B9EC (GreGetSystemPaletteUse.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxSetWindowLong @ 0x1C0080CF0 (xxxSetWindowLong.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00EF9E4 (xxxDWP_UpdateUIState.c)
 *     xxxInternalPaintDesktop @ 0x1C015135C (xxxInternalPaintDesktop.c)
 *     SetDesktopPattern @ 0x1C0152980 (SetDesktopPattern.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxRealizeDesktop @ 0x1C01E87F4 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  __int16 v7; // ax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProfileUserName; // rbx
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  struct tagWND *v17; // [rsp+58h] [rbp-B0h]
  _BYTE v18[24]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v19[10]; // [rsp+80h] [rbp-88h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = *((_WORD *)a1 + 33);
  if ( v7 != 669 )
  {
    if ( v7 )
      return 0LL;
    if ( (_DWORD)a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    a2 = *(unsigned __int16 *)(gpsi + 334LL);
    if ( *((_DWORD *)a1 + 58) + 376 < (unsigned int)a2 )
      return 0LL;
    *((_WORD *)a1 + 33) = 669;
  }
  if ( !*((_QWORD *)a1 + 11) )
  {
    if ( v5 != 128 )
    {
LABEL_9:
      a3 = v4;
      LODWORD(a2) = v5;
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    return 0LL;
  }
  if ( v5 > 0x80 )
  {
    if ( v5 != 161 )
    {
      switch ( v5 )
      {
        case 0x112u:
          a3 = 61760LL;
          if ( v4 == 61760 )
          {
            LODWORD(a2) = 274;
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
            gtmridMouseTrails = SetRITTimer(0, 20, (int)HideMouseTrails, 0);
          return 0LL;
        default:
          goto LABEL_9;
      }
    }
    return 0LL;
  }
  switch ( v5 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v18, a2, 669LL);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v18);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1);
      xxxEndPaint(a1, v19);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( v5 != 20 )
  {
    switch ( v5 )
    {
      case 0x15u:
        xxxRedrawWindow(a1);
        break;
      case 0x3Au:
        v9 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        v16 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v16;
        v17 = (struct tagWND *)v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        LOBYTE(a2) = 2;
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), a2);
        ThreadUnlock1(v11, v10);
        v12 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v16 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v16;
          v17 = v12;
          ++*((_DWORD *)v12 + 2);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1, 1);
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
