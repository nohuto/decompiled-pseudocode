/*
 * XREFs of xxxCreateDesktopEx @ 0x14018BC74
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x14018AF90 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x14018B600 (xxxConnectService.c)
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 *     EditionCreateDesktopEntryPoint @ 0x1402AE8F0 (EditionCreateDesktopEntryPoint.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x14002300C (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x14018AF90 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     _CloseDesktop @ 0x14018B418 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     OpenDesktopCompletion @ 0x1401A20EC (OpenDesktopCompletion.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401DE278 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     DwmAsyncDesktopFree @ 0x140248B44 (DwmAsyncDesktopFree.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DwmAsyncDesktopCreate @ 0x1402910D8 (DwmAsyncDesktopCreate.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x140295BD8 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, int a3, int a4, HANDLE *a5, int a6)
{
  struct tagWND *Window; // r13
  struct tagTHREADINFO *v10; // rsi
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r8
  NTSTATUS v14; // eax
  int v15; // ebx
  int v16; // eax
  char *v17; // r15
  struct tagWINDOWSTATION *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  __int64 UserSessionState; // rax
  int v28; // edi
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  char v35; // di
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // edi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct tagWND *v47; // rbx
  int v48; // ecx
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  volatile signed __int32 *v55; // rcx
  __int64 v56; // rax
  struct tagWINDOWSTATION *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 i; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  void *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  struct tagWND *v81; // rbx
  char v82; // bl
  bool v83; // r12
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  _QWORD *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r12
  void *v91; // rax
  char v93; // [rsp+90h] [rbp-188h]
  bool v94; // [rsp+91h] [rbp-187h]
  HANDLE Handle; // [rsp+98h] [rbp-180h] BYREF
  _BYTE v96[16]; // [rsp+A0h] [rbp-178h] BYREF
  union _LARGE_INTEGER Timeout[2]; // [rsp+B0h] [rbp-168h] BYREF
  unsigned int v98; // [rsp+C0h] [rbp-158h]
  struct tagWND *v99; // [rsp+C8h] [rbp-150h]
  BOOL v100; // [rsp+D0h] [rbp-148h]
  signed __int32 v101; // [rsp+D4h] [rbp-144h]
  int v102; // [rsp+D8h] [rbp-140h]
  _BYTE v103[32]; // [rsp+E0h] [rbp-138h] BYREF
  struct tagWINDOWSTATION *v104; // [rsp+100h] [rbp-118h]
  _DWORD v105[2]; // [rsp+108h] [rbp-110h] BYREF
  PVOID Object; // [rsp+110h] [rbp-108h] BYREF
  _QWORD *v107; // [rsp+118h] [rbp-100h]
  __int64 v108; // [rsp+120h] [rbp-F8h]
  void *v109; // [rsp+128h] [rbp-F0h]
  __int64 v110; // [rsp+130h] [rbp-E8h]
  __int64 v111; // [rsp+138h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+140h] [rbp-D8h] BYREF
  ULONG_PTR v113[2]; // [rsp+150h] [rbp-C8h] BYREF
  HWINSTA v114[2]; // [rsp+160h] [rbp-B8h] BYREF
  _QWORD v115[3]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v116[5]; // [rsp+188h] [rbp-90h] BYREF
  int v117; // [rsp+1B0h] [rbp-68h]
  int v118; // [rsp+1B4h] [rbp-64h]
  HWINSTA v119; // [rsp+1B8h] [rbp-60h]
  _BYTE v120[16]; // [rsp+1C0h] [rbp-58h] BYREF
  __int64 v121[4]; // [rsp+1D0h] [rbp-48h] BYREF

  Handle = 0LL;
  Window = 0LL;
  v99 = 0LL;
  v10 = PtiCurrent(a1);
  v11 = 0;
  v102 = 0;
  v98 = 0;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v113);
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v114[0] = *(HWINSTA *)(a1 + 8);
  v119 = v114[0];
  v105[0] = W32GetCurrentWin32kSessionId(v12);
  v105[1] = a4;
  LOBYTE(v13) = a6 == 0;
  v14 = ObOpenObjectByName(a1, ExDesktopObjectType, v13, 0LL, a3, v105, &Handle);
  v15 = v14;
  if ( v14 < 0 )
  {
    SetLastNtError(v14);
    CleanupDirtyDesktops();
LABEL_9:
    *a5 = 0LL;
    goto LABEL_123;
  }
  if ( v14 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL) )
    {
      SetLastNtError(-1073741801);
      CloseProtectedHandle(Handle, 0);
      v15 = -1073741801;
      goto LABEL_9;
    }
    *a5 = Handle;
    v11 = 1;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v15 = v16;
  v17 = (char *)Object;
  if ( v16 < 0 )
  {
    SetLastNtError(v16);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_9;
  }
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v115,
    (__int64)Object,
    UserDereferenceObject);
  if ( v11 )
  {
    v15 = OpenDesktopCompletion(v17, Handle, a2);
    if ( v15 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    goto LABEL_13;
  }
  v18 = (struct tagWINDOWSTATION *)*((_QWORD *)v17 + 5);
  v104 = v18;
  v19 = *((_QWORD *)v18 + 3);
  v107 = (_QWORD *)*((_QWORD *)v17 + 1);
  v107[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL) )
  {
    CloseProtectedHandle(Handle, 0);
    *a5 = 0LL;
    Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v115);
    v15 = -1073741801;
    goto LABEL_123;
  }
  if ( *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40) )
  {
    v116[0] = 0LL;
    v116[1] = 0LL;
    v116[2] = 1LL;
    v116[3] = *(_QWORD *)(W32GetUserGdiSessionState(v22) + 40);
    v116[4] = (__int64)v17;
    v117 = 0;
    v118 = 1;
    v15 = MapDesktop((__int64)v116);
    if ( v15 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      SetLastNtError(-1073741790);
      *a5 = 0LL;
LABEL_13:
      Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v115);
      goto LABEL_123;
    }
    v18 = v104;
  }
  v24 = ReferenceDwmApiPort(v22, v21);
  if ( v24 )
  {
    if ( (*((_DWORD *)v18 + 8) & 0x200) != 0 )
    {
      v25 = (void *)ReferenceDwmApiPort(**((_QWORD **)v17 + 1), v23);
      DwmAsyncDesktopCreate(v25);
      zzzComposeDesktop((struct tagDESKTOP *)v17);
      v102 = 1;
    }
    DereferenceDwmApiPort(v24);
  }
  v108 = *((_QWORD *)v10 + 57);
  v111 = *(_QWORD *)(v108 + 344);
  v101 = _InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 0x20000000;
  v94 = v101 != 0;
  v26 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 456LL);
  *((_QWORD *)v10 + 57) = v26;
  if ( (*(_DWORD *)(v26 + 12) & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)v10 + 130, 0x20000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)v10 + 130, 0xDFFFFFFF);
  v100 = (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 0x20000000) != 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 0x10000000) != 0 )
  {
    v93 = 0;
  }
  else
  {
    v93 = 1;
    _InterlockedOr((volatile signed __int32 *)v10 + 130, 0x10000000u);
  }
  v110 = *((_QWORD *)v10 + 61);
  v109 = (void *)*((_QWORD *)v10 + 78);
  UserSessionState = W32GetUserSessionState(0x10000000LL, v23);
  ++*(_DWORD *)(UserSessionState + 70592);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v103);
  v28 = zzzSetDesktop((__int64)v10, (__int64)v17, Handle);
  if ( v28 < 0 )
    goto LABEL_31;
  v98 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  *(_OWORD *)&Timeout[0].LowPart = *(_OWORD *)GetPhysicalScreenRect(Timeout);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
  v32 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v31 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v32 = v31 & CurrentProcessWin32Process;
  }
  if ( !v32 )
    goto LABEL_38;
  v33 = PsGetCurrentProcessWin32Process(v31);
  v34 = v33;
  if ( v33 )
    v34 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v33 >> 64) & v33;
  v35 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v34) )
LABEL_38:
    v35 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v121, 0);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)0x8001,
                              32769LL,
                              0LL,
                              0x82000000,
                              Timeout[0].LowPart,
                              Timeout[0].HighPart,
                              Timeout[1].LowPart - Timeout[0].LowPart,
                              Timeout[1].HighPart - Timeout[0].HighPart,
                              0LL,
                              (__int64 **)v121,
                              hModuleWin,
                              0LL,
                              1u,
                              0x30Au,
                              v35,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v121);
  if ( !Window )
    goto LABEL_40;
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v113, (__int64)Window);
  v37 = PsGetCurrentProcessWin32Process(v36);
  if ( !v37 || (-(__int64)(*(_QWORD *)v37 != 0LL) & v37) == 0 )
    goto LABEL_46;
  v38 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v37);
  v39 = v38;
  if ( v38 )
    v39 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v38 >> 64) & v38;
  v40 = IsImmersiveAppRestricted(v39);
  Timeout[0].LowPart = 1;
  if ( !v40 )
LABEL_46:
    Timeout[0].LowPart = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v116, 0);
  v43 = *(unsigned __int16 *)(W32GetUserSessionState(v42, v41) + 41368);
  v46 = W32GetUserSessionState(v45, v44);
  v47 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (wchar_t *)*(unsigned __int16 *)(v46 + 41368),
                           v43,
                           0LL,
                           0x82000000,
                           0,
                           0,
                           100,
                           100,
                           0LL,
                           (__int64 **)v116,
                           hModuleWin,
                           0LL,
                           1u,
                           0x30Au,
                           Timeout[0].QuadPart,
                           0LL);
  v99 = v47;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v116);
  if ( !v47 )
  {
LABEL_40:
    v28 = -1073741801;
LABEL_31:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v103);
    goto LABEL_103;
  }
  v48 = *(unsigned __int16 *)(*((_QWORD *)v47 + 5) + 42LL);
  if ( (v48 & 0xFFFF3FFF) != 0 )
  {
    if ( (v48 & 0x1000) != 0 )
    {
      Timeout[0].LowPart = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2261LL);
    }
    v28 = -1073741790;
    goto LABEL_31;
  }
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v47);
  *(_WORD *)(*((_QWORD *)v47 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v47 + 5) + 42LL) & 0xC000 | 0x29F;
  v49 = v107 + 3;
  *(_QWORD *)(*v107 + 8LL) = *((_QWORD *)Window + 6);
  Timeout[0].QuadPart = (LONGLONG)v49;
  Timeout[1].QuadPart = (LONGLONG)Window;
  HMAssignmentLock(Timeout, 0LL);
  *(_OWORD *)&Timeout[0].LowPart = *(_OWORD *)LockPointer(v120, (char *)v47 + 104);
  HMAssignmentLock(Timeout, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)Timeout);
  xxxInheritWindowMonitor(v47, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)Timeout);
  LinkWindow(v47, 0LL, *(_QWORD *)(v19 + 8));
  Timeout[0].QuadPart = (LONGLONG)(v17 + 112);
  Timeout[1].QuadPart = (LONGLONG)v47;
  HMAssignmentLock(Timeout, 0LL);
  *(_QWORD *)(*((_QWORD *)v47 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)v47 + 120);
  *(_OWORD *)&Timeout[0].LowPart = *(_OWORD *)LockPointer(v120, (char *)Window + 104);
  HMAssignmentLock(Timeout, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)Timeout);
  xxxInheritWindowMonitor(Window, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)Timeout);
  LinkWindow(Window, 0LL, *(_QWORD *)(v19 + 8));
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)Window + 120);
  v52 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 56968);
  if ( (*(_DWORD *)(v52 + 132) & 1) == 0 )
    *(_QWORD *)(*((_QWORD *)Window + 5) + 168LL) = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v53, v52) + 56968)
                                                             + 120LL);
  HMChangeOwnerThread(*v49, *(_QWORD *)(v19 + 16));
  HMChangeOwnerThread(v47, *(_QWORD *)(v19 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v98);
  v98 = 0;
  *((_QWORD *)v10 + 57) = v108;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 0x10000000) == 0 )
  {
    Timeout[0].LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2333LL);
  }
  if ( v93 )
    _InterlockedAnd((volatile signed __int32 *)v10 + 130, 0xEFFFFFFF);
  if ( v100 != v94 )
  {
    if ( v101 )
      _InterlockedOr((volatile signed __int32 *)v10 + 130, 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)v10 + 130, 0xDFFFFFFF);
  }
  v28 = zzzSetDesktop((__int64)v10, v110, v109);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v103);
  if ( v28 >= 0 )
  {
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(v19 + 56) )
      goto LABEL_79;
    if ( (*(_DWORD *)v19 & 2) == 0 )
    {
      v56 = W32GetUserSessionState(v55, v54);
      v57 = v104;
      *(_QWORD *)(*(_QWORD *)(v56 + 18696) + 648LL) = v104;
      *(_QWORD *)(*(_QWORD *)(v19 + 16) + 648LL) = v57;
LABEL_68:
      KeSetEvent(*(PRKEVENT *)(v19 + 56), 1, 0);
      if ( (*(_DWORD *)v19 & 2) == 0 )
      {
        LOBYTE(v59) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v96, v59);
        for ( i = W32GetUserSessionState(v61, v60); !*(_QWORD *)(i + 19176); i = W32GetUserSessionState(v69, v68) )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v64, v63) + 62960) )
          {
            Timeout[0].QuadPart = -200000LL;
            v67 = W32GetUserSessionState(v66, v65);
            KeWaitForSingleObject(*(PVOID *)(v67 + 62960), Executive, 0, 0, Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v96);
      }
      v70 = *(void **)(v19 + 56);
      if ( v70 )
      {
        ObfDereferenceObject(v70);
        *(_QWORD *)(v19 + 56) = 0LL;
      }
      v55 = *(volatile signed __int32 **)(W32GetUserSessionState(v70, v59) + 19904);
      _InterlockedOr(v55, 0x800u);
LABEL_79:
      if ( v19 == W32GetUserSessionState(v55, v54) + 68456 )
        xxxSetWindowPos(Window, 1LL, 0LL, 0LL, 0, 0, 1115);
      if ( !v111 )
        DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(*((_QWORD *)v10 + 57) + 344LL), v71);
      if ( !*(_QWORD *)(W32GetUserSessionState(v72, v71) + 62976)
        && v17 == *(char **)(W32GetUserSessionState(v74, v73) + 62968) )
      {
        if ( !(unsigned int)xxxCreateDisconnectDesktop(v114[0], v104) )
        {
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v113);
          CloseDesktop((unsigned __int64)Handle, 0);
          *a5 = 0LL;
          Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v115);
          v15 = -1073741823;
          goto LABEL_123;
        }
        v77 = W32GetUserSessionState(v76, v75);
        KeSetEvent(*(PRKEVENT *)(v77 + 62800), 1, 0);
        v80 = W32GetUserSessionState(v79, v78);
        *(_DWORD *)(v80 + 68928) |= 0x40000u;
      }
      v81 = v99;
      goto LABEL_89;
    }
    v58 = W32GetUserSessionState(v55, v54);
    ++*(_DWORD *)(v58 + 70592);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v103);
    v28 = zzzSetDesktop(*(_QWORD *)(v19 + 16), (__int64)v17, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v103);
    if ( v28 >= 0 )
    {
      zzzEndDeferWinEventNotify();
      goto LABEL_68;
    }
  }
  while ( 1 )
  {
LABEL_103:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v103);
    if ( v98 )
      W32SetCurrentThreadDpiAwarenessContext(v98);
    v81 = v99;
    if ( v99 )
    {
      xxxDestroyWindow(v99);
      HMAssignmentUnlock(v17 + 112);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      v87 = v107 + 3;
      *(_QWORD *)(*v107 + 8LL) = 0LL;
      HMAssignmentUnlock(v87);
    }
    *((_QWORD *)v10 + 57) = v108;
    if ( v93 )
      _InterlockedAnd((volatile signed __int32 *)v10 + 130, 0xEFFFFFFF);
    if ( v100 != v94 )
    {
      if ( v101 )
        _InterlockedOr((volatile signed __int32 *)v10 + 130, 0x20000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)v10 + 130, 0xDFFFFFFF);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v103);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v114);
    zzzSetDesktop((__int64)v10, v110, v109);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v114);
    if ( v102 )
    {
      v90 = ReferenceDwmApiPort(v89, v88);
      if ( v90 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v17, 0);
        v91 = (void *)ReferenceDwmApiPort(*((_QWORD *)v17 + 1), **((_QWORD **)v17 + 1));
        DwmAsyncDesktopFree(v91);
        DereferenceDwmApiPort(v90);
        v81 = v99;
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v111 )
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(*((_QWORD *)v10 + 57) + 344LL), v73);
LABEL_89:
    if ( v81 )
      v99 = (struct tagWND *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
    if ( Window )
      Window = (struct tagWND *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v113);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v82 = 0;
    }
    v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v82 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v84 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v73);
      LOBYTE(v85) = v83;
      LOBYTE(v86) = v82;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v86,
        v85,
        *(_QWORD *)(v84 + 69152),
        4,
        3,
        23,
        (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL) )
      break;
    v28 = -1073741801;
  }
  if ( v28 >= 0 )
    *((_DWORD *)v17 + 12) |= 0x10u;
  *a5 = Handle;
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v115);
  v15 = v28;
LABEL_123:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v113);
  return (unsigned int)v15;
}
