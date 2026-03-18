/*
 * XREFs of RawInputThread @ 0x1C009B5A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0098070 (CheckPointerDeviceConfiguration.c)
 *     TransitionCursorSuppressionState @ 0x1C00987A0 (TransitionCursorSuppressionState.c)
 *     TimersProc @ 0x1C009C9A0 (TimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C009CC84 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxClientEnableMMCSS @ 0x1C009CCC0 (xxxClientEnableMMCSS.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C009CD4C (UpdateRimManagedKeyboardLeds.c)
 *     vCleanupRimClientWorker @ 0x1C009CF3C (vCleanupRimClientWorker.c)
 *     InitMice @ 0x1C009D358 (InitMice.c)
 *     InitKeyboard @ 0x1C009D464 (InitKeyboard.c)
 *     RitPrepDitTakeOver @ 0x1C009D8C8 (RitPrepDitTakeOver.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C009E0C8 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RitAdjustForDitTakeOver @ 0x1C009E150 (RitAdjustForDitTakeOver.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C009E19C (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C009E1FC (-_GetDigitizerFlags@@YAKXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C009E2E0 (CreatePointerDeviceProcessEvents.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C009E674 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     SetWindowArrangementHotKeys @ 0x1C009E738 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C009E784 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C009EA50 (SetDebugHotKeys.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RitTakeOver @ 0x1C009F9A4 (RitTakeOver.c)
 *     WakeRIT @ 0x1C00A0644 (WakeRIT.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C010AA30 (xxxRegisterForDeviceClassNotifications.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C010C2C4 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C014F6D8 (RequestModeSwitchOnPowerUp.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D8D34 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
 *     UserSetTimer @ 0x1C023951C (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall RawInputThread(__int64 *a1)
{
  unsigned __int16 v2; // si
  ULONG v3; // r15d
  __int64 RemoteContext; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  struct _KWAIT_BLOCK *v7; // rax
  HANDLE ThreadId; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ProcessWin32Process; // rax
  _DWORD *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTIMER *v17; // rax
  struct _KTIMER *v18; // rax
  _WORD *v19; // r8
  _DWORD *v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // ebx
  __int64 v25; // r14
  unsigned int v26; // edi
  unsigned __int64 v27; // rsi
  unsigned int v28; // eax
  char DigitizerFlags; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // ebx
  NTSTATUS v34; // edi
  __int64 v35; // rbx
  void *v36; // rcx
  _DWORD *v37; // rcx
  void **v38; // rdx
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rbx
  _QWORD *v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 i; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  PVOID *Object; // [rsp+20h] [rbp-A9h]
  int Objecta; // [rsp+20h] [rbp-A9h]
  int Objectb; // [rsp+20h] [rbp-A9h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-99h]
  ULONG OutputBufferLength; // [rsp+48h] [rbp-81h]
  PVOID v86; // [rsp+60h] [rbp-69h] BYREF
  PRKEVENT Event; // [rsp+68h] [rbp-61h]
  struct _UNICODE_STRING v88; // [rsp+70h] [rbp-59h] BYREF
  __int128 v89; // [rsp+80h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v91[8]; // [rsp+A0h] [rbp-29h] BYREF
  struct _UNICODE_STRING v92; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v93[8]; // [rsp+B8h] [rbp-11h] BYREF
  __int128 SystemInformation; // [rsp+C0h] [rbp-9h] BYREF
  int v95; // [rsp+D0h] [rbp+7h]
  unsigned int v96; // [rsp+130h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v98; // [rsp+140h] [rbp+77h]
  PVOID v99; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 1;
  v3 = 16;
  RemoteContext = GreGetRemoteContext();
  v5 = *a1;
  v6 = RemoteContext;
  gpkthreadRIT = (__int64)KeGetCurrentThread();
  v98 = RemoteContext;
  apObjects = (void **)Win32AllocPoolNonPaged(128LL, 2037609301LL);
  v7 = (struct _KWAIT_BLOCK *)Win32AllocPoolNonPaged(768LL, 2001433429LL);
  gWaitBlockArray = v7;
  if ( !apObjects )
    goto LABEL_167;
  if ( !v7 )
    goto LABEL_167;
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
  *(_QWORD *)&v89 = PsGetThreadProcessId(KeGetCurrentThread());
  ThreadId = PsGetThreadId(KeGetCurrentThread());
  v95 = 16;
  *((_QWORD *)&v89 + 1) = ThreadId;
  SystemInformation = v89;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  InitMice();
  UserSessionSwitchLeaveCrit(v10, v9);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_167;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  grcCursorClip = *(struct tagRECT *)(gpDispInfo + 104LL);
  v12 = *(_DWORD **)(GetDispInfo() + 88);
  *(_DWORD *)(gpsi + 3976LL) = v12[9] / 2;
  *(_DWORD *)(gpsi + 3980LL) = v12[10] / 2;
  gptCursorAsync = *(struct tagPOINT *)(gpsi + 3976LL);
  *(_DWORD *)(gpsi + 3952LL) = v12[13] / 2;
  *(_DWORD *)(gpsi + 3956LL) = v12[14] / 2;
  *(_DWORD *)(gpsi + 3960LL) = v12[17] / 2;
  *(_DWORD *)(gpsi + 3964LL) = v12[18] / 2;
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(10, 1);
  UserSessionSwitchLeaveCrit(v14, v13);
  EnterCrit(0LL, 1LL);
  if ( gSessionId )
  {
    LODWORD(Object) = 0;
    RegisterHotKey((struct tagWND *)1, 0LL, 4294967289LL, 8LL, (ULONG_PTR)Object);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 12LL);
  UserSessionSwitchLeaveCrit(v16, v15);
  v17 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v17;
  if ( !v17 )
    goto LABEL_167;
  KeInitializeTimer(v17);
  apObjects[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v18 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v18;
    if ( !v18 )
      goto LABEL_167;
    KeInitializeTimerEx(v18, SynchronizationTimer);
  }
  v19 = (_WORD *)gProtocolType;
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
      goto LABEL_167;
    v19 = (_WORD *)gProtocolType;
  }
  v20 = (_DWORD *)gServiceSessionId;
  v21 = (_DWORD *)gSessionId;
  if ( gSessionId != gServiceSessionId && !*v19 )
  {
    EnterCrit(0LL, 1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v23, v22);
    v21 = (_DWORD *)gSessionId;
    v20 = (_DWORD *)gServiceSessionId;
  }
  if ( *v21 == *v20 )
    gbFirstConnectionDone = 1;
  if ( *v21 )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v99, 0LL);
      v2 = 2;
      apObjects[3] = v99;
      Event = (PRKEVENT)apObjects[3];
      goto LABEL_23;
    }
LABEL_167:
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  if ( PoRequestShutdownEvent(apObjects + 3) < 0 )
    goto LABEL_167;
LABEL_23:
  if ( gSessionId )
    CreatePointerDeviceProcessEvents();
  aDeviceTemplate[81] = apObjects[3];
  aDeviceTemplate[10] = CreateKernelEvent(1LL, 0LL);
  aDeviceTemplate[152] = apObjects[3];
  if ( !apObjects[3] )
    goto LABEL_167;
  gpkeRITEvent = (PRKEVENT)apObjects[3];
  gptiRit = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 440LL) |= 0x80u;
  *apObjects = *(void **)(gptiRit + 648LL);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  v86 = *(PVOID *)(v5 + 56);
  ObReferenceObjectByPointer(v86, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v24 = KeWaitForMultipleObjects(v2, &v86, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v24 == 1 && (gdwRITWakeReason & 8) == 0 );
  ObfDereferenceObject(v86);
  if ( v24 == 1 && (gdwRITWakeReason & 8) != 0 )
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
  EnterCrit(0LL, 1LL);
  if ( !*(_QWORD *)(gptiRit + 408LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 536LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 536LL) + 16LL), 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( gSessionId != gServiceSessionId )
  {
    if ( gProtocolType )
    {
      RtlInitUnicodeString(&v88, 0LL);
      v25 = aDeviceTemplate[0];
      if ( LODWORD(aDeviceTemplate[12]) )
      {
        v26 = 1;
        while ( 1 )
        {
          v27 = 568LL * v26;
          v28 = DeviceTypeToRimInputType(v26);
          LOBYTE(OutputBufferLength) = 0;
          LODWORD(Timeout) = 0;
          if ( (int)RIMRegisterForInput(
                      v28,
                      0LL,
                      gpWin32kDriverObject,
                      *(_QWORD *)(v27 + v25 + 120),
                      *(_QWORD *)(v27 + v25 + 200),
                      0LL,
                      Timeout,
                      0LL,
                      Win32kRIMDevChangeCallback,
                      OutputBufferLength,
                      v27 + v25 + 104) >= 0 )
          {
            RawInputManagerObjectResolveHandle(aDeviceTemplate[71 * v26 + 13], 3LL, 1LL, &aDeviceTemplate[v27 / 8 + 14]);
            if ( v26 == 1 )
            {
              LOBYTE(Objecta) = 0;
              RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                aDeviceTemplate[84],
                &v88,
                1LL,
                ghRemoteKeyboardChannel,
                Objecta,
                v91);
            }
            HIDWORD(aDeviceTemplate[71 * v26 + 56]) = 64;
            LOBYTE(Objecta) = 0;
            RIMReadInput(
              aDeviceTemplate[71 * v26 + 13],
              &aDeviceTemplate[71 * v26 + 62],
              HIDWORD(aDeviceTemplate[71 * v26 + 56]),
              aDeviceTemplate[71 * v26 + 20],
              Objecta,
              &aDeviceTemplate[71 * v26 + 59],
              &aDeviceTemplate[71 * v26 + 56],
              &aDeviceTemplate[71 * v26 + 57]);
          }
          if ( ++v26 > 2 )
            break;
          v25 = aDeviceTemplate[0];
        }
        v6 = v98;
      }
      else
      {
        CreateDeviceInfo(0LL, &v88, 0LL);
        CreateDeviceInfo(1LL, &v88, 0LL);
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
    gnRITdemonTimerId = SetRITTimer(gnRITdemonTimerId, 1000LL, xxxHungAppDemon, 0LL);
  }
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v33 = 0;
  }
  else
  {
    v33 = 1;
    UserEnterUserCritSec(v31, v30, v32);
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v33 )
    UserLeaveUserCritSec();
  if ( gbRITAlerted )
    gbRITAlerted = 0;
LABEL_62:
  UserSessionSwitchLeaveCrit(v31, v30);
  do
  {
    while ( 1 )
    {
LABEL_63:
      v34 = KeWaitForMultipleObjects(v3, apObjects, WaitAny, WrUserRequest, 0, 1u, 0LL, gWaitBlockArray);
      if ( gdwUpdateKeyboard )
      {
        EnterDeviceInfoListCrit_();
        v35 = gpDeviceInfoList;
        if ( gpDeviceInfoList )
        {
          do
          {
            if ( *(_BYTE *)(v35 + 48) == 1 )
            {
              v36 = *(void **)(v35 + 216);
              if ( v36 )
              {
                if ( (gdwUpdateKeyboard & 1) != 0 )
                  ZwDeviceIoControlFile(v36, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0004u, &gktp, 6u, 0LL, 0);
                if ( (gdwUpdateKeyboard & 2) != 0 )
                  ZwDeviceIoControlFile(
                    *(HANDLE *)(v35 + 216),
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
            v35 = *(_QWORD *)(v35 + 56);
          }
          while ( v35 );
          v6 = v98;
        }
        UpdateRimManagedKeyboardLeds();
        LeaveDeviceInfoListCrit_();
        v37 = (_DWORD *)gdwUpdateKeyboard;
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
          v37 = (_DWORD *)gdwUpdateKeyboard;
        }
        *v37 &= 0xFFFFFFF8;
      }
      if ( v34 == 3 )
        break;
      switch ( v34 )
      {
        case 2:
          EnterCrit(0LL, 1LL);
          v30 = gProtocolType;
          if ( !gProtocolType )
          {
            if ( gfRemotingConsole )
            {
              v31 = gConsoleShadowhDev;
              if ( gConsoleShadowhDev )
                HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
            }
            goto LABEL_62;
          }
          DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(v6 + 40), 1LL, 0LL, 0);
          UserSessionSwitchLeaveCrit(v41, v40);
          break;
        case 4:
          EnterCrit(0LL, 1LL);
          RIMOnPnpNotification(aDeviceTemplate[84]);
          UserSessionSwitchLeaveCrit(v43, v42);
          break;
        case 5:
          EnterCrit(0LL, 1LL);
          v45 = 0LL;
          v46 = (_QWORD *)aDeviceTemplate[133];
          if ( v46 != &aDeviceTemplate[134] )
            v45 = aDeviceTemplate[133];
          UserSessionSwitchLeaveCrit(v46, v44);
          v48 = aDeviceTemplate[0];
          if ( SLODWORD(aDeviceTemplate[128]) >= 0 )
          {
            ProcessKeyboardInputViaRim(
              (struct _KEYBOARD_INPUT_DATA *)aDeviceTemplate[133],
              v47,
              aDeviceTemplate[129],
              (void *)aDeviceTemplate[130]);
            if ( v45 )
              aDeviceTemplate[133] = &aDeviceTemplate[134];
            v48 = aDeviceTemplate[0];
          }
          *(_DWORD *)(v48 + 1020) = 64;
          LOBYTE(Objectb) = 0;
          RIMReadInput(
            aDeviceTemplate[84],
            &aDeviceTemplate[133],
            HIDWORD(aDeviceTemplate[127]),
            aDeviceTemplate[91],
            Objectb,
            &aDeviceTemplate[130],
            &aDeviceTemplate[127],
            &aDeviceTemplate[128]);
          if ( v45 )
            goto LABEL_122;
          break;
        case 6:
          EnterCrit(0LL, 1LL);
          RtlInitUnicodeString(&v92, 0LL);
          LOBYTE(Objectb) = 0;
          LODWORD(aDeviceTemplate[108]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                            aDeviceTemplate[84],
                                            &v92,
                                            1LL,
                                            ghRemoteKeyboardChannel,
                                            Objectb,
                                            v93);
          KeSetEvent((PRKEVENT)aDeviceTemplate[107], 1, 0);
          UserSessionSwitchLeaveCrit(v52, v51);
          break;
        case 7:
          EnterCrit(0LL, 1LL);
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[84], 1LL);
          KeSetEvent((PRKEVENT)aDeviceTemplate[114], 1, 0);
          UserSessionSwitchLeaveCrit(v54, v53);
          break;
        case 9:
          EnterCrit(0LL, 1LL);
          RIMOnPnpNotification(aDeviceTemplate[155]);
          UserSessionSwitchLeaveCrit(v56, v55);
          break;
        case 10:
          EnterCrit(0LL, 1LL);
          v45 = 0LL;
          v58 = (_QWORD *)aDeviceTemplate[204];
          if ( v58 != &aDeviceTemplate[205] )
            v45 = aDeviceTemplate[204];
          UserSessionSwitchLeaveCrit(v58, v57);
          v60 = aDeviceTemplate[0];
          if ( SLODWORD(aDeviceTemplate[199]) >= 0 )
          {
            ProcessHidInputViaRim(aDeviceTemplate[204], LODWORD(aDeviceTemplate[198]), v59, aDeviceTemplate[201]);
            if ( v45 )
              aDeviceTemplate[204] = &aDeviceTemplate[205];
            v60 = aDeviceTemplate[0];
          }
          *(_DWORD *)(v60 + 1588) = 64;
          LOBYTE(Objectb) = 0;
          RIMReadInput(
            aDeviceTemplate[155],
            &aDeviceTemplate[204],
            HIDWORD(aDeviceTemplate[198]),
            aDeviceTemplate[162],
            Objectb,
            &aDeviceTemplate[201],
            &aDeviceTemplate[198],
            &aDeviceTemplate[199]);
          if ( v45 )
          {
LABEL_122:
            EnterCrit(0LL, 1LL);
            RIMFreeKernelMem(v45);
            UserSessionSwitchLeaveCrit(v50, v49);
          }
          break;
        case 11:
          EnterCrit(0LL, 1LL);
          RIMOnTimerNotification(aDeviceTemplate[155], 0LL);
          UserSessionSwitchLeaveCrit(v62, v61);
          break;
        case 12:
          EnterCrit(0LL, 1LL);
          RIMOnTimerNotification(aDeviceTemplate[155], 1LL);
          UserSessionSwitchLeaveCrit(v64, v63);
          break;
        case 13:
          EnterCrit(0LL, 1LL);
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[155], 2LL);
          KeSetEvent((PRKEVENT)aDeviceTemplate[185], 1, 0);
          UserSessionSwitchLeaveCrit(v66, v65);
          break;
        case 14:
          EnterCrit(0LL, 1LL);
          RIMDirectStartStopDeviceRead(aDeviceTemplate[155]);
          KeSetEvent((PRKEVENT)aDeviceTemplate[191], 1, 0);
          UserSessionSwitchLeaveCrit(v68, v67);
          break;
        case 15:
          EnterCrit(0LL, 1LL);
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[155], gpWin32kDriverObject);
          KeSetEvent((PRKEVENT)aDeviceTemplate[197], 1, 0);
          UserSessionSwitchLeaveCrit(v70, v69);
          break;
        case 8:
          EnterCrit(0LL, 1LL);
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[84], gpWin32kDriverObject);
          KeSetEvent((PRKEVENT)aDeviceTemplate[126], 1, 0);
          UserSessionSwitchLeaveCrit(v72, v71);
          break;
        default:
          if ( ((v34 - 1) & 0xFFFFFEFF) == 0 )
          {
            EnterCrit(0LL, 1LL);
            if ( v34 == 1 && gbRITAlerted )
              KeTestAlertThread(0LL);
            TimersProc();
            UserSessionSwitchLeaveCrit(v74, v73);
            if ( gnRetryReadInput != dword_1C03238AC )
            {
              dword_1C03238AC = gnRetryReadInput;
              KeSetEvent((PRKEVENT)aDeviceTemplate[10], 1, 0);
              WakeRIT(1LL);
            }
          }
          if ( gspwndAltTab )
          {
            EnterCrit(0LL, 1LL);
            for ( i = gptiRit; (*(_BYTE *)(*(_QWORD *)(gptiRit + 400LL) + 6LL) & 0x40) != 0; i = gptiRit )
              xxxReceiveMessage(i);
            goto LABEL_62;
          }
          break;
      }
    }
    KeClearEvent(gpkeRITEvent);
  }
  while ( !(unsigned int)GetRITWakeReason(&v96) );
  while ( 1 )
  {
    switch ( v96 )
    {
      case 4u:
        ProcessQueuedMouseEvents();
        goto LABEL_103;
      case 1u:
        EnterCrit(0LL, 1LL);
        ProcessDeviceChanges(1LL);
LABEL_102:
        UserSessionSwitchLeaveCrit(v39, v38);
        goto LABEL_103;
      case 2u:
        EnterCrit(0LL, 1LL);
        ProcessDeviceChanges(2LL);
        goto LABEL_102;
    }
    if ( v96 == 8 )
      break;
    switch ( v96 )
    {
      case 0x10u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 0x20u:
        EnterCrit(0LL, 1LL);
        RitTakeOver();
        if ( LODWORD(aDeviceTemplate[154]) )
        {
          v3 += 7;
          apObjects[9] = (void *)aDeviceTemplate[159];
          apObjects[10] = (void *)aDeviceTemplate[164];
          apObjects[11] = (void *)aDeviceTemplate[169];
          apObjects[12] = (void *)aDeviceTemplate[174];
          apObjects[13] = (void *)aDeviceTemplate[182];
          apObjects[14] = (void *)aDeviceTemplate[188];
          v38 = apObjects;
          v39 = (void *)aDeviceTemplate[194];
          apObjects[15] = v39;
        }
        goto LABEL_102;
      case 0x40u:
        EnterCrit(0LL, 1LL);
        if ( (unsigned int)RitPrepDitTakeOver() )
        {
          if ( LODWORD(aDeviceTemplate[154]) )
            v3 -= 7;
          gbDIT = 1;
        }
        goto LABEL_102;
      case 0x200u:
        EnterCrit(0LL, 1LL);
        RitAdjustForDitTakeOver();
        goto LABEL_102;
      case 0x80u:
        EnterCrit(0LL, 1LL);
        RequestModeSwitchOnPowerUp();
        goto LABEL_102;
      case 0x100u:
        EnterCrit(0LL, 1LL);
        CheckPointerDeviceConfiguration();
        TraceLoggingMouseWheelRoutingValueAtStartup();
        goto LABEL_102;
    }
LABEL_103:
    if ( !(unsigned int)GetRITWakeReason(&v96) )
      goto LABEL_63;
  }
  InitiateWin32kCleanup();
  if ( gSessionId )
  {
    EnterCrit(0LL, 1LL);
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(apObjects[3]);
    UserSessionSwitchLeaveCrit(v77, v76);
  }
  if ( Handle )
    ZwClose(Handle);
  EnterCrit(0LL, 1LL);
  vCleanupRimClientWorker(1LL);
  if ( !gbDIT )
    vCleanupRimClientWorker(2LL);
  return UserSessionSwitchLeaveCrit(v79, v78);
}
