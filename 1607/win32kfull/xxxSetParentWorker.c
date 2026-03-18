/*
 * XREFs of xxxSetParentWorker @ 0x1C00DD234
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C01203B0 (NtUserSetParent.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014FA28 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C000D06C (HasMessageRootWindow.c)
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     RedirectDCEs @ 0x1C0063468 (RedirectDCEs.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0063B98 (ChangeRedirectionParentInDCEs.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C006F768 (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C0075C7C (ValidateNewParent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     DecomposeWindowIfNeeded @ 0x1C0096460 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     CalcForegroundInsertAfter @ 0x1C00A8A68 (CalcForegroundInsertAfter.c)
 *     SelectNewFrameRgn @ 0x1C00DB974 (SelectNewFrameRgn.c)
 *     ResetWindowTransform @ 0x1C00DB9A8 (ResetWindowTransform.c)
 *     IsWindowShellCloaked @ 0x1C00DC56C (IsWindowShellCloaked.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 *     _ScreenToClient @ 0x1C00DD204 (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C00DEF54 (IsImmersiveAppIORestricted.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01DD3C0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxTurnOffCompositing @ 0x1C01DE97C (xxxTurnOffCompositing.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetParentWorker(struct tagWND *a1, __int64 a2, struct tagWND *a3)
{
  __int64 v4; // rdi
  char v6; // r14
  struct tagWND *DesktopWindow; // r12
  struct tagWND *MessageWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  __int64 StyleWindow; // rax
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rax
  struct tagWND *v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v42; // rdx
  __int64 v43; // [rsp+40h] [rbp-39h]
  _BYTE v44[8]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v45[6]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v46[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v47[10]; // [rsp+80h] [rbp+7h] BYREF
  int v48; // [rsp+E0h] [rbp+67h]
  int v49; // [rsp+E8h] [rbp+6Fh]
  unsigned int v50; // [rsp+F8h] [rbp+7Fh] BYREF
  unsigned int v51; // [rsp+FCh] [rbp+83h]

  v48 = 0;
  v4 = a2;
  v6 = 5;
  if ( a2 == -3 )
  {
    v4 = 0LL;
    v48 = 1;
  }
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  MessageWindow = (struct tagWND *)GetMessageWindow((__int64)a1);
  v12 = MessageWindow;
  if ( a1 == DesktopWindow || a1 == MessageWindow )
    goto LABEL_88;
  if ( !v4 )
    v4 = (__int64)DesktopWindow;
  if ( v10 && (*(_QWORD *)(v10 + 88) != v4 || (struct tagWND *)v10 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 376LL), v9, v10, v11) )
  {
    if ( (unsigned int)HasMessageRootWindow((__int64)a1) )
    {
      if ( !(unsigned int)HasMessageRootWindow(v4) )
      {
LABEL_88:
        UserSetLastError(5LL);
        return 0LL;
      }
    }
  }
  v46[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v46;
  v46[1] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  if ( !(unsigned int)ValidateNewParent((__int64)a1, v4)
    || (v15 = xxxShowWindowEx(a1, 0, 0), v49 = v15, (*((_BYTE *)a1 + 55) & 0x10) != 0) )
  {
LABEL_76:
    ThreadUnlock1(v14, v13);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent((__int64)a1, v4) )
  {
    if ( v15 && *((char *)a1 + 43) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_76;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v44);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v17 = *((_QWORD *)a1 + 11);
  v43 = StyleWindow;
  v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v47;
  v47[1] = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  if ( (*(_BYTE *)(v17 + 50) & 0x40) != 0 )
    v18 = *((_DWORD *)a1 + 30);
  else
    v18 = *((_DWORD *)a1 + 28);
  v50 = v18;
  v51 = *((_DWORD *)a1 + 29);
  ScreenToClient(v17, &v50);
  if ( *((_DWORD *)a1 + 76) != 1 && ((struct tagWND *)v4 == DesktopWindow || (struct tagWND *)v4 == v12) )
    SetOrClrWF(1, a1, 0x808u, 1);
  if ( (struct tagWND *)v4 == DesktopWindow )
  {
    if ( (struct tagWND *)v17 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked(v17, 0) )
      {
        v45[0] = 1;
        zzzSetWindowCompositionCloak((__int64)a1, v45, 2u);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39, v38) + 768) & 0x30) == 0x10
        && (GetWindowCloakState((__int64)a1) & 1) != 0 )
      {
        v45[0] = 0;
        zzzSetWindowCompositionCloak((__int64)a1, v45, 1u);
      }
      v40 = *((_DWORD *)a1 + 72);
      if ( (v40 & 0x8000) != 0 )
      {
        v42 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 72) = v40 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36u, v42, 0LL);
      }
    }
  }
  else if ( (struct tagWND *)v17 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked((__int64)a1, 1) )
    {
      v45[0] = 0;
      zzzSetWindowCompositionCloak((__int64)a1, v45, 2u);
    }
    SelectNewFrameRgn((__int64)a1, 0LL);
    ResetWindowTransform((__int64)a1, v19, v20);
  }
  UnlinkWindow((__int64)a1, v17);
  HMAssignmentLock((char *)a1 + 88, v4);
  if ( v4 )
    v21 = -__CFSHR__(*(_DWORD *)(v4 + 288), 26);
  else
    v21 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)a1, v21);
  if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
  {
    v22 = *((_QWORD *)a1 + 13);
    if ( v22 )
    {
      if ( (*(_BYTE *)(v22 + 48) & 8) != 0 )
        SetOrClrWF(1, a1, 0x808u, 1);
    }
  }
  if ( v4 != GetDesktopWindow((__int64)a1) || (*((_BYTE *)a1 + 48) & 8) != 0 )
  {
    v23 = a3;
  }
  else
  {
    CalcWindowFullScreen((__int64)a1);
    v23 = CalcForegroundInsertAfter((__int64)a1);
  }
  LinkWindow(a1, (__int64)v23, v4);
  if ( v48 && !(unsigned int)IsWindowShellCloaked((__int64)a1, 1) )
  {
    v45[0] = 1;
    zzzSetWindowCompositionCloak((__int64)a1, v45, 2u);
  }
  v24 = GetStyleWindow((__int64)a1, 2848);
  if ( v43 )
  {
    if ( v24 )
    {
      if ( v43 != v24 )
        ChangeRedirectionParentInDCEs(a1, 1u);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v24 )
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
    v25 = (__int64 *)((char *)a1 + 88);
    if ( *((_QWORD *)a1 + 11) != GetDesktopWindow((__int64)a1) )
    {
      v26 = *((_QWORD *)a1 + 2);
      v27 = *(_QWORD *)(v17 + 16);
      if ( v26 != v27 )
        zzzAttachThreadInput(v26, v27, 0LL);
    }
    if ( v4 != GetDesktopWindow((__int64)a1) )
    {
      v28 = *((_QWORD *)a1 + 2);
      v29 = *(_QWORD *)(v4 + 16);
      if ( v28 != v29 )
        zzzAttachThreadInput(v28, v29, 1LL);
    }
  }
  else
  {
    v25 = (__int64 *)((char *)a1 + 88);
  }
  if ( (struct tagWND *)v4 == v12 || (struct tagWND *)v17 == v12 )
    v6 = 21;
  if ( (*(_DWORD *)(v17 + 288) & 0x40000000) != 0 || (*((_DWORD *)a1 + 72) & 0x40000000) != 0 )
  {
    *((_DWORD *)a1 + 72) &= 0x2FFFFFFFu;
    v6 |= 0x20u;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v44);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  if ( GetStyleWindow(*v25, 2818) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, (__int64 *)a1, 0, 0, 1);
  xxxSetWindowPos(a1, 0LL, v50, v51, 0, 0, v6);
  v30 = *v25;
  if ( !*v25
    || (v31 = *(_DWORD *)(v30 + 352), (((unsigned __int8)v31 ^ *((_BYTE *)a1 + 352)) & 0xF) == 0)
    || (struct tagWND *)v30 == DesktopWindow
    || (struct tagWND *)v30 == v12 )
  {
    xxxInheritWindowMonitor(a1, 0LL, 1, 0);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, v31);
  }
  if ( v49 )
    xxxShowWindowEx(a1, 1u, 0);
  v34 = ThreadUnlock1(v33, v32);
  ThreadUnlock1(v36, v35);
  return v34;
}
