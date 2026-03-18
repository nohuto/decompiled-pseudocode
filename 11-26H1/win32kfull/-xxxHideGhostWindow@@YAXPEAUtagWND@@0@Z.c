/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18
 * Callers:
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8D74 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8E04 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402CADE8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14005527C (AdjustPwndPtiPqForDelegation.c)
 *     INPUTDEST_FROM_PWND @ 0x14008B1BC (INPUTDEST_FROM_PWND.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x1401661C0 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1401662D4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     DwmAsyncNotifyAnimationChange @ 0x14024A6E0 (DwmAsyncNotifyAnimationChange.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  BOOL v2; // r12d
  struct tagWND *v3; // rsi
  int v5; // r14d
  char v6; // cl
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r13d
  struct tagQ **v26; // rbx
  __int64 v27; // r8
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rdx
  CHECKPOINT *v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r14
  __int128 *v41; // rax
  __int64 v42; // rax
  unsigned __int16 v43; // bx
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // [rsp+80h] [rbp-80h] BYREF
  char v48; // [rsp+84h] [rbp-7Ch]
  int v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+8Ch] [rbp-74h]
  struct tagQ *v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  struct tagWND *v53; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h]
  _OWORD v57[5]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v58; // [rsp+118h] [rbp+18h]
  __int128 v59; // [rsp+128h] [rbp+28h]
  struct tagRECT v60; // [rsp+138h] [rbp+38h] BYREF
  __int128 v61; // [rsp+150h] [rbp+50h] BYREF
  __int128 v62; // [rsp+160h] [rbp+60h]
  __int128 v63; // [rsp+170h] [rbp+70h]
  __int128 v64; // [rsp+180h] [rbp+80h]
  __int128 v65; // [rsp+190h] [rbp+90h]
  __int128 v66; // [rsp+1A0h] [rbp+A0h]
  __int128 v67; // [rsp+1B0h] [rbp+B0h]

  v53 = a2;
  v47 = 0;
  v2 = 0;
  v50 = 0;
  v60 = 0LL;
  v52 = 0LL;
  v3 = a2;
  v5 = 49185;
  v49 = _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)a1) + 130, 0, 0) & 1;
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
    v47 = 1;
  else
    v2 = (v6 & 1) != 0;
  memset_0(v57, 0, 0x70uLL);
  LODWORD(v57[0]) = 4;
  *(_QWORD *)&v58 = a1;
  v62 = v57[1];
  HIDWORD(v58) = 2;
  v61 = v57[0];
  v64 = v57[3];
  v63 = v57[2];
  v66 = v58;
  v65 = v57[4];
  v67 = v59;
  v7 = IsCapturedBySystem(&v61);
  v10 = *((_QWORD *)v3 + 2);
  v48 = v7;
  if ( v10 )
  {
    v11 = *((_QWORD *)a1 + 2);
    if ( v11 )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928);
      v14 = *(_QWORD *)(v11 + 464);
      if ( v14 == v13 && *(struct tagWND **)(v14 + 128) == a1
        || *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18928)
        && (v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18928), *(_QWORD *)(v18 + 128))
        && *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 18928) + 128LL) + 120LL) == a1 )
      {
        tagTHREADINFO::SetForegroundActivate(v10, 8LL);
      }
      else
      {
        v5 = 49201;
      }
    }
  }
  v19 = *((_QWORD *)a1 + 5);
  v60 = *(struct tagRECT *)(v19 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) & 0xF) != 2 )
  {
    v51 = (struct tagQ *)ValidateHmonitor(*(_QWORD *)(v19 + 256));
    PhysicalToLogicalDPIRect(&v60, &v60, *(unsigned int *)(*((_QWORD *)v3 + 5) + 288LL), &v51);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v3) )
  {
    v50 = IsWindowDesktopComposed(v3);
    if ( v50 )
    {
      v22 = (void *)ReferenceDwmApiPort(v21, v20);
      DwmAsyncNotifyAnimationChange(v22);
    }
  }
  v25 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v26 = (struct tagQ **)*((_QWORD *)a1 + 2);
    if ( v26 )
    {
      W32GetUserSessionState(v24, v23);
      xxxWindowEvent(0x8003u, a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v26, v26[58], 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v3) && IsTopLevelWindow((__int64)v3) )
  {
    v27 = (unsigned int)((v49 << 17) + 17);
    v28 = (v49 << 17) + 1;
    v29 = *((_QWORD *)v3 + 5);
    if ( v47 )
    {
      if ( (*(_BYTE *)(v29 + 31) & 0x20) == 0 )
      {
        v27 = v28;
        v30 = 7LL;
LABEL_26:
        xxxMinMaximize((__int64)v3, v30, v27);
      }
    }
    else
    {
      if ( !v2 )
      {
        if ( (*(_BYTE *)(v29 + 31) & 0x21) == 0 )
        {
LABEL_36:
          v32 = *((_QWORD *)v3 + 5);
          v33 = v5 | 0x40;
          if ( (*(_BYTE *)(v32 + 25) & 8) == 0 )
            v33 = v5;
          v5 = v33;
          if ( v60.left == *(_DWORD *)(v32 + 88) && v60.top == *(_DWORD *)(v32 + 92) )
            v5 = v33 | 2;
          goto LABEL_41;
        }
        v31 = CHECKPOINT::Restore(v3, &v60);
        if ( v31 )
          CHECKPOINT::SetNormalRect(v31, v3, &v60, 0);
        xxxMinMaximize((__int64)v3, 9LL, v28);
LABEL_35:
        v5 |= 2u;
        goto LABEL_36;
      }
      if ( (*(_BYTE *)(v29 + 31) & 1) == 0 )
      {
        v30 = 3LL;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint(a1, v3);
    goto LABEL_35;
  }
LABEL_41:
  if ( v49 || !(unsigned int)IsWindowBeingDestroyed((__int64)v3) && IsTopLevelWindow((__int64)v3) && (v5 & 0x40) != 0 )
    SetVisible((__int64)a1, 0);
  else
    xxxShowWindowEx(a1, 0, 0);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v3) )
  {
    if ( !IsTopLevelWindow((__int64)v3) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible((__int64)v3, 0x11u);
        if ( !*(_DWORD *)(W32GetUserSessionState(v46, v45) + 70592) )
          v25 = 1;
        xxxWindowEvent(0x8002u, v3, 0, 0, v25);
        xxxRedrawWindow(v3, 0LL, 0LL, 1157);
      }
      goto LABEL_75;
    }
    v36 = *((_QWORD *)a1 + 5);
    BugCheckParameter3[1] = 0LL;
    BugCheckParameter3[0] = -1LL;
    v47 = 0;
    if ( (*(_BYTE *)(v36 + 20) & 0x20) != 0 )
    {
      SetOrClrWF(0, a1, 0x420u, 1);
      SetOrClrWF(1, v3, 0x420u, 1);
      v37 = 1LL;
LABEL_58:
      if ( (v5 & 0x40) != 0 )
      {
        SetVisible((__int64)v3, 1u);
        if ( !*(_DWORD *)(W32GetUserSessionState(v39, v38) + 70592) )
          v25 = 1;
        xxxWindowEvent(0x8002u, v3, 0, 0, v25);
      }
      xxxSetWindowPos(v3, v37, (unsigned int)v60.left, (unsigned int)v60.top, 0, 0, v5);
      if ( v47 )
        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
      if ( (v5 & 0x40) != 0 )
        xxxRedrawWindow(v3, 0LL, 0LL, 1157);
      if ( (v5 & 0x10) == 0 && !v49 )
        xxxActivateWindowWithOptions((__int64)v3, 0, 0, 1, 0);
      if ( v48 )
      {
        v40 = *((_QWORD *)v3 + 2);
        v54 = v40;
        if ( v40 )
        {
          v41 = (__int128 *)INPUTDEST_FROM_PWND(v57, (__int64)v3);
          v61 = *v41;
          v62 = v41[1];
          v63 = v41[2];
          v64 = v41[3];
          v65 = v41[4];
          v66 = v41[5];
          v67 = v41[6];
          ForceCapture(0LL);
          SetSystemInputSource(&v52);
          v42 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v3 + 5) + 288LL));
          v49 = 0;
          v43 = v42;
          v56 = v42;
          v51 = *(struct tagQ **)(v40 + 464);
          v47 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (__int64 *)&v51,
                               (__int64 *)&v53,
                               &v54,
                               0x201u,
                               &v52,
                               &v49,
                               &v47) )
          {
            v3 = v53;
            PostInputMessage(
              v51,
              v53,
              0x201u,
              0LL,
              v43 | (WORD2(v56) << 16),
              0,
              0LL,
              0LL,
              0,
              (struct tagINPUT_MESSAGE_SOURCE *)&v52,
              0LL,
              0LL,
              v49,
              v47,
              v54);
          }
          else
          {
            v3 = v53;
          }
        }
      }
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
LABEL_75:
      if ( v50 )
      {
        v44 = (void *)ReferenceDwmApiPort(v35, v34);
        DwmAsyncNotifyAnimationChange(v44);
      }
      xxxNotifyShellOfWindowSwap(a1, v3);
      return;
    }
    v37 = *((_QWORD *)a1 + 12);
    if ( v37 )
    {
      if ( (struct tagWND *)v37 == v3 )
      {
        v5 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*((_QWORD *)v3 + 5) + 24LL) & 8) != 0 )
      {
        Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, *((_QWORD *)a1 + 12));
        v47 = 1;
        goto LABEL_58;
      }
    }
    v37 = 0LL;
    goto LABEL_58;
  }
  PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)a1);
  PostIAMShellHookMessage(0x12u, *(_QWORD *)a1);
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)v3);
}
