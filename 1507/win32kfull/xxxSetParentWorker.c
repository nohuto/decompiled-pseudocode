/*
 * XREFs of xxxSetParentWorker @ 0x1C0042BCC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C00F8C50 (NtUserSetParent.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C0008CF8 (HasMessageRootWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C000B264 (ChangeRedirectionParentInDCEs.c)
 *     DecomposeWindowIfNeeded @ 0x1C000B824 (DecomposeWindowIfNeeded.c)
 *     UnredirectDCEs @ 0x1C0010144 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00129A0 (RedirectDCEs.c)
 *     SelectNewFrameRgn @ 0x1C00428CC (SelectNewFrameRgn.c)
 *     _ScreenToClient @ 0x1C0043114 (_ScreenToClient.c)
 *     IsWindowShellCloaked @ 0x1C0043140 (IsWindowShellCloaked.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     IsImmersiveAppIORestricted @ 0x1C005733C (IsImmersiveAppIORestricted.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C005CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ValidateNewParent @ 0x1C0061FF8 (ValidateNewParent.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     CalcForegroundInsertAfter @ 0x1C008143C (CalcForegroundInsertAfter.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     ResetWindowTransform @ 0x1C008A308 (ResetWindowTransform.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E67A4 (xxxForceUpdateProcessDpiAwareness.c)
 *     xxxTurnOffCompositing @ 0x1C01E7C84 (xxxTurnOffCompositing.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetParentWorker(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // r13
  struct tagWND *DesktopWindow; // r15
  struct tagWND *MessageWindow; // rax
  __int64 v7; // r8
  struct tagWND *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 StyleWindow; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v33; // rdx
  __int64 v34; // [rsp+40h] [rbp-39h]
  _BYTE v35[8]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v36[6]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v38[10]; // [rsp+80h] [rbp+7h] BYREF
  int v39; // [rsp+E0h] [rbp+67h]
  int v40; // [rsp+E8h] [rbp+6Fh]
  int v41; // [rsp+F8h] [rbp+7Fh] BYREF
  int v42; // [rsp+FCh] [rbp+83h]

  v39 = 0;
  v2 = a2;
  v4 = 5;
  if ( a2 == -3 )
  {
    v2 = 0LL;
    v39 = 1;
  }
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  MessageWindow = (struct tagWND *)GetMessageWindow(a1);
  v8 = MessageWindow;
  if ( a1 == DesktopWindow || a1 == MessageWindow )
    goto LABEL_86;
  if ( !v2 )
    v2 = (__int64)DesktopWindow;
  if ( v7 && (*(_QWORD *)(v7 + 88) != v2 || (struct tagWND *)v7 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 384LL)) )
  {
    if ( (unsigned int)HasMessageRootWindow((__int64)a1) )
    {
      if ( !(unsigned int)HasMessageRootWindow(v2) )
      {
LABEL_86:
        UserSetLastError(5LL);
        return 0LL;
      }
    }
  }
  v37[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v37;
  v37[1] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  if ( !(unsigned int)ValidateNewParent(a1, v2)
    || (v11 = xxxShowWindow(a1), v40 = v11, (*((_BYTE *)a1 + 55) & 0x10) != 0) )
  {
LABEL_71:
    ThreadUnlock1(v10, v9);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent(a1, v2) )
  {
    if ( v11 && *((char *)a1 + 43) >= 0 )
      xxxShowWindow(a1);
    goto LABEL_71;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v35);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v13 = *((_QWORD *)a1 + 11);
  v34 = StyleWindow;
  v38[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v38;
  v38[1] = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  if ( (*(_BYTE *)(v13 + 50) & 0x40) != 0 )
    v14 = *((_DWORD *)a1 + 30);
  else
    v14 = *((_DWORD *)a1 + 28);
  v41 = v14;
  v42 = *((_DWORD *)a1 + 29);
  ScreenToClient(v13, &v41);
  if ( *((_DWORD *)a1 + 76) != 1 && ((struct tagWND *)v2 == DesktopWindow || (struct tagWND *)v2 == v8) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v2 == DesktopWindow )
  {
    if ( (struct tagWND *)v13 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked(v13, 0LL) )
      {
        v36[0] = 1;
        zzzSetWindowCompositionCloak(a1, v36, 2LL);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x30) == 0x10
        && (GetWindowCloakState(a1) & 1) != 0 )
      {
        v36[0] = 0;
        zzzSetWindowCompositionCloak(a1, v36, 1LL);
      }
      v31 = *((_DWORD *)a1 + 72);
      if ( (v31 & 0x8000) != 0 )
      {
        v33 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 72) = v31 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36uLL, v33, 0LL);
      }
    }
  }
  else if ( (struct tagWND *)v13 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1LL) )
    {
      v36[0] = 0;
      zzzSetWindowCompositionCloak(a1, v36, 2LL);
    }
    SelectNewFrameRgn((__int64)a1, 0LL);
    ResetWindowTransform(a1);
  }
  UnlinkWindow(a1, v13);
  HMAssignmentLock((char *)a1 + 88, v2);
  if ( v2 )
    v15 = (unsigned int)-__CFSHR__(*(_DWORD *)(v2 + 288), 26);
  else
    v15 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v15);
  if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
  {
    v16 = *((_QWORD *)a1 + 13);
    if ( v16 )
    {
      if ( (*(_BYTE *)(v16 + 48) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v2 == GetDesktopWindow(a1) && (*((_BYTE *)a1 + 48) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1);
  if ( v39 && !(unsigned int)IsWindowShellCloaked(a1, 1LL) )
  {
    v36[0] = 1;
    zzzSetWindowCompositionCloak(a1, v36, 2LL);
  }
  v17 = GetStyleWindow(a1, 2848LL);
  if ( v34 )
  {
    if ( v17 )
    {
      if ( v34 != v17 )
        ChangeRedirectionParentInDCEs(a1, 1u);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v17 )
  {
    RedirectDCEs(a1);
  }
  if ( v2 == GetDesktopWindow(a1) && (*((_BYTE *)a1 + 55) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
  {
    v18 = (_QWORD *)((char *)a1 + 88);
    if ( *((_QWORD *)a1 + 11) != GetDesktopWindow(a1) )
    {
      v19 = *((_QWORD *)a1 + 2);
      v20 = *(_QWORD *)(v13 + 16);
      if ( v19 != v20 )
        zzzAttachThreadInput(v19, v20, 0LL);
    }
    if ( v2 != GetDesktopWindow(a1) )
    {
      v21 = *((_QWORD *)a1 + 2);
      v22 = *(_QWORD *)(v2 + 16);
      if ( v21 != v22 )
        zzzAttachThreadInput(v21, v22, 1LL);
    }
  }
  else
  {
    v18 = (_QWORD *)((char *)a1 + 88);
  }
  if ( (struct tagWND *)v2 == v8 || (struct tagWND *)v13 == v8 )
    v4 = 21;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v35);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  if ( GetStyleWindow(*v18, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(32783, (_DWORD)a1, 0, 0, 1);
  xxxSetWindowPos((_DWORD)a1, 0, v41, v42, 0, 0, v4);
  v23 = *v18;
  if ( !*v18
    || *(_DWORD *)(v23 + 344) == *((_DWORD *)a1 + 86)
    || (struct tagWND *)v23 == DesktopWindow
    || (struct tagWND *)v23 == v8 )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwareness(a1);
  }
  if ( v40 )
    xxxShowWindow(a1);
  v26 = ThreadUnlock1(v25, v24);
  ThreadUnlock1(v28, v27);
  return v26;
}
