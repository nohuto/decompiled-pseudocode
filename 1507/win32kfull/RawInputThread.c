/*
 * XREFs of RawInputThread @ 0x1C0143560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     TransitionCursorSuppressionState @ 0x1C003A4A0 (TransitionCursorSuppressionState.c)
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     TimersProc @ 0x1C00C3710 (TimersProc.c)
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 *     xxxClientEnableMMCSS @ 0x1C00FD2B0 (xxxClientEnableMMCSS.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C00FD3E8 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RitTakeOver @ 0x1C01323F8 (RitTakeOver.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C0132558 (RequestModeSwitchOnPowerUp.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C01447EC (UpdateRimManagedKeyboardLeds.c)
 *     InitMice @ 0x1C0144A10 (InitMice.c)
 *     InitKeyboard @ 0x1C0144B1C (InitKeyboard.c)
 *     RitPrepDitTakeOver @ 0x1C0144BD8 (RitPrepDitTakeOver.c)
 *     vCleanupRimClientWorker @ 0x1C0144CB4 (vCleanupRimClientWorker.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C01450D0 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 *     RitAdjustForDitTakeOver @ 0x1C0146338 (RitAdjustForDitTakeOver.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C0146384 (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C01463E4 (-_GetDigitizerFlags@@YAKXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C01464C8 (CreatePointerDeviceProcessEvents.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C014685C (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     SetWindowArrangementHotKeys @ 0x1C0146920 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C014696C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C0146C38 (SetDebugHotKeys.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C015A56C (xxxRegisterForDeviceClassNotifications.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C015AD94 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D7F18 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     CreateDeviceInfo @ 0x1C01DE948 (CreateDeviceInfo.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 *     ProcessHidInputViaRim @ 0x1C022DE3C (ProcessHidInputViaRim.c)
 *     UserSetTimer @ 0x1C0239108 (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall RawInputThread(__int64 *a1)
{
  unsigned __int16 v1; // si
  ULONG v3; // r15d
  __int64 RemoteContext; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  struct _KWAIT_BLOCK *v7; // rax
  HANDLE ThreadId; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTIMER *v19; // rax
  struct _KTIMER *v20; // rax
  _WORD *v21; // r8
  _DWORD *v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  ULONG v26; // edi
  unsigned int v27; // esi
  NTSTATUS v28; // ebx
  __int64 v29; // r14
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // r8
  char DigitizerFlags; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // ebx
  NTSTATUS v38; // ebx
  __int64 v39; // rdi
  void *v40; // rcx
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  void **v44; // rdx
  void *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rbx
  _QWORD *v51; // rcx
  unsigned int v52; // edx
  __int64 v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  struct _KEVENT *v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  PVOID *Object; // [rsp+20h] [rbp-A9h]
  PVOID *Objecta; // [rsp+20h] [rbp-A9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-A1h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-99h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-91h]
  ULONG OutputBufferLength; // [rsp+48h] [rbp-81h]
  PVOID v77; // [rsp+60h] [rbp-69h] BYREF
  PRKEVENT Event; // [rsp+68h] [rbp-61h]
  struct _UNICODE_STRING v79; // [rsp+70h] [rbp-59h] BYREF
  __int128 v80; // [rsp+80h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v82[8]; // [rsp+A0h] [rbp-29h] BYREF
  struct _UNICODE_STRING v83; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v84[8]; // [rsp+B8h] [rbp-11h] BYREF
  __int128 SystemInformation; // [rsp+C0h] [rbp-9h] BYREF
  int v86; // [rsp+D0h] [rbp+7h]
  unsigned int v87; // [rsp+130h] [rbp+67h] BYREF
  PVOID v88; // [rsp+138h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+140h] [rbp+77h] BYREF
  __int64 v90; // [rsp+148h] [rbp+7Fh]

  v1 = 1;
  v3 = 16;
  RemoteContext = GreGetRemoteContext();
  v5 = *a1;
  v6 = RemoteContext;
  gpkthreadRIT = (__int64)KeGetCurrentThread();
  v90 = RemoteContext;
  apObjects = (void **)Win32AllocPoolNonPaged(128LL, 2037609301LL);
  v7 = (struct _KWAIT_BLOCK *)Win32AllocPoolNonPaged(768LL, 2001433429LL);
  gWaitBlockArray = v7;
  if ( !apObjects )
    goto LABEL_171;
  if ( !v7 )
    goto LABEL_171;
  memset(apObjects, 0, 0x80uLL);
  apObjects[4] = (void *)aDeviceTemplate[88];
  apObjects[5] = (void *)aDeviceTemplate[93];
  apObjects[6] = (void *)aDeviceTemplate[106];
  apObjects[7] = (void *)aDeviceTemplate[111];
  apObjects[8] = (void *)aDeviceTemplate[123];
  apObjects[9] = (void *)aDeviceTemplate[159];
  apObjects[10] = (void *)aDeviceTemplate[164];
  apObjects[11] = (void *)aDeviceTemplate[169];
  apObjects[12] = (void *)aDeviceTemplate[174];
  apObjects[13] = (void *)aDeviceTemplate[182];
  apObjects[14] = (void *)aDeviceTemplate[188];
  apObjects[15] = (void *)aDeviceTemplate[194];
  *(_QWORD *)&v80 = PsGetThreadProcessId(KeGetCurrentThread());
  ThreadId = PsGetThreadId(KeGetCurrentThread());
  v86 = 16;
  *((_QWORD *)&v80 + 1) = ThreadId;
  SystemInformation = v80;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL);
  InitKeyboard();
  InitMice();
  UserSessionSwitchLeaveCrit(v10, v9);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_171;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  grcCursorClip = *(struct tagRECT *)(gpDispInfo + 104LL);
  v14 = *(_DWORD **)(GetDispInfo(gpDispInfo, v12, v13) + 88);
  *(_DWORD *)(gpsi + 3976LL) = v14[9] / 2;
  *(_DWORD *)(gpsi + 3980LL) = v14[10] / 2;
  gptCursorAsync = *(struct tagPOINT *)(gpsi + 3976LL);
  *(_DWORD *)(gpsi + 3952LL) = v14[13] / 2;
  *(_DWORD *)(gpsi + 3956LL) = v14[14] / 2;
  *(_DWORD *)(gpsi + 3960LL) = v14[17] / 2;
  *(_DWORD *)(gpsi + 3964LL) = v14[18] / 2;
  EnterCrit(1LL);
  TransitionCursorSuppressionState(10, 1);
  UserSessionSwitchLeaveCrit(v16, v15);
  EnterCrit(1LL);
  if ( gSessionId )
  {
    RegisterHotKey((struct tagWND *)1, 0LL, -7, 8u, 0);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  UpdateLastInput(
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    12LL);
  UserSessionSwitchLeaveCrit(v18, v17);
  v19 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v19;
  if ( !v19 )
    goto LABEL_171;
  KeInitializeTimer(v19);
  apObjects[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v20 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v20;
    if ( !v20 )
      goto LABEL_171;
    KeInitializeTimerEx(v20, SynchronizationTimer);
  }
  v21 = (_WORD *)gProtocolType;
  apObjects[2] = (void *)gptmrWD;
  if ( gProtocolType )
  {
    if ( !(unsigned int)DrvEscapeRemoteDrivers(
                          *(_QWORD *)(gpDispInfo + 8LL),
                          gProtocolType,
                          *(_QWORD *)(v6 + 40),
                          2LL,
                          gptmrWD,
                          8) )
      goto LABEL_171;
    v21 = (_WORD *)gProtocolType;
  }
  v22 = (_DWORD *)gServiceSessionId;
  v23 = (_DWORD *)gSessionId;
  if ( gSessionId != gServiceSessionId && !*v21 )
  {
    EnterCrit(1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v25, v24);
    v23 = (_DWORD *)gSessionId;
    v22 = (_DWORD *)gServiceSessionId;
  }
  if ( *v23 == *v22 )
    gbFirstConnectionDone = 1;
  if ( *v23 )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v88, 0LL);
      v1 = 2;
      apObjects[3] = v88;
      Event = (PRKEVENT)apObjects[3];
      goto LABEL_23;
    }
LABEL_171:
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  if ( PoRequestShutdownEvent(apObjects + 3) < 0 )
    goto LABEL_171;
LABEL_23:
  if ( gSessionId )
    CreatePointerDeviceProcessEvents();
  aDeviceTemplate[81] = apObjects[3];
  aDeviceTemplate[10] = CreateKernelEvent(1LL, 0LL);
  aDeviceTemplate[152] = apObjects[3];
  if ( !apObjects[3] )
    goto LABEL_171;
  gpkeRITEvent = (PRKEVENT)apObjects[3];
  gptiRit = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 448LL) |= 0x80u;
  *apObjects = *(void **)(gptiRit + 656LL);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  v77 = *(PVOID *)(v5 + 56);
  ObReferenceObjectByPointer(v77, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  v26 = v1;
  v27 = 1;
  do
    v28 = KeWaitForMultipleObjects(v26, &v77, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v28 == 1 && (gdwRITWakeReason & 8) == 0 );
  ObfDereferenceObject(v77);
  if ( v28 == 1 && (gdwRITWakeReason & 8) != 0 )
  {
    KeSetEvent(Event, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(Event);
    if ( Handle )
      ZwClose(Handle);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent(gpkeRITEvent, 1, 0);
  EnterCrit(1LL);
  if ( !*(_QWORD *)(gptiRit + 416LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 544LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 544LL) + 16LL), 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( gSessionId != gServiceSessionId )
  {
    if ( gProtocolType )
    {
      RtlInitUnicodeString(&v79, 0LL);
      v29 = aDeviceTemplate[0];
      if ( LODWORD(aDeviceTemplate[12]) )
      {
        while ( 1 )
        {
          v30 = 71LL * v27;
          v31 = DeviceTypeToRimInputType(v27);
          LOBYTE(OutputBufferLength) = 0;
          if ( (int)RIMRegisterForInput(
                      v31,
                      0LL,
                      gpWin32kDriverObject,
                      *(_QWORD *)(v30 * 8 + v29 + 120),
                      *(_QWORD *)(v30 * 8 + v29 + 200),
                      0LL,
                      0,
                      0LL,
                      Win32kRIMDevChangeCallback,
                      OutputBufferLength,
                      v30 * 8 + v29 + 104) >= 0 )
          {
            LOBYTE(v32) = 1;
            RawInputManagerObjectResolveHandle(aDeviceTemplate[71 * v27 + 13], 3LL, v32, &aDeviceTemplate[v30 + 14]);
            if ( v27 == 1 )
            {
              LOBYTE(Object) = 0;
              RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                aDeviceTemplate[84],
                &v79,
                1LL,
                ghRemoteKeyboardChannel,
                (_DWORD)Object,
                v82);
            }
            HIDWORD(aDeviceTemplate[71 * v27 + 56]) = 64;
            LOBYTE(Object) = 0;
            RIMReadInput(
              aDeviceTemplate[71 * v27 + 13],
              &aDeviceTemplate[v30 + 62],
              HIDWORD(aDeviceTemplate[71 * v27 + 56]),
              aDeviceTemplate[71 * v27 + 20],
              Object,
              &aDeviceTemplate[v30 + 59],
              &aDeviceTemplate[v30 + 56],
              &aDeviceTemplate[v30 + 57]);
          }
          if ( ++v27 > 2 )
            break;
          v29 = aDeviceTemplate[0];
        }
      }
      else
      {
        CreateDeviceInfo(0LL, &v79, 0LL);
        CreateDeviceInfo(1LL, &v79, 0LL);
      }
    }
    else
    {
      xxxRegisterForDeviceClassNotifications();
    }
    DigitizerFlags = _GetDigitizerFlags();
    if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
      RegisterTabletButtonHandler();
    InitTimerPowerSaving();
    gnRITdemonTimerId = SetRITTimer(gnRITdemonTimerId, 1000, (int)xxxHungAppDemon, 0);
  }
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v37 = 0;
  }
  else
  {
    v37 = 1;
    UserEnterUserCritSec(v35, v34, v36);
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v37 )
    UserLeaveUserCritSec();
  if ( gbRITAlerted )
    gbRITAlerted = 0;
LABEL_62:
  UserSessionSwitchLeaveCrit(v35, v34);
  while ( 1 )
  {
LABEL_63:
    v38 = KeWaitForMultipleObjects(v3, apObjects, WaitAny, WrUserRequest, 0, 1u, 0LL, gWaitBlockArray);
    LODWORD(v88) = v38;
    if ( gdwUpdateKeyboard )
    {
      EnterDeviceInfoListCrit_(gdwUpdateKeyboard);
      v39 = gpDeviceInfoList;
      if ( gpDeviceInfoList )
      {
        do
        {
          if ( *(_BYTE *)(v39 + 48) == 1 )
          {
            v40 = *(void **)(v39 + 224);
            if ( v40 )
            {
              if ( (gdwUpdateKeyboard & 1) != 0 )
                ZwDeviceIoControlFile(v40, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0004u, &gktp, 6u, 0LL, 0);
              if ( (gdwUpdateKeyboard & 2) != 0 )
                ZwDeviceIoControlFile(
                  *(HANDLE *)(v39 + 224),
                  0LL,
                  0LL,
                  0LL,
                  &giosbKbdControl,
                  0xB0008u,
                  &gklp,
                  4u,
                  0LL,
                  0);
            }
          }
          v39 = *(_QWORD *)(v39 + 56);
        }
        while ( v39 );
        v38 = (int)v88;
        v6 = v90;
      }
      UpdateRimManagedKeyboardLeds();
      LeaveDeviceInfoListCrit_(v41);
      v42 = (_DWORD *)gdwUpdateKeyboard;
      if ( (gdwUpdateKeyboard & 2) != 0 && gfRemotingConsole )
      {
        ZwDeviceIoControlFile(
          ghConsoleShadowKeyboardChannel,
          0LL,
          0LL,
          0LL,
          &giosbKbdControl,
          0xB0008u,
          &gklp,
          4u,
          0LL,
          0);
        v42 = (_DWORD *)gdwUpdateKeyboard;
      }
      *v42 &= 0xFFFFFFF8;
    }
    if ( v38 == 3 )
      break;
    switch ( v38 )
    {
      case 2:
        EnterCrit(1LL);
        v34 = gProtocolType;
        if ( gProtocolType )
        {
          DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(v6 + 40), 1LL, 0LL, 0);
        }
        else if ( gfRemotingConsole )
        {
          v35 = gConsoleShadowhDev;
          if ( gConsoleShadowhDev )
            HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
        }
        goto LABEL_62;
      case 4:
        EnterCrit(1LL);
        v48 = aDeviceTemplate[84];
LABEL_128:
        RIMOnPnpNotification(v48);
        goto LABEL_62;
      case 5:
        EnterCrit(1LL);
        v50 = 0LL;
        v51 = (_QWORD *)aDeviceTemplate[133];
        if ( v51 != &aDeviceTemplate[134] )
          v50 = aDeviceTemplate[133];
        UserSessionSwitchLeaveCrit(v51, v49);
        v53 = aDeviceTemplate[0];
        if ( SLODWORD(aDeviceTemplate[128]) >= 0 )
        {
          ProcessKeyboardInputViaRim(
            (struct _KEYBOARD_INPUT_DATA *)aDeviceTemplate[133],
            v52,
            aDeviceTemplate[129],
            (void *)aDeviceTemplate[130]);
          if ( v50 )
            aDeviceTemplate[133] = &aDeviceTemplate[134];
          v53 = aDeviceTemplate[0];
        }
        *(_DWORD *)(v53 + 1020) = 64;
        WaitBlockArray = (PKWAIT_BLOCK)&aDeviceTemplate[128];
        v54 = &aDeviceTemplate[133];
        Timeout = (PLARGE_INTEGER)&aDeviceTemplate[127];
        v55 = HIDWORD(aDeviceTemplate[127]);
        HandleInformation = (POBJECT_HANDLE_INFORMATION)&aDeviceTemplate[130];
        v56 = aDeviceTemplate[91];
        v57 = aDeviceTemplate[84];
LABEL_137:
        LOBYTE(Objecta) = 0;
        RIMReadInput(v57, v54, v55, v56, Objecta, HandleInformation, Timeout, WaitBlockArray);
        if ( v50 )
        {
          EnterCrit(1LL);
          RIMFreeKernelMem(v50);
          goto LABEL_62;
        }
        break;
      case 6:
        EnterCrit(1LL);
        RtlInitUnicodeString(&v83, 0LL);
        LOBYTE(Objecta) = 0;
        LODWORD(aDeviceTemplate[108]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                          aDeviceTemplate[84],
                                          &v83,
                                          1LL,
                                          ghRemoteKeyboardChannel,
                                          (_DWORD)Objecta,
                                          v84);
        v58 = (struct _KEVENT *)aDeviceTemplate[107];
LABEL_152:
        KeSetEvent(v58, 1, 0);
        goto LABEL_62;
      case 7:
        EnterCrit(1LL);
        RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[84], 1LL);
        v58 = (struct _KEVENT *)aDeviceTemplate[114];
        goto LABEL_152;
      case 9:
        EnterCrit(1LL);
        v48 = aDeviceTemplate[155];
        goto LABEL_128;
      case 10:
        EnterCrit(1LL);
        v50 = 0LL;
        v60 = (_QWORD *)aDeviceTemplate[204];
        if ( v60 != &aDeviceTemplate[205] )
          v50 = aDeviceTemplate[204];
        UserSessionSwitchLeaveCrit(v60, v59);
        v62 = aDeviceTemplate[0];
        if ( SLODWORD(aDeviceTemplate[199]) >= 0 )
        {
          ProcessHidInputViaRim(aDeviceTemplate[204], LODWORD(aDeviceTemplate[198]), v61, aDeviceTemplate[201]);
          if ( v50 )
            aDeviceTemplate[204] = &aDeviceTemplate[205];
          v62 = aDeviceTemplate[0];
        }
        *(_DWORD *)(v62 + 1588) = 64;
        WaitBlockArray = (PKWAIT_BLOCK)&aDeviceTemplate[199];
        v54 = &aDeviceTemplate[204];
        Timeout = (PLARGE_INTEGER)&aDeviceTemplate[198];
        v55 = HIDWORD(aDeviceTemplate[198]);
        HandleInformation = (POBJECT_HANDLE_INFORMATION)&aDeviceTemplate[201];
        v56 = aDeviceTemplate[162];
        v57 = aDeviceTemplate[155];
        goto LABEL_137;
      case 11:
        EnterCrit(1LL);
        v63 = 0LL;
LABEL_143:
        RIMOnTimerNotification(aDeviceTemplate[155], v63);
        goto LABEL_62;
      case 12:
        EnterCrit(1LL);
        v63 = 1LL;
        goto LABEL_143;
      case 13:
        EnterCrit(1LL);
        RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[155], 2LL);
        v58 = (struct _KEVENT *)aDeviceTemplate[185];
        goto LABEL_152;
      case 14:
        EnterCrit(1LL);
        RIMDirectStartStopDeviceRead(aDeviceTemplate[155]);
        v58 = (struct _KEVENT *)aDeviceTemplate[191];
        goto LABEL_152;
      case 15:
        EnterCrit(1LL);
        RIMDirectStartDeviceClassNotifications(aDeviceTemplate[155], gpWin32kDriverObject);
        v58 = (struct _KEVENT *)aDeviceTemplate[197];
        goto LABEL_152;
      case 8:
        EnterCrit(1LL);
        RIMDirectStartDeviceClassNotifications(aDeviceTemplate[84], gpWin32kDriverObject);
        v58 = (struct _KEVENT *)aDeviceTemplate[126];
        goto LABEL_152;
      default:
        if ( ((v38 - 1) & 0xFFFFFEFF) == 0 )
        {
          EnterCrit(1LL);
          if ( v38 == 1 && gbRITAlerted )
            KeTestAlertThread(0LL);
          TimersProc();
          UserSessionSwitchLeaveCrit(v65, v64);
          if ( gnRetryReadInput != dword_1C0324060 )
          {
            dword_1C0324060 = gnRetryReadInput;
            KeSetEvent((PRKEVENT)aDeviceTemplate[10], 1, 0);
            WakeRIT(1u);
          }
        }
        if ( gspwndAltTab )
        {
          EnterCrit(1LL);
          while ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 408LL) + 6LL) & 0x40) != 0 )
            xxxReceiveMessage(gptiRit);
          goto LABEL_62;
        }
        break;
    }
  }
  KeClearEvent(gpkeRITEvent);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(&v87) )
        goto LABEL_63;
      if ( v87 != 4 )
        break;
      ProcessQueuedMouseEvents();
    }
    if ( v87 == 1 )
    {
      EnterCrit(1LL);
      v43 = 1LL;
LABEL_83:
      ProcessDeviceChanges(v43);
      goto LABEL_103;
    }
    if ( v87 == 2 )
    {
      EnterCrit(1LL);
      v43 = 2LL;
      goto LABEL_83;
    }
    if ( v87 == 8 )
      break;
    switch ( v87 )
    {
      case 0x10u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 0x20u:
        EnterCrit(1LL);
        RitTakeOver(v46);
        if ( LODWORD(aDeviceTemplate[154]) )
        {
          v3 += 7;
          apObjects[9] = (void *)aDeviceTemplate[159];
          apObjects[10] = (void *)aDeviceTemplate[164];
          apObjects[11] = (void *)aDeviceTemplate[169];
          apObjects[12] = (void *)aDeviceTemplate[174];
          apObjects[13] = (void *)aDeviceTemplate[182];
          apObjects[14] = (void *)aDeviceTemplate[188];
          v44 = apObjects;
          v45 = (void *)aDeviceTemplate[194];
          apObjects[15] = v45;
        }
        goto LABEL_103;
      case 0x40u:
        EnterCrit(1LL);
        if ( (unsigned int)RitPrepDitTakeOver() )
        {
          if ( LODWORD(aDeviceTemplate[154]) )
            v3 -= 7;
          gbDIT = 1;
        }
LABEL_103:
        UserSessionSwitchLeaveCrit(v45, v44);
        break;
      case 0x200u:
        EnterCrit(1LL);
        RitAdjustForDitTakeOver();
        goto LABEL_103;
      case 0x80u:
        EnterCrit(1LL);
        RequestModeSwitchOnPowerUp(v47);
        goto LABEL_103;
      case 0x100u:
        EnterCrit(1LL);
        CheckPointerDeviceConfiguration();
        TraceLoggingMouseWheelRoutingValueAtStartup();
        goto LABEL_103;
    }
  }
  InitiateWin32kCleanup();
  if ( gSessionId )
  {
    EnterCrit(1LL);
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(apObjects[3]);
    UserSessionSwitchLeaveCrit(v67, v66);
  }
  if ( Handle )
    ZwClose(Handle);
  EnterCrit(1LL);
  vCleanupRimClientWorker(1LL);
  if ( !gbDIT )
    vCleanupRimClientWorker(2LL);
  return UserSessionSwitchLeaveCrit(v69, v68);
}
