/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01424F8 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0142840 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C014D320 (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F7580 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     GetMonitorFlagsFromWindow @ 0x1C007BE54 (GetMonitorFlagsFromWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00C93DC (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0143000 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F70C4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
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
  bool v13; // zf
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
  int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rbx
  void *v34; // rax
  unsigned int v35; // edx
  char *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // ecx
  int v40[2]; // [rsp+28h] [rbp-61h]
  int v41; // [rsp+60h] [rbp-29h]
  _DWORD v42[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v43; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v44[3]; // [rsp+78h] [rbp-11h] BYREF
  __int128 v45; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  v41 = 0;
  v4 = 0;
  v45 = 0LL;
  v6 = *((_BYTE *)a1 + 55);
  v7 = 49185;
  v8 = *(_BYTE *)(gptiCurrent + 440LL) & 1;
  if ( (v6 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v6 & 1) != 0;
  v9 = *((_QWORD *)a2 + 2);
  v42[0] = gspwndMouseOwner == a1;
  v10 = *((_QWORD *)a1 + 2);
  if ( v9 && v10 )
  {
    v11 = *(_QWORD *)(v10 + 384);
    if ( v11 == gpqForeground && *(struct tagWND **)(v11 + 80) == a1
      || gpqForeground && (v12 = *(_QWORD *)(gpqForeground + 80LL)) != 0 && *(struct tagWND **)(v12 + 104) == a1 )
    {
      *(_DWORD *)(v9 + 440) |= 0x20u;
    }
    else
    {
      v7 = 49201;
    }
  }
  v13 = *((_DWORD *)a2 + 86) == 2;
  v45 = *((_OWORD *)a1 + 7);
  if ( !v13 )
  {
    v43 = ValidateHmonitor(*((_QWORD *)a1 + 44));
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a2);
    PhysicalToLogicalDPIRect(&v45, &v45, MonitorFlagsFromWindow, &v43);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v41 = IsWindowDesktopComposed(a2);
    if ( v41 )
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
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a2) || !(unsigned int)IsTopLevelWindow(v22) )
  {
    v25 = 0;
    goto LABEL_29;
  }
  v24 = v8 != 0 ? 0x20000 : 0;
  if ( v3 )
  {
    v25 = 0;
    if ( (*((_BYTE *)a2 + 55) & 0x20) != 0 )
    {
LABEL_58:
      _CopyWindowCheckpoint(a1, a2);
LABEL_24:
      v7 |= 2u;
      goto LABEL_25;
    }
    v35 = 7;
LABEL_57:
    xxxMinMaximizeEx(a2, v35, v24 | 1, 0LL, 0LL);
    goto LABEL_58;
  }
  v25 = 0;
  if ( v4 )
  {
    if ( (*((_BYTE *)a2 + 55) & 1) != 0 )
      goto LABEL_58;
    v35 = v23;
    goto LABEL_57;
  }
  if ( (*((_BYTE *)a2 + 55) & 0x21) != 0 )
  {
    v36 = CkptRestore((__int64)a2, &v45);
    if ( v36 )
      *(_OWORD *)v36 = v45;
    xxxMinMaximizeEx(a2, 9u, v24 | 1, 0LL, 0LL);
    goto LABEL_24;
  }
LABEL_25:
  if ( (*((_BYTE *)a2 + 49) & 8) != 0 )
    v7 |= 0x40u;
  if ( (_QWORD)v45 == *((_QWORD *)a2 + 14) )
    v7 |= 2u;
LABEL_29:
  if ( v8
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v26) && (v7 & 0x40) != 0 )
  {
    SetVisible((__int64)a1, 0);
  }
  else
  {
    xxxShowWindowEx(a1, 0, 0);
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a2) )
  {
    PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x12u, *(_QWORD *)a1);
    if ( (*((_BYTE *)a2 + 49) & 8) != 0 )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x12u, *(_QWORD *)a2);
  }
  else
  {
    if ( (unsigned int)IsTopLevelWindow(v27) )
    {
      if ( (*((_BYTE *)a1 + 44) & 0x20) != 0 )
      {
        SetOrClrWF(0, a1, 0x420u, 1);
        SetOrClrWF(1, a2, 0x420u, 1);
        LODWORD(v32) = 1;
      }
      else
      {
        v32 = *((_QWORD *)a1 + 10);
        if ( v32 )
        {
          if ( (struct tagWND *)v32 == a2 )
          {
            LODWORD(v32) = 0;
            v7 |= 4u;
          }
          else
          {
            v25 = 1;
            v44[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v44;
            v44[1] = v32;
            ++*(_DWORD *)(v32 + 8);
          }
        }
      }
      if ( (v7 & 0x40) != 0 )
        SetVisible((__int64)a2, 1);
      xxxSetWindowPosAndBand(a2, v32, v45, SDWORD1(v45), 0, 0, v7, 0);
      if ( v25 )
        ThreadUnlock1(v29, v28);
      if ( (v7 & 0x40) != 0 )
        xxxRedrawWindow(a2, 0LL, 0LL, 1157);
      if ( (v7 & 0x10) == 0 && !v8 )
        xxxActivateWindow(a2, 1LL);
      if ( v42[0] )
      {
        v37 = *((_QWORD *)a2 + 2);
        if ( v37 )
        {
          HMAssignmentLock(&gspwndMouseOwner, a2);
          v42[0] = 0;
          v42[1] = 4;
          v38 = LogicalCursorPos(v37);
          v40[0] = 0;
          PostInputMessage(
            *(_QWORD *)(v37 + 384),
            (__int64)a2,
            0x201u,
            0LL,
            (WORD2(v38) << 16) | (unsigned __int16)v38,
            *(_QWORD *)v40,
            0LL,
            0LL,
            0,
            v42,
            0LL,
            0LL);
        }
      }
    }
    else if ( (*((_BYTE *)a2 + 49) & 8) != 0 )
    {
      SetVisible((__int64)a2, 17);
      v39 = 1;
      if ( gdwDeferWinEvent )
        v39 = 3;
      xxxWindowEvent(0x8002u, (__int64 *)a2, 0, 0, v39);
      xxxRedrawWindow(a2, 0LL, 0LL, 1157);
    }
    if ( v41 )
    {
      v33 = *(_QWORD *)a2;
      v34 = (void *)ReferenceDwmApiPort(v29, v28, v30, v31);
      DwmAsyncNotifyAnimationChange(v34, 1, v33);
    }
    xxxNotifyShellOfWindowSwap(a1, a2);
  }
}
