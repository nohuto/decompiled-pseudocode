/*
 * XREFs of ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC
 * Callers:
 *     xxxConnectService @ 0x14018B600 (xxxConnectService.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x140200C80 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1402330A4 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14025CD50 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14029CFBC (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14029D014 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 *a8,
        int a9,
        __int16 a10,
        int a11,
        HANDLE *a12)
{
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // r12
  void *SecurityDescriptor; // r13
  _WORD *v16; // r15
  char v17; // di
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 *v22; // r14
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 *v29; // rbx
  NTSTATUS DesktopNotificationEvent; // edi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  int CurrentWin32kSessionId; // eax
  NTSTATUS GlobalAtomTable; // eax
  NTSTATUS v35; // ecx
  __int64 v36; // rcx
  struct tagTHREADINFO *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  void *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // di
  __int64 Window; // rdi
  void *v49; // r8
  void *v50; // r8
  ULONG v51; // edi
  ULONG v52; // ebx
  __int64 v53; // rdx
  NTSTATUS inserted; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *i; // rcx
  __int64 v58; // rcx
  PVOID v59; // r15
  struct tagTHREADINFO *v60; // rax
  struct tagTHREADINFO *v61; // rax
  __int64 v62; // rdx
  PVOID v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rdx
  int v67; // [rsp+98h] [rbp-59h]
  PVOID Object; // [rsp+A0h] [rbp-51h] BYREF
  char v69[8]; // [rsp+A8h] [rbp-49h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-41h]
  __int64 v71; // [rsp+B8h] [rbp-39h]
  HANDLE Handle; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-29h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-21h]
  __int64 v75; // [rsp+D8h] [rbp-19h]
  void *v76; // [rsp+E8h] [rbp-9h]
  __int64 v77; // [rsp+F0h] [rbp-1h]
  char v78; // [rsp+138h] [rbp+47h]
  char v79; // [rsp+138h] [rbp+47h]

  v12 = *(_QWORD *)(a1 + 32);
  Object = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  SecurityDescriptor = 0LL;
  v67 = 0;
  v16 = 0LL;
  v77 = v12;
  v17 = a2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63512) )
  {
    v22 = (__int64 *)(W32GetUserSessionState(v20, v19) + 68528);
    *(_DWORD *)v22 |= 2u;
  }
  else
  {
    v22 = (__int64 *)(W32GetUserSessionState(v20, v19) + 68456);
  }
  LOBYTE(v21) = v17;
  v23 = ObCreateObject(0LL, ExWindowStationObjectType, a1, v21, 0LL, 232, 0, 0, &Object);
  v26 = v23;
  if ( v23 < 0 )
  {
    SetLastNtError(v23);
    return v26;
  }
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v25, v24);
  v29 = 0LL;
  if ( !ExAcquireRundownProtection(UserSessionState + 7940) )
  {
    DesktopNotificationEvent = -1073741790;
LABEL_75:
    SetLastNtError(DesktopNotificationEvent);
    v63 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    if ( (_DWORD)v29 )
    {
      v64 = W32GetUserSessionState(v63, v62);
      ++*(_DWORD *)(v64 + 70592);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 520), 0, 0) & 0x10000000) != 0 )
      {
        v79 = 0;
      }
      else
      {
        v79 = 1;
        _InterlockedOr((volatile signed __int32 *)(v13 + 520), 0x10000000u);
      }
      v65 = *(_QWORD *)(v13 + 456);
      *(_QWORD *)(v13 + 456) = *(_QWORD *)(v22[2] + 456);
      HMChangeOwnerThread(v22[1], v13);
      v69[0] = 0;
      v70 = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v69, v66);
      xxxCleanupMotherDesktopWindow((struct tagTERMINAL *)v22);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v69);
      *(_QWORD *)(v13 + 456) = v65;
      if ( v79 )
        _InterlockedAnd((volatile signed __int32 *)(v13 + 520), 0xEFFFFFFF);
      zzzEndDeferWinEventNotify();
    }
    if ( Handle )
      ObCloseHandle(Handle, 1);
    if ( SecurityDescriptor )
      Win32FreePool(SecurityDescriptor);
    if ( v16 )
      Win32FreePool(v16);
    if ( v14 )
      ObfDereferenceObject(v14);
    return (unsigned int)DesktopNotificationEvent;
  }
  memset_0(Object, 0, 0xE8uLL);
  v31 = (char *)Object + 200;
  *((_QWORD *)Object + 26) = (char *)Object + 200;
  *v31 = v31;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v32);
  *(_DWORD *)Object = CurrentWin32kSessionId;
  *((_DWORD *)Object + 46) = a11;
  *((_QWORD *)Object + 3) = v22;
  if ( (*(_DWORD *)v22 & 2) != 0 )
  {
    *((_DWORD *)Object + 8) = 4;
  }
  else if ( (a10 & 0x800) != 0 )
  {
    *((_DWORD *)Object + 8) |= 0x800u;
  }
  GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 136);
  DesktopNotificationEvent = GlobalAtomTable;
  if ( GlobalAtomTable < 0
    || (*(_DWORD *)v22 & 1) == 0
    && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v22),
        DesktopNotificationEvent = GlobalAtomTable,
        GlobalAtomTable < 0) )
  {
    v35 = GlobalAtomTable;
LABEL_14:
    SetLastNtError(v35);
    goto LABEL_75;
  }
  v36 = *((unsigned int *)Object + 8);
  if ( (v36 & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
  {
    DesktopNotificationEvent = -1073741801;
    v35 = -1073741801;
    goto LABEL_14;
  }
  if ( !v22[1] )
  {
    v37 = PtiCurrent(v36);
    v38 = v22[2];
    v13 = (__int64)v37;
    v14 = (void *)*((_QWORD *)v37 + 61);
    v39 = *(_QWORD *)(v38 + 456);
    v40 = (void *)*((_QWORD *)v37 + 78);
    v71 = *((_QWORD *)v37 + 57);
    *((_QWORD *)v37 + 57) = v39;
    v76 = v40;
    if ( v14 )
    {
      ObfReferenceObject(v14);
    }
    else if ( *((struct tagTHREADINFO **)v37 + 96) != (struct tagTHREADINFO *)((char *)v37 + 768) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 519);
    }
    v41 = W32GetUserSessionState(v38, v39);
    v69[0] = 0;
    v70 = 0LL;
    ++*(_DWORD *)(v41 + 70592);
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v69, v42);
    DesktopNotificationEvent = zzzSetDesktop(v13, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(v13 + 488) && v14 )
        zzzSetDesktop(v13, (__int64)v14, v40);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v69);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(v13 + 456) = v71;
      goto LABEL_30;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 520), 0, 0) & 0x10000000) != 0 )
    {
      v78 = 0;
    }
    else
    {
      v78 = 1;
      _InterlockedOr((volatile signed __int32 *)(v13 + 520), 0x10000000u);
    }
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x10000000LL);
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      goto LABEL_39;
    v45 = PsGetCurrentProcessWin32Process(v44);
    v46 = v45;
    if ( v45 )
      v46 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v45 >> 64) & v45;
    v47 = 1;
    if ( !(unsigned int)IsImmersiveAppRestricted(v46) )
LABEL_39:
      v47 = 0;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v73, 0);
    Window = xxxCreateWindowEx(
               0,
               (wchar_t *)0x8001,
               32769LL,
               0LL,
               0x82000000,
               -32768,
               -32768,
               0xFFFF,
               0xFFFF,
               0LL,
               (__int64 **)&v73,
               hModuleWin,
               0LL,
               1u,
               0x30Au,
               v47,
               0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v73);
    if ( !Window )
    {
      DesktopNotificationEvent = -1073741801;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v69);
      zzzEndDeferWinEventNotify();
      v49 = v76;
      *(_QWORD *)(v13 + 456) = v71;
      zzzSetDesktop(v13, (__int64)v14, v49);
LABEL_30:
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v69);
      LODWORD(v29) = 0;
      goto LABEL_75;
    }
    v29 = v22 + 1;
    v74 = Window;
    v73 = (__int64)(v22 + 1);
    HMAssignmentLock(&v73, 0LL);
    if ( v78 )
      _InterlockedAnd((volatile signed __int32 *)(v13 + 520), 0xEFFFFFFF);
    SetVisible(*v29, 1u);
    HMChangeOwnerThread(*v29, v22[2]);
    LODWORD(v29) = 1;
    v50 = v76;
    *(_QWORD *)(v13 + 456) = v71;
    v67 = 1;
    DesktopNotificationEvent = zzzSetDesktop(v13, (__int64)v14, v50);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v69);
    zzzEndDeferWinEventNotify();
    if ( DesktopNotificationEvent < 0 )
    {
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v69);
      goto LABEL_75;
    }
    v29 = 0LL;
    if ( v14 )
    {
      ObfDereferenceObject(v14);
      v14 = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 8) & 4) == 0 )
  {
    v51 = RtlLengthSid(SeExports->SeWorldSid);
    v52 = v51 + 8;
    v16 = (_WORD *)Win32AllocPoolWithQuotaZInit(v51 + 8, 1702064981LL);
    if ( !v16 )
      goto LABEL_50;
    *v16 = 0;
    v16[1] = v52;
    *((_DWORD *)v16 + 1) = 0x100000;
    RtlCopySid(v51, v16 + 4, SeExports->SeWorldSid);
    SecurityDescriptor = (void *)CreateSecurityDescriptor(v16, v52, 0LL);
    Win32FreePool(v16);
    v29 = 0LL;
    v16 = 0LL;
    if ( SecurityDescriptor )
    {
      DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor, v53);
      if ( DesktopNotificationEvent >= 0 )
      {
        Win32FreePool(SecurityDescriptor);
        goto LABEL_54;
      }
    }
    else
    {
LABEL_50:
      DesktopNotificationEvent = -1073741801;
    }
LABEL_74:
    LODWORD(v29) = v67;
    goto LABEL_75;
  }
LABEL_54:
  inserted = ObInsertObject(Object, 0LL, a3, 1u, &Object, &Handle);
  DesktopNotificationEvent = inserted;
  if ( inserted < 0 )
  {
    Object = 0LL;
    SecurityDescriptor = 0LL;
    v16 = 0LL;
    goto LABEL_74;
  }
  if ( inserted != 0x40000000 )
  {
    DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v77);
    if ( DesktopNotificationEvent >= 0 )
    {
      for ( i = (_QWORD *)(W32GetUserSessionState(v56, v55) + 63512); *i; i = (_QWORD *)(*i + 8LL) )
        ;
      LockObjectAssignment(i, Object);
      v59 = Object;
      if ( (*((_DWORD *)Object + 8) & 4) == 0 )
      {
        v29 = a8;
        if ( a8 )
        {
          v60 = PtiCurrent(v58);
          v73 = *((_QWORD *)v60 + 47);
          *((_QWORD *)v60 + 47) = &v73;
          v75 = UserDereferenceObject;
          v74 = (__int64)v59;
          v29 = 0LL;
          if ( !xxxSafeLoadKeyboardLayoutEx(Object, a4, 0LL, a5, a6, a7, a8, a9, -2147483647) )
            DesktopNotificationEvent = -1073741823;
          v61 = PtiCurrent(3221225473LL);
          *((_QWORD *)v61 + 47) = v73;
        }
      }
    }
    SecurityDescriptor = v29;
    v16 = v29;
    if ( DesktopNotificationEvent < 0 )
      goto LABEL_74;
  }
  if ( !IsCurrentSessionServiceSession() && (*((_DWORD *)Object + 8) & 0x804) == 0 )
  {
    LOBYTE(v29) = (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() != 0;
    if ( (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
      LODWORD(v29) = (unsigned int)v29 | 2;
    if ( (_DWORD)v29 )
      tagWINDOWSTATION::SetPolicy(Object, (unsigned int)v29);
  }
  ObfDereferenceObject(Object);
  *a12 = Handle;
  return 0LL;
}
