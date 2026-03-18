/*
 * XREFs of xxxSetParentWorker @ 0x1C0088E64
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C00FF920 (NtUserSetParent.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014A340 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C000B940 (HasMessageRootWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C004FA4C (ValidateNewParent.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     ResetWindowTransform @ 0x1C0068378 (ResetWindowTransform.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00799CC (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C007A574 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C007A688 (RedirectDCEs.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     DecomposeWindowIfNeeded @ 0x1C008001C (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     IsImmersiveAppIORestricted @ 0x1C0086DD0 (IsImmersiveAppIORestricted.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008A368 (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C008A44C (_ScreenToClient.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     IsWindowShellCloaked @ 0x1C008B18C (IsWindowShellCloaked.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     CalcForegroundInsertAfter @ 0x1C00C79CC (CalcForegroundInsertAfter.c)
 *     SelectNewFrameRgn @ 0x1C010A6D0 (SelectNewFrameRgn.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E6C34 (xxxForceUpdateProcessDpiAwareness.c)
 *     xxxTurnOffCompositing @ 0x1C01E80F8 (xxxTurnOffCompositing.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetParentWorker(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // r13d
  struct tagWND *DesktopWindow; // r15
  struct tagWND *MessageWindow; // rax
  __int64 v9; // r8
  struct tagWND *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  __int64 StyleWindow; // rax
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v36; // rdx
  __int64 v37; // [rsp+40h] [rbp-39h]
  _BYTE v38[8]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v39[6]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v40[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v41[10]; // [rsp+80h] [rbp+7h] BYREF
  int v42; // [rsp+E0h] [rbp+67h]
  int v43; // [rsp+E8h] [rbp+6Fh]
  int v44; // [rsp+F8h] [rbp+7Fh] BYREF
  int v45; // [rsp+FCh] [rbp+83h]

  v42 = 0;
  v4 = a2;
  v6 = 5;
  if ( a2 == -3 )
  {
    v4 = 0LL;
    v42 = 1;
  }
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  MessageWindow = (struct tagWND *)GetMessageWindow((__int64)a1);
  v10 = MessageWindow;
  if ( a1 == DesktopWindow || a1 == MessageWindow )
    goto LABEL_87;
  if ( !v4 )
    v4 = (__int64)DesktopWindow;
  if ( v9 && (*(_QWORD *)(v9 + 88) != v4 || (struct tagWND *)v9 == a1) )
    return 0LL;
  if ( IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    if ( (unsigned int)HasMessageRootWindow((__int64)a1) )
    {
      if ( !(unsigned int)HasMessageRootWindow(v4) )
      {
LABEL_87:
        UserSetLastError(5);
        return 0LL;
      }
    }
  }
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  if ( !(unsigned int)ValidateNewParent((__int64)a1, v4)
    || (v13 = xxxShowWindowEx(a1, 0, 0), v43 = v13, (*((_BYTE *)a1 + 55) & 0x10) != 0) )
  {
LABEL_72:
    ThreadUnlock1(v12, v11);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent((__int64)a1, v4) )
  {
    if ( v13 && *((char *)a1 + 43) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_72;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v38);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v15 = *((_QWORD *)a1 + 11);
  v37 = StyleWindow;
  v41[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v41;
  v41[1] = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( (*(_BYTE *)(v15 + 50) & 0x40) != 0 )
    v16 = *((_DWORD *)a1 + 30);
  else
    v16 = *((_DWORD *)a1 + 28);
  v44 = v16;
  v45 = *((_DWORD *)a1 + 29);
  ScreenToClient(v15, &v44);
  if ( *((_DWORD *)a1 + 76) != 1 && ((struct tagWND *)v4 == DesktopWindow || (struct tagWND *)v4 == v10) )
    SetOrClrWF(1, a1, 0x808u, 1);
  if ( (struct tagWND *)v4 == DesktopWindow )
  {
    if ( (struct tagWND *)v15 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked(v15, 0LL) )
      {
        v39[0] = 1;
        zzzSetWindowCompositionCloak((__int64)a1, v39, 2u);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x30) == 0x10
        && (GetWindowCloakState((__int64)a1) & 1) != 0 )
      {
        v39[0] = 0;
        zzzSetWindowCompositionCloak((__int64)a1, v39, 1u);
      }
      v34 = *((_DWORD *)a1 + 72);
      if ( (v34 & 0x8000) != 0 )
      {
        v36 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 72) = v34 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36u, v36, 0LL);
      }
    }
  }
  else if ( (struct tagWND *)v15 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1LL) )
    {
      v39[0] = 0;
      zzzSetWindowCompositionCloak((__int64)a1, v39, 2u);
    }
    SelectNewFrameRgn(a1, 0LL);
    ResetWindowTransform((__int64)a1);
  }
  UnlinkWindow((__int64)a1, v15);
  HMAssignmentLock((char *)a1 + 88, v4);
  if ( v4 )
    v17 = (unsigned int)-__CFSHR__(*(_DWORD *)(v4 + 288), 26);
  else
    v17 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v17);
  if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
  {
    v18 = *((_QWORD *)a1 + 13);
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 48) & 8) != 0 )
        SetOrClrWF(1, a1, 0x808u, 1);
    }
  }
  if ( v4 != GetDesktopWindow((__int64)a1) || (*((_BYTE *)a1 + 48) & 8) != 0 )
  {
    v19 = a3;
  }
  else
  {
    CalcWindowFullScreen((__int64)a1);
    v19 = CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1, v19, v4);
  if ( v42 && !(unsigned int)IsWindowShellCloaked(a1, 1LL) )
  {
    v39[0] = 1;
    zzzSetWindowCompositionCloak((__int64)a1, v39, 2u);
  }
  v20 = GetStyleWindow((__int64)a1, 2848);
  if ( v37 )
  {
    if ( v20 )
    {
      if ( v37 != v20 )
        ChangeRedirectionParentInDCEs(a1, 1u);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v20 )
  {
    RedirectDCEs(a1);
  }
  if ( v4 == GetDesktopWindow((__int64)a1) && (*((_BYTE *)a1 + 55) & 4) == 0 )
  {
    SetOrClrWF(1, a1, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
  {
    v21 = (__int64 *)((char *)a1 + 88);
    if ( *((_QWORD *)a1 + 11) != GetDesktopWindow((__int64)a1) )
    {
      v22 = *((_QWORD *)a1 + 2);
      v23 = *(_QWORD *)(v15 + 16);
      if ( v22 != v23 )
        zzzAttachThreadInput(v22, v23, 0LL);
    }
    if ( v4 != GetDesktopWindow((__int64)a1) )
    {
      v24 = *((_QWORD *)a1 + 2);
      v25 = *(_QWORD *)(v4 + 16);
      if ( v24 != v25 )
        zzzAttachThreadInput(v24, v25, 1LL);
    }
  }
  else
  {
    v21 = (__int64 *)((char *)a1 + 88);
  }
  if ( (struct tagWND *)v4 == v10 || (struct tagWND *)v15 == v10 )
    v6 = 21;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v38);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  if ( GetStyleWindow(*v21, 2818) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, (__int64 *)a1, 0, 0, 1);
  xxxSetWindowPos(a1, 0, v44, v45, 0, 0, v6);
  v26 = *v21;
  if ( !*v21
    || *(_DWORD *)(v26 + 344) == *((_DWORD *)a1 + 86)
    || (struct tagWND *)v26 == DesktopWindow
    || (struct tagWND *)v26 == v10 )
  {
    xxxInheritWindowMonitor(a1, 0LL, 1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwareness(a1);
  }
  if ( v43 )
    xxxShowWindowEx(a1, 1u, 0);
  v29 = ThreadUnlock1(v28, v27);
  ThreadUnlock1(v31, v30);
  return v29;
}
