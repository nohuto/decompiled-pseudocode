/*
 * XREFs of xxxCreateWindowStation @ 0x1C00D6334
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C00D5C80 (NtUserCreateWindowStation.c)
 *     xxxConnectService @ 0x1C0150634 (xxxConnectService.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00975BC (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00D6B58 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00D7188 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxInitWindowStation @ 0x1C00D7374 (xxxInitWindowStation.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011435C (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  __int64 *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // r11d
  int v27; // esi
  int v28; // esi
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v31; // al
  __int64 Window; // rax
  int v33; // r11d
  PSECURITY_DESCRIPTOR v34; // r8
  PSECURITY_DESCRIPTOR v35; // r8
  int v36; // ebx
  int v37; // r11d
  ULONG v38; // esi
  ULONG v39; // edi
  __int64 v40; // rax
  __int64 v41; // rbx
  NTSTATUS inserted; // eax
  void *v43; // rcx
  ULONG v44; // eax
  _QWORD *j; // rcx
  PVOID v46; // rcx
  unsigned __int16 *v47; // rbx
  _QWORD *i; // r8
  ULONG v49; // eax
  int v50; // edi
  __int64 v51; // rbx
  unsigned int v52; // eax
  int v53; // [rsp+98h] [rbp-69h]
  PVOID Object; // [rsp+A0h] [rbp-61h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-51h] BYREF
  int v57; // [rsp+B8h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+C0h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-31h] BYREF
  _QWORD v61[9]; // [rsp+F0h] [rbp-11h] BYREF
  unsigned __int8 MemoryAllocated; // [rsp+148h] [rbp+47h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+158h] [rbp+57h]
  HANDLE v64; // [rsp+160h] [rbp+5Fh]

  v64 = a4;
  DesiredAccess = a3;
  v10 = *(void **)(a1 + 32);
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v53 = 0;
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
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 184, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = RtlNtStatusToDosError(v15);
    UserSetLastError(v17);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xB8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 3) = v14;
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
      goto LABEL_78;
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v21 = -1073741801;
      goto LABEL_12;
    }
    v23 = (__int64 *)(v14 + 2);
    if ( !*((_QWORD *)v14 + 1) )
    {
      v12 = gptiCurrent;
      v13 = *(void **)(gptiCurrent + 408LL);
      v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 376LL);
      v25 = *(_QWORD *)(gptiCurrent + 376LL);
      SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(gptiCurrent + 512LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v24;
      if ( v13 )
        ObfReferenceObject(v13);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
      DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
      if ( DesktopNotificationEvent < 0 )
      {
        MemoryAllocated = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&MemoryAllocated);
        gdwDeferWinEvent += v26;
        if ( !(v26 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        *(_QWORD *)(gptiCurrent + 376LL) = v25;
LABEL_26:
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
        goto LABEL_78;
      }
      v27 = *(_DWORD *)(gptiCurrent + 440LL);
      *(_DWORD *)(gptiCurrent + 440LL) = v27 | 0x10000000;
      v28 = v27 & 0x10000000;
      v31 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v31 = 1;
      }
      Window = xxxCreateWindowEx(
                 0,
                 0x8001uLL,
                 32769LL,
                 0LL,
                 0x82000000,
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
                 v31,
                 0LL);
      if ( !Window )
      {
        MemoryAllocated = 1;
        DesktopNotificationEvent = -1073741801;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&MemoryAllocated);
        gdwDeferWinEvent += v33;
        if ( !(v33 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        v34 = SecurityDescriptor;
        *(_QWORD *)(gptiCurrent + 376LL) = v25;
        zzzSetDesktop(gptiCurrent, (__int64)v13, v34);
        goto LABEL_26;
      }
      HMAssignmentLock(v14 + 2, Window);
      *(_DWORD *)(gptiCurrent + 440LL) = v28 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
      SetVisible(*v23, 1);
      HMChangeOwnerThread(*v23, *((_QWORD *)v14 + 2));
      v35 = SecurityDescriptor;
      v36 = 1;
      v53 = 1;
      *(_QWORD *)(gptiCurrent + 376LL) = v25;
      DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v13, v35);
      if ( DesktopNotificationEvent < 0 )
      {
        MemoryAllocated = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&MemoryAllocated);
        gdwDeferWinEvent += v37;
        if ( !(v37 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
        goto LABEL_79;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
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
      v38 = RtlLengthSid(SeExports->SeWorldSid);
      v39 = v38 + 8;
      v40 = Win32AllocPoolWithQuota(v38 + 8, 1702064981LL);
      v41 = v40;
      if ( !v40
        || (*(_WORD *)v40 = 0,
            *(_WORD *)(v40 + 2) = v39,
            *(_DWORD *)(v40 + 4) = 0x100000,
            RtlCopySid(v38, (PSID)(v40 + 8), SeExports->SeWorldSid),
            v11 = (void *)CreateSecurityDescriptor(v41, v39, 0LL),
            Win32FreePool(v41),
            !v11) )
      {
        DesktopNotificationEvent = -1073741801;
        goto LABEL_78;
      }
      DesktopNotificationEvent = CreateDesktopNotificationEvent(v11);
      if ( DesktopNotificationEvent < 0 )
        goto LABEL_78;
      Win32FreePool(v11);
      v11 = 0LL;
    }
    inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
    DesktopNotificationEvent = inserted;
    if ( inserted < 0 )
    {
      v46 = 0LL;
      Object = 0LL;
    }
    else
    {
      if ( inserted == 0x40000000 )
      {
        v46 = Object;
        if ( (*((_DWORD *)Object + 8) & 0x100) == 0 )
          goto LABEL_77;
        for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
          ;
        LockObjectAssignment(i, Object);
        *((_DWORD *)Object + 8) &= ~0x100u;
        goto LABEL_75;
      }
      SecurityDescriptor = 0LL;
      MemoryAllocated = 0;
      SeCaptureSubjectContext(&SubjectContext);
      SeLockSubjectContext(&SubjectContext);
      v43 = *(void **)ObQueryNameInfo(Object);
      if ( v43 )
      {
        DesktopNotificationEvent = ObGetObjectSecurity(v43, &SecurityDescriptor, &MemoryAllocated);
        if ( DesktopNotificationEvent < 0 )
        {
          SeUnlockSubjectContext(&SubjectContext);
          SeReleaseSubjectContext(&SubjectContext);
          goto LABEL_78;
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
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DesktopNotificationEvent < 0 )
      {
        v21 = -1073741790;
        if ( DesktopNotificationEvent == -1073741790 )
          goto LABEL_12;
        v44 = RtlNtStatusToDosError(DesktopNotificationEvent);
        UserSetLastError(v44);
        goto LABEL_75;
      }
      v57 = 15;
      DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                   Object,
                                   &v57,
                                   NewDescriptor,
                                   (char *)Object - 8,
                                   1,
                                   WinStaMapping);
      SeDeassignSecurity(&NewDescriptor);
      if ( DesktopNotificationEvent < 0 )
        goto LABEL_78;
      for ( j = (_QWORD *)grpWinStaList; *j; j = (_QWORD *)(*j + 8LL) )
        ;
      LockObjectAssignment(j, Object);
      v46 = Object;
      if ( (*((_DWORD *)Object + 8) & 4) == 0 )
      {
        v47 = a8;
        if ( a8 )
        {
          PushW32ThreadLock((__int64)Object, v61, UserDereferenceObject);
          if ( !xxxSafeLoadKeyboardLayoutEx(
                  (struct tagWINDOWSTATION *)Object,
                  v64,
                  0LL,
                  a5,
                  a6,
                  a7,
                  v47,
                  a9,
                  0x80000001) )
            DesktopNotificationEvent = -1073741823;
          PopW32ThreadLock(v61);
LABEL_75:
          v46 = Object;
        }
      }
    }
LABEL_77:
    if ( DesktopNotificationEvent >= 0 )
    {
      ObfDereferenceObject(v46);
      *a10 = Handle;
      return 0LL;
    }
    goto LABEL_78;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_78:
  v36 = v53;
LABEL_79:
  v49 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v49);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v36 )
  {
    ++gdwDeferWinEvent;
    v50 = *(_DWORD *)(v12 + 440);
    v51 = *(_QWORD *)(v12 + 376);
    *(_DWORD *)(v12 + 440) = v50 | 0x10000000;
    *(_QWORD *)(v12 + 376) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 376LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v12);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
    v52 = *(_DWORD *)(v12 + 440) & 0xEFFFFFFF;
    *(_QWORD *)(v12 + 376) = v51;
    *(_DWORD *)(v12 + 440) = v50 & 0x10000000 | v52;
    if ( --gdwDeferWinEvent == 1 )
    {
      if ( gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v11 )
    Win32FreePool(v11);
  if ( v13 )
    ObfDereferenceObject(v13);
  return (unsigned int)DesktopNotificationEvent;
}
