/*
 * XREFs of xxxCreateWindowStation @ 0x1C0138EEC
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C0138AC0 (NtUserCreateWindowStation.c)
 *     xxxConnectService @ 0x1C015A9D0 (xxxConnectService.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0130A74 (xxxCleanupMotherDesktopWindow.c)
 *     xxxInitWindowStation @ 0x1C0138550 (xxxInitWindowStation.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C0139710 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0139C54 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C013C3E8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  NTSTATUS v23; // ecx
  ULONG v24; // eax
  __int64 v25; // rcx
  __int64 *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // r11d
  int v30; // esi
  int v31; // esi
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v34; // al
  _DWORD *Window; // rax
  int v36; // r11d
  PSECURITY_DESCRIPTOR v37; // r8
  PSECURITY_DESCRIPTOR v38; // r8
  int v39; // ebx
  int v40; // r11d
  ULONG v41; // esi
  ULONG v42; // edi
  __int64 v43; // rax
  __int64 v44; // rbx
  NTSTATUS inserted; // eax
  void *v46; // rcx
  ULONG v47; // eax
  _QWORD *j; // rcx
  PVOID v49; // rcx
  unsigned __int16 *v50; // rbx
  _QWORD *i; // r8
  ULONG v52; // eax
  int v53; // edi
  __int64 v54; // rbx
  unsigned int v55; // eax
  int v56; // [rsp+98h] [rbp-69h]
  PVOID Object; // [rsp+A0h] [rbp-61h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-51h] BYREF
  int v60; // [rsp+B8h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+C0h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-31h] BYREF
  _QWORD v64[9]; // [rsp+F0h] [rbp-11h] BYREF
  unsigned __int8 MemoryAllocated; // [rsp+148h] [rbp+47h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+158h] [rbp+57h]
  HANDLE v67; // [rsp+160h] [rbp+5Fh]

  v67 = a4;
  DesiredAccess = a3;
  v10 = *(void **)(a1 + 32);
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v56 = 0;
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
      v23 = GlobalAtomTable;
LABEL_12:
      v24 = RtlNtStatusToDosError(v23);
      UserSetLastError(v24);
      goto LABEL_78;
    }
    v25 = *((unsigned int *)Object + 8);
    if ( (v25 & 4) == 0 && !(unsigned int)xxxInitWindowStation(v25, v21, v22) )
    {
      DesktopNotificationEvent = -1073741801;
      v23 = -1073741801;
      goto LABEL_12;
    }
    v26 = (__int64 *)(v14 + 2);
    if ( !*((_QWORD *)v14 + 1) )
    {
      v12 = gptiCurrent;
      v13 = *(void **)(gptiCurrent + 416LL);
      v27 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 384LL);
      v28 = *(_QWORD *)(gptiCurrent + 384LL);
      SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(gptiCurrent + 520LL);
      *(_QWORD *)(gptiCurrent + 384LL) = v27;
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
        gdwDeferWinEvent += v29;
        if ( !(v29 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        *(_QWORD *)(gptiCurrent + 384LL) = v28;
LABEL_26:
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
        goto LABEL_78;
      }
      v30 = *(_DWORD *)(gptiCurrent + 448LL);
      *(_DWORD *)(gptiCurrent + 448LL) = v30 | 0x10000000;
      v31 = v30 & 0x10000000;
      v34 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v34 = 1;
      }
      Window = xxxCreateWindowEx(
                 0,
                 (wchar_t *)0x8001,
                 (char **)0x8001,
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
                 v34,
                 0LL);
      if ( !Window )
      {
        MemoryAllocated = 1;
        DesktopNotificationEvent = -1073741801;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&MemoryAllocated);
        gdwDeferWinEvent += v36;
        if ( !(v36 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        v37 = SecurityDescriptor;
        *(_QWORD *)(gptiCurrent + 384LL) = v28;
        zzzSetDesktop(gptiCurrent, (__int64)v13, v37);
        goto LABEL_26;
      }
      HMAssignmentLock(v14 + 2, Window);
      *(_DWORD *)(gptiCurrent + 448LL) = v31 | *(_DWORD *)(gptiCurrent + 448LL) & 0xEFFFFFFF;
      SetVisible(*v26, 1);
      HMChangeOwnerThread(*v26, *((_QWORD *)v14 + 2));
      v38 = SecurityDescriptor;
      v39 = 1;
      v56 = 1;
      *(_QWORD *)(gptiCurrent + 384LL) = v28;
      DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v13, v38);
      if ( DesktopNotificationEvent < 0 )
      {
        MemoryAllocated = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&MemoryAllocated);
        gdwDeferWinEvent += v40;
        if ( !(v40 + gdwDeferWinEvent) && gpPendingNotifies )
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
      v41 = RtlLengthSid(SeExports->SeWorldSid);
      v42 = v41 + 8;
      v43 = Win32AllocPoolWithQuota(v41 + 8, 1702064981LL);
      v44 = v43;
      if ( !v43
        || (*(_WORD *)v43 = 0,
            *(_WORD *)(v43 + 2) = v42,
            *(_DWORD *)(v43 + 4) = 0x100000,
            RtlCopySid(v41, (PSID)(v43 + 8), SeExports->SeWorldSid),
            v11 = (void *)CreateSecurityDescriptor(v44, v42, 0LL),
            Win32FreePool(v44),
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
      v49 = 0LL;
      Object = 0LL;
    }
    else
    {
      if ( inserted == 0x40000000 )
      {
        v49 = Object;
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
      v46 = *(void **)ObQueryNameInfo(Object);
      if ( v46 )
      {
        DesktopNotificationEvent = ObGetObjectSecurity(v46, &SecurityDescriptor, &MemoryAllocated);
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
        v23 = -1073741790;
        if ( DesktopNotificationEvent == -1073741790 )
          goto LABEL_12;
        v47 = RtlNtStatusToDosError(DesktopNotificationEvent);
        UserSetLastError(v47);
        goto LABEL_75;
      }
      v60 = 15;
      DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                   Object,
                                   &v60,
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
      v49 = Object;
      if ( (*((_DWORD *)Object + 8) & 4) == 0 )
      {
        v50 = a8;
        if ( a8 )
        {
          PushW32ThreadLock((__int64)Object, v64, UserDereferenceObject);
          if ( !xxxSafeLoadKeyboardLayoutEx(
                  (struct tagWINDOWSTATION *)Object,
                  v67,
                  0LL,
                  a5,
                  a6,
                  a7,
                  v50,
                  a9,
                  0x80000001) )
            DesktopNotificationEvent = -1073741823;
          PopW32ThreadLock(v64);
LABEL_75:
          v49 = Object;
        }
      }
    }
LABEL_77:
    if ( DesktopNotificationEvent >= 0 )
    {
      ObfDereferenceObject(v49);
      *a10 = Handle;
      return 0LL;
    }
    goto LABEL_78;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_78:
  v39 = v56;
LABEL_79:
  v52 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v52);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v39 )
  {
    ++gdwDeferWinEvent;
    v53 = *(_DWORD *)(v12 + 448);
    v54 = *(_QWORD *)(v12 + 384);
    *(_DWORD *)(v12 + 448) = v53 | 0x10000000;
    *(_QWORD *)(v12 + 384) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 384LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v12);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
    xxxCleanupMotherDesktopWindow((__int64)v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&MemoryAllocated);
    v55 = *(_DWORD *)(v12 + 448) & 0xEFFFFFFF;
    *(_QWORD *)(v12 + 384) = v54;
    *(_DWORD *)(v12 + 448) = v53 & 0x10000000 | v55;
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
