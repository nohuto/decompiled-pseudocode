/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00DBDE0
 * Callers:
 *     xxxResolveDesktop @ 0x1C00DB260 (xxxResolveDesktop.c)
 *     NtUserCreateDesktopEx @ 0x1C0152DE0 (NtUserCreateDesktopEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C0152ED8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C015A9D0 (xxxConnectService.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 *     _CloseDesktop @ 0x1C007D2C4 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     OpenDesktopCompletion @ 0x1C00DCAB8 (OpenDesktopCompletion.c)
 *     DwmAsyncDesktopFree @ 0x1C012B8C4 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x1C014ACB8 (DwmAsyncDesktopCreate.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C0152ED8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E834C (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  struct tagWND *Window; // r13
  __int64 v8; // r12
  NTSTATUS v9; // eax
  int v10; // ebx
  ULONG v11; // eax
  ULONG v12; // eax
  int v13; // eax
  int v14; // esi
  __int64 *v15; // rdi
  ULONG v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // r15d
  ULONG v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  void *v28; // rax
  int v29; // r15d
  UserAtomicCheck *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v34; // eax
  char v35; // r11
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  char v39; // cl
  struct tagWND *v40; // rax
  struct tagWINDOWSTATION *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // zf
  char v45; // al
  _DWORD *v46; // rax
  __int64 v47; // rdx
  _DWORD *v48; // rcx
  struct tagWINDOWSTATION *v49; // rdx
  __int64 v50; // rcx
  void *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v57; // r11d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  void *v67; // rax
  int Object; // [rsp+20h] [rbp-1A8h]
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  BOOL v70; // [rsp+98h] [rbp-130h]
  struct tagWND *v71; // [rsp+A0h] [rbp-128h]
  int v72; // [rsp+A8h] [rbp-120h]
  _BYTE v73[8]; // [rsp+B0h] [rbp-118h] BYREF
  struct tagWINDOWSTATION *v74; // [rsp+B8h] [rbp-110h] BYREF
  int v75; // [rsp+C0h] [rbp-108h]
  PVOID v76; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-F8h]
  HWINSTA v78[2]; // [rsp+D8h] [rbp-F0h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-E0h]
  void *v80; // [rsp+F0h] [rbp-D8h]
  _BYTE v81[8]; // [rsp+F8h] [rbp-D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v82; // [rsp+100h] [rbp-C8h] BYREF
  _BYTE v83[16]; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v84[8]; // [rsp+118h] [rbp-B0h] BYREF
  int v85; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+128h] [rbp-A0h]
  __int64 *v87; // [rsp+130h] [rbp-98h]
  int v88; // [rsp+138h] [rbp-90h]
  int v89; // [rsp+13Ch] [rbp-8Ch]
  HWINSTA v90; // [rsp+140h] [rbp-88h]
  _QWORD v91[3]; // [rsp+148h] [rbp-80h] BYREF
  _QWORD v92[3]; // [rsp+160h] [rbp-68h] BYREF
  _QWORD v93[3]; // [rsp+178h] [rbp-50h] BYREF
  _QWORD v94[4]; // [rsp+190h] [rbp-38h] BYREF

  Window = 0LL;
  v71 = 0LL;
  v8 = 0LL;
  v70 = 0;
  v72 = -1;
  v75 = 0;
  v78[0] = *(HWINSTA *)(a1 + 8);
  v90 = v78[0];
  v82.HandleAttributes = gSessionId;
  v82.GrantedAccess = a4;
  Object = a3;
  LOBYTE(a3) = a6 == 0;
  v9 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, Object, &v82, &Handle);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = RtlNtStatusToDosError(v9);
    UserSetLastError(v11);
    CleanupDirtyDesktops();
LABEL_77:
    *a5 = 0LL;
    return (unsigned int)v10;
  }
  if ( v9 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v12 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v12);
      CloseProtectedHandle(Handle, 0);
LABEL_6:
      v10 = -1073741801;
      goto LABEL_77;
    }
    *a5 = Handle;
    v70 = 1;
  }
  v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v76, 0LL);
  v14 = v13;
  v15 = (__int64 *)v76;
  if ( v13 < 0 )
  {
    v16 = RtlNtStatusToDosError(v13);
    UserSetLastError(v16);
    CloseProtectedHandle(Handle, 0);
    v10 = v14;
    goto LABEL_77;
  }
  if ( v70 )
  {
    v10 = OpenDesktopCompletion(v76, Handle, a2);
    if ( v10 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v10;
  }
  v74 = (struct tagWINDOWSTATION *)*((_QWORD *)v76 + 3);
  v17 = *((_QWORD *)v74 + 3);
  v77 = *((_QWORD *)v76 + 1);
  *(_QWORD *)(v77 + 168) = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v15);
    goto LABEL_6;
  }
  v21 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v85 = 1;
    v86 = gpepCSRSS;
    v87 = v15;
    v88 = 0;
    v89 = 1;
    v22 = MapDesktop((__int64)&v85);
    if ( v22 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v15);
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23);
      v10 = v22;
      goto LABEL_77;
    }
  }
  v27 = ReferenceDwmApiPort(v21, v18, v19, v20);
  if ( v27 )
  {
    if ( (*((_DWORD *)v74 + 8) & 0x200) != 0 )
    {
      v28 = (void *)ReferenceDwmApiPort(v24, v74, v25, v26);
      DwmAsyncDesktopCreate(v28);
      zzzComposeDesktop((struct tagDESKTOP *)v15);
      v75 = 1;
    }
    DereferenceDwmApiPort(v27);
  }
  v79 = *(_QWORD *)(gptiCurrent + 384LL);
  v70 = *(_QWORD *)(v79 + 312) == 0LL;
  v76 = *(PVOID *)(gptiCurrent + 416LL);
  v80 = *(void **)(gptiCurrent + 520LL);
  *(_QWORD *)(gptiCurrent + 384LL) = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 384LL);
  PushW32ThreadLock((__int64)v15, v93, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v73);
  v29 = zzzSetDesktop(gptiCurrent, (__int64)v15, Handle);
  if ( v29 < 0 )
    goto LABEL_24;
  v31 = *(_DWORD *)(gptiCurrent + 448LL);
  v72 = v31 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 448LL) = v31 | 0x10000000;
  if ( !PsGetCurrentProcessWin32Process(v31 & 0x10000000)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32),
        v34 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v35 = 1,
        !v34) )
  {
    v35 = 0;
  }
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)0x8001,
                              (char **)0x8001,
                              0LL,
                              0x82000000,
                              *(_DWORD *)(gpDispInfo + 104LL),
                              *(_DWORD *)(gpDispInfo + 108LL),
                              *(_DWORD *)(gpDispInfo + 112LL) - *(_DWORD *)(gpDispInfo + 104LL),
                              *(_DWORD *)(gpDispInfo + 116LL) - *(_DWORD *)(gpDispInfo + 108LL),
                              0LL,
                              0LL,
                              hModuleWin,
                              0LL,
                              1u,
                              0x30Au,
                              v35,
                              0LL);
  if ( !Window )
    goto LABEL_30;
  v92[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v92;
  v92[1] = Window;
  ++*((_DWORD *)Window + 2);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (v37 = PsGetCurrentProcessWin32Process(v36), v38 = IsImmersiveAppRestricted(v37), v39 = 1, !v38) )
  {
    v39 = 0;
  }
  v40 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (wchar_t *)(unsigned __int16)gatomMessage,
                           (char **)(unsigned __int16)gatomMessage,
                           0LL,
                           0x82000000,
                           0,
                           0,
                           100,
                           100,
                           0LL,
                           0LL,
                           hModuleWin,
                           0LL,
                           1u,
                           0x30Au,
                           v39,
                           0LL);
  v71 = v40;
  if ( !v40 )
    goto LABEL_30;
  v94[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v94;
  v94[1] = v40;
  ++*((_DWORD *)v40 + 2);
  *((_WORD *)v40 + 33) = *((_WORD *)v40 + 33) & 0xC000 | 0x29F;
  HMAssignmentLock(v77 + 16, Window);
  SetOrClrWF(0, Window, 0x707u, 1);
  SetOrClrWF(1, Window, 0x702u, 1);
  v41 = v74;
  if ( (*((_DWORD *)v74 + 8) & 4) == 0 && !gspwndFullScreen )
    HMAssignmentLock(&gspwndFullScreen, Window);
  HMAssignmentLock((char *)v71 + 88, *(_QWORD *)(v17 + 8));
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v83);
  xxxInheritWindowMonitor(v71, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v83);
  LinkWindow(v71, 0LL, *(_QWORD *)(v17 + 8));
  HMAssignmentLock(v15 + 12, v71);
  HMAssignmentUnlock((char *)v71 + 104);
  HMAssignmentLock((char *)Window + 88, *(_QWORD *)(v17 + 8));
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v84);
  xxxInheritWindowMonitor(Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v84);
  LinkWindow(Window, 0LL, *(_QWORD *)(v17 + 8));
  HMAssignmentUnlock((char *)Window + 104);
  if ( (*(_DWORD *)(gpDispInfo + 180LL) & 1) == 0 )
    *((_QWORD *)Window + 25) = *(_QWORD *)(gpDispInfo + 152LL);
  if ( (*((_DWORD *)v41 + 8) & 4) == 0 )
  {
    if ( !PsGetCurrentProcessWin32Process(gpDispInfo)
      || (v43 = PsGetCurrentProcessWin32Process(v42),
          v44 = (unsigned int)IsImmersiveAppRestricted(v43) == 0,
          v45 = 1,
          v44) )
    {
      v45 = 0;
    }
    v46 = xxxCreateWindowEx(
            136,
            (wchar_t *)0x8006,
            (char **)0x8006,
            0LL,
            0x80800000,
            0,
            0,
            100,
            100,
            v15[12],
            0LL,
            hModuleWin,
            0LL,
            1u,
            0x30Au,
            v45,
            0LL);
    v8 = (__int64)v46;
    if ( v46 )
    {
      HMAssignmentLock(v15 + 13, v46);
      v91[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v91;
      v91[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      goto LABEL_46;
    }
LABEL_30:
    v29 = -1073741801;
LABEL_24:
    v30 = (UserAtomicCheck *)v73;
    goto LABEL_25;
  }
LABEL_46:
  HMChangeOwnerThread(*(_QWORD *)(v77 + 16), *(_QWORD *)(v17 + 16));
  HMChangeOwnerThread(v71, *(_QWORD *)(v17 + 16));
  if ( (*((_DWORD *)v41 + 8) & 4) == 0 )
    HMChangeOwnerThread(v8, *(_QWORD *)(v17 + 16));
  *(_QWORD *)(gptiCurrent + 384LL) = v79;
  *(_DWORD *)(gptiCurrent + 448LL) = v72 | *(_DWORD *)(gptiCurrent + 448LL) & 0xEFFFFFFF;
  v29 = zzzSetDesktop(gptiCurrent, (__int64)v76, v80);
  v30 = (UserAtomicCheck *)v73;
  if ( v29 >= 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v73);
    v48 = (_DWORD *)gdwDeferWinEvent;
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    {
      xxxFlushDeferredWindowEvents();
      v48 = (_DWORD *)gdwDeferWinEvent;
    }
    if ( !*(_QWORD *)(v17 + 56) )
      goto LABEL_67;
    if ( (*(_DWORD *)v17 & 2) == 0 )
    {
      v49 = v74;
      *(_QWORD *)(gptiRit + 544LL) = v74;
      *(_QWORD *)(*(_QWORD *)(v17 + 16) + 544LL) = v49;
LABEL_59:
      KeSetEvent(*(PRKEVENT *)(v17 + 56), 1, 0);
      if ( (*(_DWORD *)v17 & 2) == 0 )
      {
        UserSessionSwitchLeaveCrit(v50, v47);
        while ( !grpdeskRitInput )
          UserSleep(20LL);
        EnterCrit(1LL);
      }
      v51 = *(void **)(v17 + 56);
      if ( v51 )
      {
        ObfDereferenceObject(v51);
        *(_QWORD *)(v17 + 56) = 0LL;
      }
      v48 = (_DWORD *)gpsi;
      *gpsi |= 0x800u;
LABEL_67:
      if ( (struct tagTERMINAL *const)v17 == gTermIO )
        xxxSetWindowPosAndBand(Window, 1LL, 0, 0, 0, 0, 1115, 0);
      if ( v70 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 384LL) + 312LL);
      if ( gspdeskDisconnect || v15 != grpdeskLogon )
        goto LABEL_80;
      if ( xxxCreateDisconnectDesktop(v78[0], v74) )
      {
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
        goto LABEL_80;
      }
      if ( v8 )
        ThreadUnlock1(v53, v52);
      ThreadUnlock1(v53, v52);
      ThreadUnlock1(v55, v54);
      PopW32ThreadLock(v93);
      ObfDereferenceObject(v15);
      CloseDesktop((unsigned __int64)Handle, 0);
      v10 = -1073741823;
      goto LABEL_77;
    }
    ++*v48;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v81);
    v29 = zzzSetDesktop(*(struct tagTHREADINFO **)(v17 + 16), (__int64)v15, 0LL);
    v30 = (UserAtomicCheck *)v81;
    if ( v29 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v81);
      if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
      goto LABEL_59;
    }
  }
LABEL_25:
  UserAtomicCheck::~UserAtomicCheck(v30);
  while ( 1 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v78);
    if ( v8 )
    {
      xxxDestroyWindow(v8);
      HMAssignmentUnlock(v15 + 13);
    }
    if ( v71 )
    {
      xxxDestroyWindow((__int64)v71);
      HMAssignmentUnlock(v15 + 12);
    }
    if ( Window )
    {
      xxxDestroyWindow((__int64)Window);
      HMAssignmentUnlock(v77 + 16);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 384LL) = v79;
    if ( v72 != -1 )
      *(_DWORD *)(gptiCurrent + 448LL) = v72 | *(_DWORD *)(gptiCurrent + 448LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v78);
    gdwDeferWinEvent += v57;
    if ( !(v57 + gdwDeferWinEvent) && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v74);
    zzzSetDesktop(gptiCurrent, (__int64)v76, v80);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v74);
    if ( v75 )
    {
      v62 = ReferenceDwmApiPort(v59, v58, v60, v61);
      if ( v62 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v15);
        v67 = (void *)ReferenceDwmApiPort(v64, v63, v65, v66);
        DwmAsyncDesktopFree(v67);
        DereferenceDwmApiPort(v62);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( v70 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 384LL) + 312LL);
LABEL_80:
    if ( v8 )
      v8 = ThreadUnlock1(v48, v47);
    if ( v71 )
      v71 = (struct tagWND *)ThreadUnlock1(v48, v47);
    if ( Window )
      Window = (struct tagWND *)ThreadUnlock1(v48, v47);
    PopW32ThreadLock(v93);
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v29 = -1073741801;
  }
  if ( v29 >= 0 )
    *((_DWORD *)v15 + 8) |= 0x10u;
  ObfDereferenceObject(v15);
  *a5 = Handle;
  return (unsigned int)v29;
}
