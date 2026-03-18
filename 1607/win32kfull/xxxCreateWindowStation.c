/*
 * XREFs of xxxCreateWindowStation @ 0x1C00EA280
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C00E9E50 (NtUserCreateWindowStation.c)
 *     xxxConnectService @ 0x1C00EB590 (xxxConnectService.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00766E8 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     xxxInitWindowStation @ 0x1C00BC2F0 (xxxInitWindowStation.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00E66F4 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00EAA84 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00EB3A4 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012C494 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        struct tagKBDTABLE_MULT_INTERNAL *a7,
        unsigned __int16 *a8,
        unsigned int a9,
        HANDLE *a10)
{
  void *v10; // rax
  void *v11; // r13
  __int64 v12; // r14
  void *v13; // r15
  int *v14; // r12
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  ULONG v17; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  int GlobalAtomTable; // eax
  NTSTATUS v21; // ecx
  ULONG v22; // eax
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // r11d
  int v29; // esi
  int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v34; // al
  _DWORD *Window; // rax
  __int64 v36; // r9
  int v37; // r11d
  void *v38; // r8
  void *v39; // r8
  int v40; // ebx
  __int64 v41; // r9
  ULONG v42; // esi
  ULONG v43; // edi
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r8
  NTSTATUS inserted; // eax
  void *v51; // rcx
  ULONG v52; // eax
  _QWORD *i; // rcx
  __int64 v54; // r9
  unsigned __int16 *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  ULONG v59; // eax
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // edi
  __int64 v63; // rbx
  unsigned int v64; // eax
  int v65; // [rsp+90h] [rbp-80h]
  PVOID Object; // [rsp+98h] [rbp-78h] BYREF
  char v67[8]; // [rsp+A0h] [rbp-70h] BYREF
  int v68; // [rsp+A8h] [rbp-68h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+C0h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-48h]
  _BYTE v73[8]; // [rsp+D0h] [rbp-40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-38h] BYREF
  _QWORD v75[3]; // [rsp+F8h] [rbp-18h] BYREF
  void *MemoryAllocated; // [rsp+150h] [rbp+40h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+160h] [rbp+50h]
  HANDLE v78; // [rsp+168h] [rbp+58h]

  v78 = a4;
  DesiredAccess = a3;
  v10 = *(void **)(a1 + 32);
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v65 = 0;
  v13 = 0LL;
  ExplicitDescriptor = v10;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO;
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 208, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = RtlNtStatusToDosError(v15);
    UserSetLastError(v17);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xD0uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 3) = v14;
    *((_QWORD *)Object + 24) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 8) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 136);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v21 = GlobalAtomTable;
LABEL_12:
      v22 = RtlNtStatusToDosError(v21);
      UserSetLastError(v22);
      goto LABEL_71;
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v21 = -1073741801;
      goto LABEL_12;
    }
    v23 = v14 + 2;
    if ( !*((_QWORD *)v14 + 1) )
    {
      v12 = gptiCurrent;
      v13 = *(void **)(gptiCurrent + 408LL);
      v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 376LL);
      v25 = *(_QWORD *)(gptiCurrent + 376LL);
      MemoryAllocated = *(void **)(gptiCurrent + 512LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v24;
      if ( v13 )
        ObfReferenceObject(v13);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v67);
      DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL, v26);
      if ( DesktopNotificationEvent < 0 )
      {
        v67[0] = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v67);
        gdwDeferWinEvent += v28;
        if ( !(v28 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        *(_QWORD *)(gptiCurrent + 376LL) = v25;
LABEL_26:
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
        goto LABEL_71;
      }
      v29 = *(_DWORD *)(gptiCurrent + 440LL);
      *(_DWORD *)(gptiCurrent + 440LL) = v29 | 0x10000000;
      v30 = v29 & 0x10000000;
      v34 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL, v27) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32, v31);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v34 = 1;
      }
      Window = xxxCreateWindowEx(
                 0,
                 (wchar_t *)0x8001,
                 32769LL,
                 0LL,
                 -2113929216,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 0LL,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v34,
                 0LL);
      if ( !Window )
      {
        v67[0] = 1;
        DesktopNotificationEvent = -1073741801;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v67);
        gdwDeferWinEvent += v37;
        if ( !(v37 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        v38 = MemoryAllocated;
        *(_QWORD *)(gptiCurrent + 376LL) = v25;
        zzzSetDesktop(gptiCurrent, (__int64)v13, v38, v36);
        goto LABEL_26;
      }
      HMAssignmentLock(v14 + 2, Window);
      *(_DWORD *)(gptiCurrent + 440LL) = v30 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
      SetVisible((_QWORD *)*v23, 1);
      HMChangeOwnerThread(*v23, *((_QWORD *)v14 + 2));
      v39 = MemoryAllocated;
      v40 = 1;
      v65 = 1;
      *(_QWORD *)(gptiCurrent + 376LL) = v25;
      DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v13, v39, v41);
      if ( DesktopNotificationEvent < 0 )
      {
        v67[0] = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v67);
        if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
        goto LABEL_72;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
      if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
      if ( v13 )
      {
        ObfDereferenceObject(v13);
        v13 = 0LL;
      }
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 )
    {
      v42 = RtlLengthSid(SeExports->SeWorldSid);
      v43 = v42 + 8;
      v44 = Win32AllocPoolWithQuota(v42 + 8, 1702064981LL);
      v45 = v44;
      if ( !v44
        || (*(_WORD *)v44 = 0,
            *(_WORD *)(v44 + 2) = v43,
            *(_DWORD *)(v44 + 4) = 0x100000,
            RtlCopySid(v42, (PSID)(v44 + 8), SeExports->SeWorldSid),
            v11 = (void *)CreateSecurityDescriptor(v45, v43, 0LL),
            Win32FreePool(v45, v46, v47),
            !v11) )
      {
        DesktopNotificationEvent = -1073741801;
        goto LABEL_71;
      }
      DesktopNotificationEvent = CreateDesktopNotificationEvent(v11);
      if ( DesktopNotificationEvent < 0 )
        goto LABEL_71;
      Win32FreePool(v11, v48, v49);
      v11 = 0LL;
    }
    inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
    DesktopNotificationEvent = inserted;
    if ( inserted < 0 )
    {
      Object = 0LL;
    }
    else
    {
      if ( inserted == 0x40000000 )
        goto LABEL_85;
      SecurityDescriptor = 0LL;
      LOBYTE(MemoryAllocated) = 0;
      SeCaptureSubjectContext(&SubjectContext);
      SeLockSubjectContext(&SubjectContext);
      v51 = *(void **)ObQueryNameInfo(Object);
      if ( v51 )
      {
        DesktopNotificationEvent = ObGetObjectSecurity(v51, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated);
        if ( DesktopNotificationEvent < 0 )
        {
          SeUnlockSubjectContext(&SubjectContext);
          SeReleaseSubjectContext(&SubjectContext);
          goto LABEL_71;
        }
      }
      DesktopNotificationEvent = SeAssignSecurity(
                                   SecurityDescriptor,
                                   ExplicitDescriptor,
                                   &NewDescriptor,
                                   1u,
                                   &SubjectContext,
                                   WinStaMapping,
                                   PagedPool);
      ObReleaseObjectSecurity(SecurityDescriptor, (BOOLEAN)MemoryAllocated);
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DesktopNotificationEvent >= 0 )
      {
        v68 = 15;
        DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                     Object,
                                     &v68,
                                     NewDescriptor,
                                     (char *)Object - 8,
                                     1,
                                     WinStaMapping);
        SeDeassignSecurity(&NewDescriptor);
        if ( DesktopNotificationEvent < 0 )
          goto LABEL_71;
        for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
          ;
        LockObjectAssignment(i, Object);
        if ( (*((_DWORD *)Object + 8) & 4) == 0 )
        {
          v55 = a8;
          if ( a8 )
          {
            PushW32ThreadLock((__int64)Object, v75, UserDereferenceObject, v54);
            if ( !xxxSafeLoadKeyboardLayoutEx(
                    (struct tagWINDOWSTATION *)Object,
                    v78,
                    0LL,
                    a5,
                    a6,
                    a7,
                    v55,
                    a9,
                    0x80000001) )
              DesktopNotificationEvent = -1073741823;
            PopW32ThreadLock(v75, v56, v57, v58);
          }
        }
      }
      else
      {
        v21 = -1073741790;
        if ( DesktopNotificationEvent == -1073741790 )
          goto LABEL_12;
        v52 = RtlNtStatusToDosError(DesktopNotificationEvent);
        UserSetLastError(v52);
      }
    }
    if ( DesktopNotificationEvent < 0 )
      goto LABEL_71;
LABEL_85:
    ObfDereferenceObject(Object);
    *a10 = Handle;
    return 0LL;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_71:
  v40 = v65;
LABEL_72:
  v59 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v59);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v40 )
  {
    ++gdwDeferWinEvent;
    v62 = *(_DWORD *)(v12 + 440);
    v63 = *(_QWORD *)(v12 + 376);
    *(_DWORD *)(v12 + 440) = v62 | 0x10000000;
    *(_QWORD *)(v12 + 376) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 376LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v12);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v73);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v73);
    v64 = *(_DWORD *)(v12 + 440) & 0xEFFFFFFF;
    *(_QWORD *)(v12 + 376) = v63;
    *(_DWORD *)(v12 + 440) = v62 & 0x10000000 | v64;
    if ( --gdwDeferWinEvent == 1 )
    {
      if ( gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v11 )
    Win32FreePool(v11, v60, v61);
  if ( v13 )
    ObfDereferenceObject(v13);
  return (unsigned int)DesktopNotificationEvent;
}
