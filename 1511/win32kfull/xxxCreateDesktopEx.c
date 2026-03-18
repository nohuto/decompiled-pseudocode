/*
 * XREFs of xxxCreateDesktopEx @ 0x1C0121340
 * Callers:
 *     NtUserCreateDesktopEx @ 0x1C010E0B0 (NtUserCreateDesktopEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C010E1A8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxResolveDesktop @ 0x1C01207C0 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C0150634 (xxxConnectService.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     _CloseDesktop @ 0x1C00CEB48 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00CEC44 (CloseProtectedHandle.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x1C00D2D38 (DwmAsyncDesktopCreate.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C00D4088 (DwmAsyncDesktopFree.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C010E1A8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C0122050 (OpenDesktopCompletion.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E897C (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  __int64 Window; // r13
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
  __int64 v40; // rax
  struct tagWINDOWSTATION *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // zf
  char v45; // al
  __int64 v46; // rax
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
  int Object; // [rsp+20h] [rbp-1B8h]
  HANDLE Handle; // [rsp+90h] [rbp-148h] BYREF
  BOOL v70; // [rsp+98h] [rbp-140h]
  struct tagWND *v71; // [rsp+A0h] [rbp-138h]
  int v72; // [rsp+A8h] [rbp-130h]
  _BYTE v73[8]; // [rsp+B0h] [rbp-128h] BYREF
  struct tagWINDOWSTATION *v74; // [rsp+B8h] [rbp-120h] BYREF
  int v75; // [rsp+C0h] [rbp-118h]
  PVOID v76; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-108h]
  HWINSTA v78[2]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-F0h]
  _BYTE v80[8]; // [rsp+F0h] [rbp-E8h] BYREF
  void *v81; // [rsp+F8h] [rbp-E0h]
  struct _OBJECT_HANDLE_INFORMATION v82; // [rsp+100h] [rbp-D8h] BYREF
  _BYTE v83[8]; // [rsp+108h] [rbp-D0h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v85[8]; // [rsp+120h] [rbp-B8h] BYREF
  int v86; // [rsp+128h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+130h] [rbp-A8h]
  __int64 *v88; // [rsp+138h] [rbp-A0h]
  int v89; // [rsp+140h] [rbp-98h]
  int v90; // [rsp+144h] [rbp-94h]
  HWINSTA v91; // [rsp+148h] [rbp-90h]
  _QWORD v92[3]; // [rsp+150h] [rbp-88h] BYREF
  _QWORD v93[3]; // [rsp+168h] [rbp-70h] BYREF
  _QWORD v94[3]; // [rsp+180h] [rbp-58h] BYREF
  _QWORD v95[5]; // [rsp+198h] [rbp-40h] BYREF

  Window = 0LL;
  v71 = 0LL;
  v8 = 0LL;
  v70 = 0;
  v72 = -1;
  v75 = 0;
  v78[0] = *(HWINSTA *)(a1 + 8);
  v91 = v78[0];
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
LABEL_79:
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
      goto LABEL_79;
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
    goto LABEL_79;
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
    v86 = 1;
    v87 = gpepCSRSS;
    v88 = v15;
    v89 = 0;
    v90 = 1;
    v22 = MapDesktop((__int64)&v86);
    if ( v22 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v15);
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23);
      v10 = v22;
      goto LABEL_79;
    }
  }
  v27 = ReferenceDwmApiPort(v21, v18, v19, v20);
  if ( v27 )
  {
    if ( (*((_DWORD *)v74 + 8) & 0x200) != 0 )
    {
      v28 = (void *)ReferenceDwmApiPort(v24, v74, v25, v26);
      DwmAsyncDesktopCreate(v28, v15[5]);
      zzzComposeDesktop((struct tagDESKTOP *)v15);
      v75 = 1;
    }
    DereferenceDwmApiPort(v27);
  }
  v79 = *(_QWORD *)(gptiCurrent + 376LL);
  v70 = *(_QWORD *)(v79 + 312) == 0LL;
  v76 = *(PVOID *)(gptiCurrent + 408LL);
  v81 = *(void **)(gptiCurrent + 512LL);
  *(_QWORD *)(gptiCurrent + 376LL) = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 376LL);
  PushW32ThreadLock((__int64)v15, v94, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v73);
  v29 = zzzSetDesktop(gptiCurrent, (__int64)v15, Handle);
  if ( v29 < 0 )
    goto LABEL_24;
  v31 = *(_DWORD *)(gptiCurrent + 440LL);
  v72 = v31 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 440LL) = v31 | 0x10000000;
  if ( !PsGetCurrentProcessWin32Process(v31 & 0x10000000)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32),
        v34 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v35 = 1,
        !v34) )
  {
    v35 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             0x8001uLL,
             32769LL,
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
  v93[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v93;
  v93[1] = Window;
  ++*(_DWORD *)(Window + 8);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (v37 = PsGetCurrentProcessWin32Process(v36), v38 = IsImmersiveAppRestricted(v37), v39 = 1, !v38) )
  {
    v39 = 0;
  }
  v40 = xxxCreateWindowEx(
          0,
          (unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
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
  v71 = (struct tagWND *)v40;
  if ( !v40 )
    goto LABEL_30;
  v95[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v95;
  v95[1] = v40;
  ++*(_DWORD *)(v40 + 8);
  *(_WORD *)(v40 + 66) = *(_WORD *)(v40 + 66) & 0xC000 | 0x29F;
  HMAssignmentLock(v77 + 16, Window);
  SetOrClrWF(0, (_DWORD *)Window, 0x707u, 1);
  SetOrClrWF(1, (_DWORD *)Window, 0x702u, 1);
  v41 = v74;
  if ( (*((_DWORD *)v74 + 8) & 4) == 0 && !gspwndFullScreen )
    HMAssignmentLock(&gspwndFullScreen, Window);
  HMAssignmentLock((char *)v71 + 88, *(_QWORD *)(v17 + 8));
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v85);
  xxxInheritWindowMonitor(v71, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v85);
  LinkWindow(v71, 0LL, *(_QWORD *)(v17 + 8));
  HMAssignmentLock(v15 + 12, v71);
  HMAssignmentUnlock((char *)v71 + 104);
  HMAssignmentLock(Window + 88, *(_QWORD *)(v17 + 8));
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v83);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v83);
  LinkWindow((struct tagWND *)Window, 0LL, *(_QWORD *)(v17 + 8));
  HMAssignmentUnlock(Window + 104);
  if ( (*(_DWORD *)(gpDispInfo + 180LL) & 1) == 0 )
    *(_QWORD *)(Window + 200) = *(_QWORD *)(gpDispInfo + 152LL);
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
            0x8006uLL,
            32774LL,
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
    v8 = v46;
    if ( v46 )
    {
      HMAssignmentLock(v15 + 13, v46);
      v92[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v92;
      v92[1] = v8;
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
  *(_QWORD *)(gptiCurrent + 376LL) = v79;
  *(_DWORD *)(gptiCurrent + 440LL) = v72 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
  v29 = zzzSetDesktop(gptiCurrent, (__int64)v76, v81);
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
      goto LABEL_69;
    if ( (*(_DWORD *)v17 & 2) == 0 )
    {
      v49 = v74;
      *(_QWORD *)(gptiRit + 536LL) = v74;
      *(_QWORD *)(*(_QWORD *)(v17 + 16) + 536LL) = v49;
LABEL_59:
      KeSetEvent(*(PRKEVENT *)(v17 + 56), 1, 0);
      if ( (*(_DWORD *)v17 & 2) == 0 )
      {
        UserSessionSwitchLeaveCrit(v50, v47);
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
      v51 = *(void **)(v17 + 56);
      if ( v51 )
      {
        ObfDereferenceObject(v51);
        *(_QWORD *)(v17 + 56) = 0LL;
      }
      v48 = (_DWORD *)gpsi;
      *gpsi |= 0x800u;
LABEL_69:
      if ( (struct tagTERMINAL *const)v17 == gTermIO )
        xxxSetWindowPosAndBand((struct tagWND *)Window, 1, 0, 0, 0, 0, 1115, 0);
      if ( v70 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 376LL) + 312LL);
      if ( gspdeskDisconnect || v15 != grpdeskLogon )
        goto LABEL_82;
      if ( (unsigned int)xxxCreateDisconnectDesktop(v78[0], v74) )
      {
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
        goto LABEL_82;
      }
      if ( v8 )
        ThreadUnlock1(v53, v52);
      ThreadUnlock1(v53, v52);
      ThreadUnlock1(v55, v54);
      PopW32ThreadLock(v94);
      ObfDereferenceObject(v15);
      CloseDesktop((unsigned __int64)Handle, 0);
      v10 = -1073741823;
      goto LABEL_79;
    }
    ++*v48;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v80);
    v29 = zzzSetDesktop(*(struct tagTHREADINFO **)(v17 + 16), (__int64)v15, 0LL);
    v30 = (UserAtomicCheck *)v80;
    if ( v29 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v80);
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
      xxxDestroyWindow((_QWORD *)v8);
      HMAssignmentUnlock(v15 + 13);
    }
    if ( v71 )
    {
      xxxDestroyWindow(v71);
      HMAssignmentUnlock(v15 + 12);
    }
    if ( Window )
    {
      xxxDestroyWindow((_QWORD *)Window);
      HMAssignmentUnlock(v77 + 16);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 376LL) = v79;
    if ( v72 != -1 )
      *(_DWORD *)(gptiCurrent + 440LL) = v72 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v78);
    gdwDeferWinEvent += v57;
    if ( !(v57 + gdwDeferWinEvent) && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v74);
    zzzSetDesktop(gptiCurrent, (__int64)v76, v81);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v74);
    if ( v75 )
    {
      v62 = ReferenceDwmApiPort(v59, v58, v60, v61);
      if ( v62 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v15, 0);
        v67 = (void *)ReferenceDwmApiPort(v64, v63, v65, v66);
        DwmAsyncDesktopFree(v67, v15[5]);
        DereferenceDwmApiPort(v62);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( v70 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 376LL) + 312LL);
LABEL_82:
    if ( v8 )
      v8 = ThreadUnlock1(v48, v47);
    if ( v71 )
      v71 = (struct tagWND *)ThreadUnlock1(v48, v47);
    if ( Window )
      Window = ThreadUnlock1(v48, v47);
    PopW32ThreadLock(v94);
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
