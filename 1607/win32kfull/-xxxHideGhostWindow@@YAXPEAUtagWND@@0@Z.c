/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0152B90 (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01EE750 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00B2D9C (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0148DA4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01EE254 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  int v3; // r12d
  BOOL v4; // r15d
  char v6; // al
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // al
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  void *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // r10d
  int v24; // ebx
  unsigned int v25; // edx
  _OWORD *v26; // rax
  int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r12d
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // r8
  struct tagPOINT v38; // rax
  int v39; // ecx
  __int64 v40; // rbx
  void *v41; // rax
  int v42[2]; // [rsp+28h] [rbp-61h]
  int v43; // [rsp+60h] [rbp-29h]
  _DWORD v44[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v45; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v46[3]; // [rsp+78h] [rbp-11h] BYREF
  __int128 v47; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  v43 = 0;
  v4 = 0;
  v47 = 0LL;
  v6 = *((_BYTE *)a1 + 55);
  v7 = 49185;
  v8 = *(_BYTE *)(gptiCurrent + 440LL) & 1;
  if ( (v6 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v6 & 1) != 0;
  v9 = *((_QWORD *)a2 + 2);
  v44[0] = gspwndMouseOwner == a1;
  v10 = *((_QWORD *)a1 + 2);
  if ( v9 && v10 )
  {
    v11 = *(_QWORD *)(v10 + 384);
    if ( v11 == gpqForeground && *(struct tagWND **)(v11 + 88) == a1
      || gpqForeground && (v12 = *(_QWORD *)(gpqForeground + 88LL)) != 0 && *(struct tagWND **)(v12 + 104) == a1 )
    {
      *(_DWORD *)(v9 + 440) |= 0x20u;
    }
    else
    {
      v7 = 49201;
    }
  }
  v13 = *((_DWORD *)a2 + 88) & 0xF;
  v47 = *((_OWORD *)a1 + 7);
  if ( v13 != 2 )
  {
    v45 = ValidateHmonitor(*((_QWORD *)a1 + 43));
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a2);
    PhysicalToLogicalDPIRect(&v47, &v47, MonitorFlagsFromWindow, &v45);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v43 = IsWindowDesktopComposed(a2);
    if ( v43 )
    {
      v19 = *(_QWORD *)a1;
      v20 = (void *)ReferenceDwmApiPort(v16, v15, v17, v18);
      DwmAsyncNotifyAnimationChange(v20, 0, v19);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v21 = *((_QWORD *)a1 + 2);
    if ( v21 )
    {
      xxxWindowEvent(0x8003u, (__int64 *)a1, 0, 0, 3);
      PostEventMessageEx(v21, *(_QWORD *)(v21 + 384), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v22) )
  {
    v24 = v8 != 0 ? 0x20000 : 0;
    if ( v3 )
    {
      if ( (*((_BYTE *)a2 + 55) & 0x20) == 0 )
      {
        v25 = 7;
LABEL_26:
        xxxMinMaximizeEx(a2, v25, v24 | 1, 0LL, 0LL);
      }
    }
    else
    {
      if ( !v4 )
      {
        if ( (*((_BYTE *)a2 + 55) & 0x21) == 0 )
        {
LABEL_36:
          if ( (*((_BYTE *)a2 + 49) & 8) != 0 )
            v7 |= 0x40u;
          if ( (_QWORD)v47 == *((_QWORD *)a2 + 14) )
            v7 |= 2u;
          goto LABEL_40;
        }
        v26 = (_OWORD *)CkptRestore((__int64)a2, &v47);
        if ( v26 )
          *v26 = v47;
        xxxMinMaximizeEx(a2, 9u, v24 | 1, 0LL, 0LL);
LABEL_35:
        v7 |= 2u;
        goto LABEL_36;
      }
      if ( (*((_BYTE *)a2 + 55) & 1) == 0 )
      {
        v25 = v23;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint(a1, a2);
    goto LABEL_35;
  }
LABEL_40:
  v27 = 0;
  if ( v8
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v28) && (v7 & 0x40) != 0 )
  {
    SetVisible(a1, 0);
  }
  else
  {
    xxxShowWindowEx(a1, 0, 0);
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) )
  {
    if ( !(unsigned int)IsTopLevelWindow(v29) )
    {
      if ( (*((_BYTE *)a2 + 49) & 8) != 0 )
      {
        SetVisible(a2, 17);
        v39 = 1;
        if ( gdwDeferWinEvent )
          v39 = 3;
        xxxWindowEvent(0x8002u, (__int64 *)a2, 0, 0, v39);
        xxxRedrawWindow(a2, 0LL, 0LL, 1157);
      }
      goto LABEL_73;
    }
    v34 = 0;
    if ( (*((_BYTE *)a1 + 44) & 0x20) != 0 )
    {
      v27 = 1;
      SetOrClrWF(0, a1, 0x420u, 1);
      SetOrClrWF(1, a2, 0x420u, 1);
    }
    else
    {
      v35 = *((_QWORD *)a1 + 10);
      if ( v35 )
      {
        if ( (struct tagWND *)v35 == a2 )
        {
          v7 |= 4u;
        }
        else if ( (*(_BYTE *)(v35 + 48) & 8) == 0 || (*((_BYTE *)a2 + 48) & 8) != 0 )
        {
          v34 = 1;
          v46[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v46;
          v46[1] = v35;
          ++*(_DWORD *)(v35 + 8);
LABEL_57:
          if ( (v7 & 0x40) != 0 )
            SetVisible(a2, 1);
          xxxSetWindowPosAndBand(a2, v35, v47, SDWORD1(v47), 0, 0, v7, 0);
          if ( v34 )
            ThreadUnlock1(v31, v30);
          if ( (v7 & 0x40) != 0 )
            xxxRedrawWindow(a2, 0LL, 0LL, 1157);
          if ( (v7 & 0x10) == 0 && !v8 )
            xxxActivateWindow(a2, 1LL);
          if ( v44[0] )
          {
            v36 = *((_QWORD *)a2 + 2);
            if ( v36 )
            {
              HMAssignmentLock(&gspwndMouseOwner, a2);
              v44[0] = 0;
              v44[1] = 4;
              v38 = LogicalQmsgCursorPos((__int64)a2, 0LL, v37);
              v42[0] = 0;
              PostInputMessage(
                *(_QWORD *)(v36 + 384),
                (__int64)a2,
                0x201u,
                0LL,
                (LOWORD(v38.y) << 16) | LOWORD(v38.x),
                *(_QWORD *)v42,
                0LL,
                0LL,
                0,
                v44,
                0LL,
                0LL);
            }
          }
LABEL_73:
          if ( v43 )
          {
            v40 = *(_QWORD *)a2;
            v41 = (void *)ReferenceDwmApiPort(v31, v30, v32, v33);
            DwmAsyncNotifyAnimationChange(v41, 1, v40);
          }
          xxxNotifyShellOfWindowSwap(a1, a2);
          return;
        }
      }
    }
    LODWORD(v35) = v27;
    goto LABEL_57;
  }
  PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x12u, *(_QWORD *)a1);
  if ( (*((_BYTE *)a2 + 49) & 8) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x12u, *(_QWORD *)a2);
}
