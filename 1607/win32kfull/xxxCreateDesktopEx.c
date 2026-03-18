/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00D9F40
 * Callers:
 *     xxxResolveDesktop @ 0x1C00D93C0 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C00EB590 (xxxConnectService.c)
 *     NtUserCreateDesktopEx @ 0x1C012F1E0 (NtUserCreateDesktopEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C012F380 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     DwmAsyncDesktopCreate @ 0x1C0093418 (DwmAsyncDesktopCreate.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     OpenDesktopCompletion @ 0x1C00DA998 (OpenDesktopCompletion.c)
 *     _CloseDesktop @ 0x1C00DCA48 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C00EFD6C (DwmAsyncDesktopFree.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C012F380 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01DF1E4 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  struct tagWND *Window; // r13
  __int64 v8; // r12
  NTSTATUS v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  __int64 *v13; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // r9
  int v26; // r15d
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v31; // eax
  char v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  char v38; // cl
  struct tagWND *v39; // rax
  struct tagWINDOWSTATION *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // zf
  char v45; // al
  _DWORD *v46; // rax
  __int64 v47; // r9
  UserAtomicCheck *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  _DWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct tagWINDOWSTATION *v55; // rdx
  __int64 v56; // rcx
  void *v57; // rcx
  __int64 v58; // r9
  ULONG v59; // eax
  ULONG v60; // eax
  ULONG v61; // eax
  ULONG v62; // eax
  void *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // r11d
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  void *v80; // rax
  int Object; // [rsp+20h] [rbp-1B8h]
  HANDLE Handle; // [rsp+90h] [rbp-148h] BYREF
  BOOL v83; // [rsp+98h] [rbp-140h]
  struct tagWND *v84; // [rsp+A0h] [rbp-138h]
  int v85; // [rsp+A8h] [rbp-130h]
  _BYTE v86[8]; // [rsp+B0h] [rbp-128h] BYREF
  struct tagWINDOWSTATION *v87; // [rsp+B8h] [rbp-120h] BYREF
  int v88; // [rsp+C0h] [rbp-118h]
  PVOID v89; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-100h]
  HWINSTA v91; // [rsp+E0h] [rbp-F8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v92; // [rsp+E8h] [rbp-F0h] BYREF
  _BYTE v93[8]; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+F8h] [rbp-E0h]
  void *v95; // [rsp+100h] [rbp-D8h]
  _BYTE v96[8]; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v97[8]; // [rsp+118h] [rbp-C0h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+120h] [rbp-B8h] BYREF
  int v99; // [rsp+128h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+130h] [rbp-A8h]
  __int64 *v101; // [rsp+138h] [rbp-A0h]
  int v102; // [rsp+140h] [rbp-98h]
  int v103; // [rsp+144h] [rbp-94h]
  HWINSTA v104; // [rsp+148h] [rbp-90h]
  _QWORD v105[3]; // [rsp+158h] [rbp-80h] BYREF
  _QWORD v106[3]; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v107[3]; // [rsp+188h] [rbp-50h] BYREF
  _QWORD v108[4]; // [rsp+1A0h] [rbp-38h] BYREF

  Window = 0LL;
  v84 = 0LL;
  v8 = 0LL;
  v83 = 0;
  v85 = -1;
  v88 = 0;
  v91 = *(HWINSTA *)(a1 + 8);
  v104 = v91;
  v92.HandleAttributes = gSessionId;
  v92.GrantedAccess = a4;
  Object = a3;
  LOBYTE(a3) = a6 == 0;
  v9 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, Object, &v92, &Handle);
  v10 = v9;
  if ( v9 < 0 )
  {
    v59 = RtlNtStatusToDosError(v9);
    UserSetLastError(v59);
    CleanupDirtyDesktops();
LABEL_95:
    *a5 = 0LL;
    return (unsigned int)v10;
  }
  if ( v9 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v60 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v60);
      CloseProtectedHandle(Handle);
LABEL_80:
      v10 = -1073741801;
      goto LABEL_95;
    }
    *a5 = Handle;
    v83 = 1;
  }
  v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v89, 0LL);
  v12 = v11;
  v13 = (__int64 *)v89;
  if ( v11 < 0 )
  {
    v61 = RtlNtStatusToDosError(v11);
    UserSetLastError(v61);
    CloseProtectedHandle(Handle);
    v10 = v12;
    goto LABEL_95;
  }
  if ( v83 )
  {
    v10 = OpenDesktopCompletion(v89, Handle, a2);
    if ( v10 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v10;
  }
  v87 = (struct tagWINDOWSTATION *)*((_QWORD *)v89 + 3);
  v15 = *((_QWORD *)v87 + 3);
  v90 = *((_QWORD *)v89 + 1);
  *(_QWORD *)(v90 + 168) = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle);
    ObfDereferenceObject(v13);
    goto LABEL_80;
  }
  v19 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v99 = 1;
    v100 = gpepCSRSS;
    v101 = v13;
    v102 = 0;
    v103 = 1;
    v20 = MapDesktop((__int64)&v99);
    if ( v20 < 0 )
    {
      CloseProtectedHandle(Handle);
      ObfDereferenceObject(v13);
      v62 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v62);
      v10 = v20;
      goto LABEL_95;
    }
  }
  v24 = ReferenceDwmApiPort(v19, v16, v17, v18);
  if ( v24 )
  {
    if ( (*((_DWORD *)v87 + 8) & 0x200) != 0 )
    {
      v63 = (void *)ReferenceDwmApiPort(v21, v87, v22, v23);
      DwmAsyncDesktopCreate(v63, v13[5]);
      zzzComposeDesktop((struct tagDESKTOP *)v13);
      v88 = 1;
    }
    DereferenceDwmApiPort(v24);
  }
  v94 = *(_QWORD *)(gptiCurrent + 376LL);
  v83 = *(_QWORD *)(v94 + 304) == 0LL;
  v89 = *(PVOID *)(gptiCurrent + 408LL);
  v95 = *(void **)(gptiCurrent + 512LL);
  *(_QWORD *)(gptiCurrent + 376LL) = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL);
  PushW32ThreadLock((__int64)v13, v108, UserDereferenceObject, v23);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v86);
  v26 = zzzSetDesktop(gptiCurrent, (__int64)v13, Handle, v25);
  if ( v26 < 0 )
    goto LABEL_87;
  v27 = *(_DWORD *)(gptiCurrent + 440LL);
  v85 = v27 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 440LL) = v27 | 0x10000000;
  if ( !PsGetCurrentProcessWin32Process(v27 & 0x10000000, 0x10000000LL)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29, v28),
        v31 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v32 = 1,
        !v31) )
  {
    v32 = 0;
  }
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)0x8001,
                              32769LL,
                              0LL,
                              -2113929216,
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
                              v32,
                              0LL);
  if ( !Window )
    goto LABEL_86;
  v105[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v105;
  v105[1] = Window;
  ++*((_DWORD *)Window + 2);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent, v33)
    || (v36 = PsGetCurrentProcessWin32Process(v35, v34), v37 = IsImmersiveAppRestricted(v36), v38 = 1, !v37) )
  {
    v38 = 0;
  }
  v39 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (wchar_t *)(unsigned __int16)gatomMessage,
                           (unsigned __int16)gatomMessage,
                           0LL,
                           -2113929216,
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
                           v38,
                           0LL);
  v84 = v39;
  if ( !v39 )
  {
LABEL_86:
    v26 = -1073741801;
LABEL_87:
    v48 = (UserAtomicCheck *)v86;
    goto LABEL_88;
  }
  v106[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v106;
  v106[1] = v39;
  ++*((_DWORD *)v39 + 2);
  *((_WORD *)v39 + 33) = *((_WORD *)v39 + 33) & 0xC000 | 0x29F;
  HMAssignmentLock(v90 + 16, Window);
  SetOrClrWF(0, Window, 0x707u, 1);
  SetOrClrWF(1, Window, 0x702u, 1);
  v40 = v87;
  if ( (*((_DWORD *)v87 + 8) & 4) == 0 && !gspwndFullScreen )
    HMAssignmentLock(&gspwndFullScreen, Window);
  HMAssignmentLock((char *)v84 + 88, *(_QWORD *)(v15 + 8));
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v96);
  xxxInheritWindowMonitor(v84, 0LL, 0, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v96);
  LinkWindow(v84, 0LL, *(_QWORD *)(v15 + 8));
  HMAssignmentLock(v13 + 12, v84);
  HMAssignmentUnlock((char *)v84 + 104);
  HMAssignmentLock((char *)Window + 88, *(_QWORD *)(v15 + 8));
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v97);
  xxxInheritWindowMonitor(Window, 0LL, 0, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v97);
  LinkWindow(Window, 0LL, *(_QWORD *)(v15 + 8));
  HMAssignmentUnlock((char *)Window + 104);
  if ( (*(_DWORD *)(gpDispInfo + 180LL) & 1) == 0 )
    *((_QWORD *)Window + 25) = *(_QWORD *)(gpDispInfo + 152LL);
  if ( (*((_DWORD *)v40 + 8) & 4) == 0 )
  {
    if ( !PsGetCurrentProcessWin32Process(gpDispInfo, v41)
      || (v43 = PsGetCurrentProcessWin32Process(v42, 0LL),
          v44 = (unsigned int)IsImmersiveAppRestricted(v43) == 0,
          v45 = 1,
          v44) )
    {
      v45 = 0;
    }
    v46 = xxxCreateWindowEx(
            136,
            (wchar_t *)0x8006,
            32774LL,
            0LL,
            -2139095040,
            0,
            0,
            100,
            100,
            v13[12],
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
      HMAssignmentLock(v13 + 13, v46);
      v107[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v107;
      v107[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      goto LABEL_35;
    }
    goto LABEL_86;
  }
LABEL_35:
  HMChangeOwnerThread(*(_QWORD *)(v90 + 16), *(_QWORD *)(v15 + 16));
  HMChangeOwnerThread(v84, *(_QWORD *)(v15 + 16));
  if ( (*((_DWORD *)v40 + 8) & 4) == 0 )
    HMChangeOwnerThread(v8, *(_QWORD *)(v15 + 16));
  *(_QWORD *)(gptiCurrent + 376LL) = v94;
  *(_DWORD *)(gptiCurrent + 440LL) = v85 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
  v26 = zzzSetDesktop(gptiCurrent, (__int64)v89, v95, v47);
  v48 = (UserAtomicCheck *)v86;
  if ( v26 < 0 )
    goto LABEL_88;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v86);
  v52 = (_DWORD *)gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
  {
    xxxFlushDeferredWindowEvents();
    v52 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( *(_QWORD *)(v15 + 56) )
  {
    if ( (*(_DWORD *)v15 & 2) == 0 )
    {
      v55 = v87;
      *(_QWORD *)(gptiRit + 536LL) = v87;
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 536LL) = v55;
LABEL_63:
      KeSetEvent(*(PRKEVENT *)(v15 + 56), 1, 0);
      if ( (*(_DWORD *)v15 & 2) == 0 )
      {
        if ( gdwInAtomicOperation )
        {
          v56 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v56, gdwInAtomicOperation);
        while ( !grpdeskRitInput )
        {
          if ( gpEventSwitchDesktop )
          {
            Timeout.QuadPart = -200000LL;
            KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        EnterCrit(0LL, 1LL);
      }
      v57 = *(void **)(v15 + 56);
      if ( v57 )
      {
        ObfDereferenceObject(v57);
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      v52 = (_DWORD *)gpsi;
      *gpsi |= 0x800u;
      goto LABEL_42;
    }
    ++*v52;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v93);
    v26 = zzzSetDesktop(*(struct tagTHREADINFO **)(v15 + 16), (__int64)v13, 0LL, v58);
    v48 = (UserAtomicCheck *)v93;
    if ( v26 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v93);
      if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
      goto LABEL_63;
    }
LABEL_88:
    UserAtomicCheck::~UserAtomicCheck(v48);
    goto LABEL_97;
  }
LABEL_42:
  if ( (struct tagTERMINAL *const)v15 == gTermIO )
    xxxSetWindowPosAndBand(Window, 1, 0, 0, 0, 0, 1115, 0);
  if ( v83 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 376LL) + 304LL);
  if ( gspdeskDisconnect || v13 != grpdeskLogon )
    goto LABEL_47;
  if ( !xxxCreateDisconnectDesktop(v91, v87) )
  {
    if ( v8 )
      ThreadUnlock1(v54, v53);
    ThreadUnlock1(v54, v53);
    ThreadUnlock1(v65, v64);
    PopW32ThreadLock(v108, v66, v67, v68);
    ObfDereferenceObject(v13);
    CloseDesktop(Handle);
    v10 = -1073741823;
    goto LABEL_95;
  }
  KeSetEvent(gpEventDiconnectDesktop, 1, 0);
  gdwHydraHint |= 0x40000u;
  while ( 1 )
  {
LABEL_47:
    if ( v8 )
      v8 = ThreadUnlock1(v52, v49);
    if ( v84 )
      v84 = (struct tagWND *)ThreadUnlock1(v52, v49);
    if ( Window )
      Window = (struct tagWND *)ThreadUnlock1(v52, v49);
    PopW32ThreadLock(v108, v49, v50, v51);
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v26 = -1073741801;
LABEL_97:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v91);
    if ( v8 )
    {
      xxxDestroyWindow((_QWORD *)v8);
      HMAssignmentUnlock(v13 + 13);
    }
    if ( v84 )
    {
      xxxDestroyWindow(v84);
      HMAssignmentUnlock(v13 + 12);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      HMAssignmentUnlock(v90 + 16);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 376LL) = v94;
    if ( v85 != -1 )
      *(_DWORD *)(gptiCurrent + 440LL) = v85 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v91);
    gdwDeferWinEvent += v69;
    if ( !(v69 + gdwDeferWinEvent) && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v87);
    zzzSetDesktop(gptiCurrent, (__int64)v89, v95, v70);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v87);
    if ( v88 )
    {
      v75 = ReferenceDwmApiPort(v72, v71, v73, v74);
      if ( v75 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v13);
        v80 = (void *)ReferenceDwmApiPort(v77, v76, v78, v79);
        DwmAsyncDesktopFree(v80);
        DereferenceDwmApiPort(v75);
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( v83 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 376LL) + 304LL);
  }
  if ( v26 >= 0 )
    *((_DWORD *)v13 + 8) |= 0x10u;
  ObfDereferenceObject(v13);
  *a5 = Handle;
  return (unsigned int)v26;
}
