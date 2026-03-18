/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     NtUserSetParent @ 0x1401F6C50 (NtUserSetParent.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402C8A60 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402C8AE0 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14004643C (SetWindowSubtreeCoreWindowStatus.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140046530 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     IsImmersiveAppIORestricted @ 0x140046978 (IsImmersiveAppIORestricted.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     CalcForegroundInsertAfter @ 0x140049328 (CalcForegroundInsertAfter.c)
 *     ResetWindowTransform @ 0x14004A5F8 (ResetWindowTransform.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14004BA00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x14012DB84 (ChangeRedirectionParentInDCEs.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     UnredirectDCEs @ 0x14012E3C8 (UnredirectDCEs.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     ValidateNewParent @ 0x14012E85C (ValidateNewParent.c)
 *     RedirectDCEs @ 0x14014D444 (RedirectDCEs.c)
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x140160F98 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x140179B8C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401F4B6C (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     xxxInternalEnumWindow @ 0x1401F90C4 (xxxInternalEnumWindow.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x1401FE798 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x140218E4C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     RemoveWindowFullScreen @ 0x14024985C (RemoveWindowFullScreen.c)
 *     HasMessageRootWindow @ 0x140269CBC (HasMessageRootWindow.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140290E10 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140296A44 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 */

struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  struct tagWND *v4; // r14
  __int64 v7; // rdi
  struct tagWND *DesktopWindow; // r13
  __int64 v9; // rcx
  struct tagWND *MessageWindow; // rax
  __int64 v11; // rcx
  struct tagWND *v12; // rsi
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 StyleWindow; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // r10d
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rdx
  struct tagWND *v30; // rcx
  __int64 v31; // rdx
  struct tagWND *v32; // rdx
  struct tagWND *v33; // r8
  __int64 v34; // rdx
  struct tagWND *v35; // r14
  int v36; // r12d
  unsigned int v37; // r9d
  unsigned __int16 v38; // r10
  __int64 i; // rdx
  struct tagFREELIST *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  struct tagWND *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  int v54; // ecx
  __int64 v55; // rax
  int v56; // ecx
  struct tagWND *TopLevelHostForComponent; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  const struct tagWND *v60; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  CHECKPOINT *v64; // rax
  struct tagWND *v65; // r14
  __int64 v66; // rdx
  struct tagWND *v67; // r14
  __int64 v68; // rdx
  int v69; // [rsp+48h] [rbp-69h] BYREF
  int v70; // [rsp+4Ch] [rbp-65h]
  struct tagFREELIST *v71; // [rsp+50h] [rbp-61h]
  ULONG_PTR v72[2]; // [rsp+58h] [rbp-59h] BYREF
  int v73; // [rsp+68h] [rbp-49h]
  struct tagWND *v74; // [rsp+70h] [rbp-41h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-39h] BYREF
  __int64 v76; // [rsp+80h] [rbp-31h]
  char v77[8]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v78[16]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-11h]
  struct tagWND *v80; // [rsp+B0h] [rbp-1h]
  ULONG_PTR v81[2]; // [rsp+B8h] [rbp+7h] BYREF
  _QWORD v82[8]; // [rsp+C8h] [rbp+17h] BYREF

  v72[0] = -1LL;
  v4 = a2;
  v72[1] = 0LL;
  v71 = 0LL;
  v69 = 0;
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v77, a1);
  v7 = 0LL;
  if ( v4 != (struct tagWND *)-3LL )
    v7 = (__int64)v4;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  MessageWindow = (struct tagWND *)GetMessageWindow(v9);
  v74 = MessageWindow;
  v12 = MessageWindow;
  if ( a1 == DesktopWindow || a1 == MessageWindow )
    goto LABEL_153;
  if ( !v7 )
    v7 = (__int64)DesktopWindow;
  if ( a3 && (*((_QWORD *)a3 + 13) != v7 || a3 == a1) )
    goto LABEL_155;
  v13 = PtiCurrent(v11);
  if ( IsImmersiveAppIORestricted(*((_QWORD *)v13 + 57))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v7) )
  {
LABEL_153:
    v54 = 5;
    goto LABEL_154;
  }
  if ( (struct tagWND *)v7 != DesktopWindow
    && (struct tagWND *)v7 != v12
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL)
    && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL)) & 0xF) != 0
    && !IsChildWindowDpiIsolationEnabled(a1, (struct tagWND *)v7) )
  {
    TraceChildWindowDpiTelemetry(a1, v7, 1LL);
    v54 = 5023;
LABEL_154:
    UserSetLastError(v54);
LABEL_155:
    CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v77);
LABEL_74:
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v72);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
  {
    UserSetLastError(5023);
LABEL_73:
    if ( v77[0] && v79 )
      PopAndFreeW32ThreadLock(v78);
    goto LABEL_74;
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v81, v7);
  if ( !(unsigned int)ValidateNewParent(a1, v7, 0LL)
    || (W32GetUserSessionState(v15, v14),
        v16 = xxxShowWindowEx(a1, 0, 0),
        v17 = *((_QWORD *)a1 + 5),
        v18 = v16,
        v73 = v16,
        (*(_BYTE *)(v17 + 31) & 0x10) != 0) )
  {
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v81);
    goto LABEL_155;
  }
  if ( (*(_DWORD *)(v17 + 232) & 2) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent(a1, v7, 0LL) )
  {
    if ( v18 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
    {
      W32GetUserSessionState(v20, v19);
      xxxShowWindowEx(a1, 1u, 0);
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v81);
    goto LABEL_73;
  }
  UserSessionState = W32GetUserSessionState(v20, v19);
  ++*(_DWORD *)(UserSessionState + 70592);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&BugCheckParameter3);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v23 = *((_QWORD *)a1 + 13);
  v80 = (struct tagWND *)StyleWindow;
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v72, v23);
  v24 = *(_QWORD *)(v23 + 40);
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(_DWORD *)(v25 + 92);
  v70 = v26;
  if ( (*(_WORD *)(v24 + 42) & 0x2FFF) != 0x29D )
    v70 = v26 - *(_DWORD *)(v24 + 108);
  if ( *(_DWORD *)(v25 + 236) != 1 )
  {
    if ( (struct tagWND *)v7 != DesktopWindow && (struct tagWND *)v7 != v74 )
      goto LABEL_20;
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  }
  if ( (struct tagWND *)v7 == DesktopWindow )
  {
    if ( (struct tagWND *)v23 == DesktopWindow )
      goto LABEL_21;
    TopLevelHostForComponent = (struct tagWND *)v23;
    if ( !(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v23, v24) )
      goto LABEL_108;
    v60 = (const struct tagWND *)v23;
LABEL_107:
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v60, v58);
LABEL_108:
    while ( TopLevelHostForComponent )
    {
      if ( (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0 )
      {
        zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
        break;
      }
      TopLevelHostForComponent = (struct tagWND *)*((_QWORD *)TopLevelHostForComponent + 13);
      if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelHostForComponent, v58) )
      {
        v60 = TopLevelHostForComponent;
        goto LABEL_107;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v59);
    v62 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v62 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_BYTE *)(v62 + 808) & 0x30) == 0x10 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x40) != 0 )
      zzzUpdateWindowCompositionCloak(a1, 1LL, 1LL);
    if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
      RemoveWindowFullScreen(a1);
    WindowMargins::CheckForChanges(a1, 3LL);
    v64 = CHECKPOINT::Get(a1, v63);
    if ( v64 )
      CHECKPOINT::SendNormalToDwm(v64, a1);
LABEL_120:
    v4 = a2;
    goto LABEL_21;
  }
LABEL_20:
  if ( (struct tagWND *)v23 == DesktopWindow )
  {
    v65 = a1;
    if ( (unsigned int)CoreWindowProp::IsComponent(a1, v24) )
      v65 = CoreWindowProp::GetTopLevelHostForComponent(a1, v66);
    if ( v65 && (*(_BYTE *)(*((_QWORD *)v65 + 5) + 233LL) & 0x20) != 0 )
      zzzUpdateWindowCompositionCloak(a1, 1LL, 2LL);
    ResetWindowTransform(a1);
    CRecalcProp::s_OnWindowBecomingChild(a1);
    WindowMargins::CheckForChanges(a1, 4LL);
    goto LABEL_120;
  }
LABEL_21:
  UnlinkWindow(a1);
  v27 = 0LL;
  if ( v7 )
    v27 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = v27;
  v82[0] = (char *)a1 + 104;
  v82[1] = v7;
  HMAssignmentLock(v82, 0LL);
  if ( !v7 || (v28 = 1, (*(_DWORD *)(v7 + 380) & 0x1000) == 0) )
    v28 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)a1, v28);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v55 = *((_QWORD *)a1 + 15);
    if ( v55 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v55 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v7 == GetDesktopWindow(a1) && (*(_BYTE *)(v29 + 24) & 8) == 0 )
  {
    CalcWindowFullScreen(v30, v29);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1);
  if ( v4 == (struct tagWND *)-3LL )
  {
    v67 = a1;
    if ( (unsigned int)CoreWindowProp::IsComponent(a1, v31) )
      v67 = CoreWindowProp::GetTopLevelHostForComponent(a1, v68);
    if ( !v67 || (*(_BYTE *)(*((_QWORD *)v67 + 5) + 233LL) & 0x20) == 0 )
      zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
  }
  v32 = a1;
  v33 = a1;
  do
  {
    if ( (*(_BYTE *)(*((_QWORD *)v32 + 5) + 27LL) & 0x20) != 0 )
      break;
    v32 = (struct tagWND *)*((_QWORD *)v32 + 13);
    v33 = v32;
  }
  while ( v32 );
  if ( v32 && v32 != a1 && (*(_WORD *)(*((_QWORD *)v33 + 5) + 42LL) & 0x2FFF) == 0x29D )
    v32 = 0LL;
  if ( v80 )
  {
    if ( v32 )
    {
      if ( v80 != v32 )
        ChangeRedirectionParentInDCEs(a1, 1LL);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v32 )
  {
    RedirectDCEs(a1, v32, v33);
  }
  if ( v7 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)a1, 1, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v41 = *((_QWORD *)a1 + 3);
    v42 = 0LL;
    if ( v41 )
    {
      v43 = *(_QWORD *)(v41 + 8);
      if ( v43 )
        v42 = *(_QWORD *)(v43 + 24);
    }
    if ( *((_QWORD *)a1 + 13) != v42 )
    {
      v34 = *(_QWORD *)(v23 + 16);
      v44 = *((_QWORD *)a1 + 2);
      if ( v44 != v34 )
        zzzAttachThreadInput(v44, v34, 0LL);
    }
    v45 = *((_QWORD *)a1 + 3);
    v46 = 0LL;
    if ( v45 )
    {
      v47 = *(_QWORD *)(v45 + 8);
      if ( v47 )
        v46 = *(_QWORD *)(v47 + 24);
    }
    if ( v7 != v46 )
    {
      v34 = *(_QWORD *)(v7 + 16);
      v48 = *((_QWORD *)a1 + 2);
      if ( v48 != v34 )
        zzzAttachThreadInput(v48, v34, a4 != 0 ? 32769 : 1);
    }
  }
  v35 = v74;
  if ( (struct tagWND *)v7 == v74 || (struct tagWND *)v23 == v74 )
    v36 = 21;
  else
    v36 = 5;
  if ( _bittest((const signed __int32 *)(v23 + 380), 0x13u) || _bittest((const signed __int32 *)a1 + 95, 0x13u) )
  {
    v34 = *((_QWORD *)a1 + 5);
    v56 = *(_DWORD *)(v34 + 288);
    if ( (v56 & 0xF) == 2 && (v56 & 0xF0) == 0x10 )
      *((_DWORD *)a1 + 95) &= ~0x80000u;
    *(_DWORD *)(v34 + 232) &= ~0x400u;
    v36 |= 0x20u;
  }
  if ( !(unsigned int)IsTopLevelWindow(a1, v34) && v7 )
    LOBYTE(v37) = *(_WORD *)(*(_QWORD *)(v7 + 40) + 286LL) != v38;
  SetDeferredDpiStateForWindowAndChildren((__int64 *)a1, v37, 0);
  if ( (_BYTE)BugCheckParameter3 )
    --*(_DWORD *)(v76 + 28);
  zzzEndDeferWinEventNotify();
  for ( i = *((_QWORD *)a1 + 13); i; i = *(_QWORD *)(i + 104) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 27LL) & 2) != 0 )
    {
      v76 = 0LL;
      BugCheckParameter3 = -1LL;
      xxxInternalEnumWindow(a1, xxxEnumTurnOffCompositing, 0LL, 1LL);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
      break;
    }
  }
  xxxWindowEvent(0x800Fu, a1, 0, 0, 1);
  if ( !v7 || (struct tagWND *)v7 == DesktopWindow || (struct tagWND *)v23 == DesktopWindow )
  {
    v40 = 0LL;
    goto LABEL_76;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v23 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL) )
  {
    v40 = v71;
LABEL_76:
    xxxSetWindowPos(a1, 0, 0, v36);
    goto LABEL_77;
  }
  v40 = BuildWindowListWithDpiBoundaryInfo(a1, (struct tagWND *)v23, 0LL, &v69);
  if ( !v69 )
    goto LABEL_76;
LABEL_77:
  v50 = (struct tagWND *)*((_QWORD *)a1 + 13);
  if ( !v50
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v50 + 5) + 288LL)) & 0xF) == 0
    || v50 == DesktopWindow
    || v50 == v35
    || IsChildWindowDpiIsolationEnabled(a1, v50) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 288LL));
  }
  if ( v40 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v40);
    FreeListFree(v40);
  }
  if ( v73 )
  {
    W32GetUserSessionState(v52, v51);
    xxxShowWindowEx(a1, 1u, 0);
  }
  v53 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v72);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v81);
  if ( v77[0] )
  {
    if ( v79 )
      PopAndFreeW32ThreadLock(v78);
  }
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v72);
  return (struct tagWND *)v53;
}
