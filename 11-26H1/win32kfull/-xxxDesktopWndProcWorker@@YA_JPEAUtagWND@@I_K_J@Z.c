/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98
 * Callers:
 *     xxxDesktopWndProc @ 0x1401FFCC0 (xxxDesktopWndProc.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     SetDesktopPattern @ 0x14008586C (SetDesktopPattern.c)
 *     xxxSetWindowLong @ 0x140085C90 (xxxSetWindowLong.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SetRITTimer @ 0x1401F74F0 (SetRITTimer.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 *     GreRealizeDefaultPalette @ 0x14021B5C0 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1402302EC (GreGetSystemPaletteUse.c)
 *     xxxInternalPaintDesktop @ 0x14024A2B0 (xxxInternalPaintDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxRealizeDesktop @ 0x1402A52A0 (xxxRealizeDesktop.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagTHREADINFO **a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // r8
  struct tagWND *i; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 UserSessionState; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int128 v36; // [rsp+40h] [rbp-69h] BYREF
  __int64 v37; // [rsp+50h] [rbp-59h]
  _QWORD v38[10]; // [rsp+70h] [rbp-39h] BYREF

  memset_0(v38, 0, 0x48uLL);
  *(_QWORD *)&v36 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, a3, a4, 669, 1, (__int64)&v36) )
    return v36;
  if ( !a1[13] )
  {
    if ( a2 != 128 )
    {
LABEL_5:
      v11 = a3;
      return xxxDefWindowProc(a1, a2, v11, a4);
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
          v11 = 61760LL;
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1, a2, v11, a4);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState((__int64)a1, a3, a4);
        case 0x203u:
          a2 = 274;
          a3 = 61744LL;
          goto LABEL_5;
        case 0x30Fu:
          goto LABEL_48;
        case 0x311u:
          if ( *a1 != (struct tagTHREADINFO *)a3 )
LABEL_48:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !IsRemoteConnection(v9, v8)
            && *(_DWORD *)(W32GetUserSessionState(v27, v26) + 16288)
            && !*(_QWORD *)(W32GetUserSessionState(v29, v28) + 16296) )
          {
            UserSessionState = W32GetUserSessionState(v31, v30);
            v33 = SetRITTimer(*(_QWORD *)(UserSessionState + 16296), 0x14u, (__int64)HideMouseTrails, 0);
            *(_QWORD *)(W32GetUserSessionState(v35, v34) + 16296) = v33;
          }
          return 0LL;
        default:
          goto LABEL_5;
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      v37 = -1LL;
      v36 = 0LL;
      v23 = CreateProfileUserName(&v36);
      SetDesktopPattern(v23, 0LL);
      if ( v37 != -1 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v36);
      xxxSendNotifyMessage((struct tagWND *)a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong((struct tagWND *)a1, 0, CurrentProcessId, 0, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong((struct tagWND *)a1, 4, CurrentThreadId, 0, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint((unsigned int **)a1, (__int64)v38);
      xxxEndPaint((unsigned int **)a1, v38);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
    {
      case 0x15u:
        xxxRedrawWindow((struct tagWND *)a1, 0LL, 0LL, 133);
        break;
      case 0x3Au:
        LODWORD(v36) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1310LL);
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          v13 = W32GetUserSessionState(v9, v8);
          xxxSetThreadDesktop(0LL, *(_QWORD *)(v13 + 19176));
          v16 = W32GetUserSessionState(v15, v14);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(*(_QWORD *)(v16 + 56968) + 56LL)) != 1 )
          {
            v19 = W32GetUserSessionState(v18, v17);
            GreRealizeDefaultPalette(*(HDC *)(*(_QWORD *)(v19 + 56968) + 56LL));
          }
          if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19176) + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, (unsigned __int64)*a1, 0LL, 1);
            v22 = W32GetUserSessionState(v21, v20);
            *(_DWORD *)(*(_QWORD *)(v22 + 19176) + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v36);
        for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          SendNotifyMessageAlways(i, 0x51u, a3, a4, 1u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v36);
        break;
      default:
        goto LABEL_5;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
