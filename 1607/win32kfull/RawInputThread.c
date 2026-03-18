/*
 * XREFs of RawInputThread @ 0x1C007B620
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     TimersProc @ 0x1C007CAC0 (TimersProc.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     TransitionCursorSuppressionState @ 0x1C0093FF0 (TransitionCursorSuppressionState.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     SetWindowArrangementHotKeys @ 0x1C00974D8 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C009781C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00D5778 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C00E85CC (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C00EC68C (UpdateRimManagedKeyboardLeds.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00ED000 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     RitTakeOver @ 0x1C01193E4 (RitTakeOver.c)
 *     WakeRIT @ 0x1C011A044 (WakeRIT.c)
 *     RitPrepDitTakeOver @ 0x1C011AD34 (RitPrepDitTakeOver.c)
 *     vCleanupRimClientWorker @ 0x1C011ADFC (vCleanupRimClientWorker.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123FE0 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C012B9DC (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxClientEnableMMCSS @ 0x1C012BE38 (xxxClientEnableMMCSS.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C012C5DC (CreatePointerDeviceProcessEvents.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C012CBF4 (xxxRegisterForDeviceClassNotifications.c)
 *     InitMice @ 0x1C0132B94 (InitMice.c)
 *     InitKeyboard @ 0x1C01332C4 (InitKeyboard.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C0134104 (-_GetDigitizerFlags@@YAKXZ.c)
 *     SetDebugHotKeys @ 0x1C01345E8 (SetDebugHotKeys.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C0135034 (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0135418 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C01551F0 (RequestModeSwitchOnPowerUp.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ProcessHidInputViaRim @ 0x1C0229C44 (ProcessHidInputViaRim.c)
 *     UserSetTimer @ 0x1C0231578 (UserSetTimer.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rax
  _DWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTIMER *v16; // rax
  struct _KTIMER *v17; // rax
  _WORD *v18; // r8
  _DWORD *v19; // rdx
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  NTSTATUS v25; // ebx
  unsigned int i; // r14d
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // r8
  char DigitizerFlags; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // ebx
  NTSTATUS v35; // ebx
  __int64 v36; // rdi
  void *v37; // rcx
  _DWORD *v38; // rcx
  void **v39; // rdx
  void *v40; // rcx
  struct InteractiveControlManager *v41; // rbx
  unsigned __int16 *v42; // rax
  int v43; // ecx
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  LPCGUID v46; // r9
  LPCGUID v47; // r8
  LPCGUID v48; // r8
  LPCGUID v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rbx
  char *v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // rax
  char *v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  struct _KEVENT *v62; // rcx
  __int64 v63; // rdx
  char *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  PVOID *Object; // [rsp+28h] [rbp-E0h]
  int Objecta; // [rsp+28h] [rbp-E0h]
  int Objectb; // [rsp+28h] [rbp-E0h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PLARGE_INTEGER Timeouta; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  int OutputBufferLength; // [rsp+50h] [rbp-B8h]
  unsigned int v82[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  __int64 v84; // [rsp+78h] [rbp-90h] BYREF
  PVOID v85; // [rsp+80h] [rbp-88h] BYREF
  PRKEVENT Event; // [rsp+88h] [rbp-80h]
  PVOID v87; // [rsp+90h] [rbp-78h] BYREF
  __int64 v88; // [rsp+98h] [rbp-70h]
  __int128 v89; // [rsp+A0h] [rbp-68h]
  _BYTE v90[8]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v91[8]; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v93; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v94; // [rsp+E0h] [rbp-28h] BYREF
  __int128 SystemInformation; // [rsp+F0h] [rbp-18h] BYREF
  int v96; // [rsp+100h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  _DWORD *v99; // [rsp+138h] [rbp+30h]
  __int64 v100; // [rsp+140h] [rbp+38h]
  __int64 v101; // [rsp+148h] [rbp+40h]
  _DWORD v102[2]; // [rsp+150h] [rbp+48h] BYREF
  EVENT_DATA_DESCRIPTOR v103; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v105; // [rsp+188h] [rbp+80h]
  __int64 v106; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v107; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int *v109; // [rsp+1C8h] [rbp+C0h]
  __int64 v110; // [rsp+1D0h] [rbp+C8h]

  v1 = 1;
  v3 = 16;
  RemoteContext = GreGetRemoteContext();
  v5 = *a1;
  v6 = RemoteContext;
  gpkthreadRIT = (__int64)KeGetCurrentThread();
  v88 = RemoteContext;
  apObjects = (void **)Win32AllocPoolNonPaged(128LL, 2037609301LL);
  v7 = (struct _KWAIT_BLOCK *)Win32AllocPoolNonPaged(768LL, 2001433429LL);
  gWaitBlockArray = v7;
  if ( !apObjects )
    goto LABEL_178;
  if ( !v7 )
    goto LABEL_178;
  memset(apObjects, 0, 0x80uLL);
  apObjects[4] = (void *)*((_QWORD *)&aDeviceTemplate + 86);
  apObjects[5] = (void *)*((_QWORD *)&aDeviceTemplate + 91);
  apObjects[6] = (void *)*((_QWORD *)&aDeviceTemplate + 104);
  apObjects[7] = (void *)*((_QWORD *)&aDeviceTemplate + 109);
  apObjects[8] = (void *)*((_QWORD *)&aDeviceTemplate + 121);
  apObjects[9] = (void *)*((_QWORD *)&aDeviceTemplate + 156);
  apObjects[10] = (void *)*((_QWORD *)&aDeviceTemplate + 161);
  apObjects[11] = (void *)*((_QWORD *)&aDeviceTemplate + 166);
  apObjects[12] = (void *)*((_QWORD *)&aDeviceTemplate + 171);
  apObjects[13] = (void *)*((_QWORD *)&aDeviceTemplate + 179);
  apObjects[14] = (void *)*((_QWORD *)&aDeviceTemplate + 185);
  apObjects[15] = (void *)*((_QWORD *)&aDeviceTemplate + 191);
  *(_QWORD *)&v89 = PsGetThreadProcessId(KeGetCurrentThread());
  v96 = 16;
  *((_QWORD *)&v89 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v89;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  InitMice();
  UserSessionSwitchLeaveCrit(v9, v8);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_178;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  grcCursorClip = *(struct tagRECT *)(gpDispInfo + 104LL);
  v11 = *(_DWORD **)(GetDispInfo(gpDispInfo) + 88);
  *(_DWORD *)(gpsi + 5368LL) = v11[9] / 2;
  *(_DWORD *)(gpsi + 5372LL) = v11[10] / 2;
  gptCursorAsync = *(struct tagPOINT *)(gpsi + 5368LL);
  *(_DWORD *)(gpsi + 5344LL) = v11[13] / 2;
  *(_DWORD *)(gpsi + 5348LL) = v11[14] / 2;
  *(_DWORD *)(gpsi + 5352LL) = v11[17] / 2;
  *(_DWORD *)(gpsi + 5356LL) = v11[18] / 2;
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  UserSessionSwitchLeaveCrit(v13, v12);
  EnterCrit(0LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    LODWORD(Object) = 0;
    RegisterHotKey((struct tagWND *)1, (ULONG_PTR)Object);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  UpdateLastInput(
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    12LL);
  UserSessionSwitchLeaveCrit(v15, v14);
  v16 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v16;
  if ( !v16 )
    goto LABEL_178;
  KeInitializeTimer(v16);
  apObjects[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v17 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v17;
    if ( !v17 )
      goto LABEL_178;
    KeInitializeTimerEx(v17, SynchronizationTimer);
  }
  v18 = (_WORD *)gProtocolType;
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
      goto LABEL_178;
    v18 = (_WORD *)gProtocolType;
  }
  v19 = (_DWORD *)gServiceSessionId;
  v20 = (_DWORD *)gSessionId;
  if ( gSessionId != gServiceSessionId && !*v18 )
  {
    EnterCrit(0LL, 1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v22, v21);
    v20 = (_DWORD *)gSessionId;
    v19 = (_DWORD *)gServiceSessionId;
  }
  if ( *v20 == *v19 )
    gbFirstConnectionDone = 1;
  if ( *v20 )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v87, 0LL);
      v1 = 2;
      apObjects[3] = v87;
      Event = (PRKEVENT)apObjects[3];
      goto LABEL_23;
    }
LABEL_178:
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  if ( PoRequestShutdownEvent(apObjects + 3) < 0 )
    goto LABEL_178;
LABEL_23:
  if ( gSessionId != gServiceSessionId )
    CreatePointerDeviceProcessEvents();
  *((_QWORD *)&aDeviceTemplate + 80) = apObjects[3];
  *((_QWORD *)&aDeviceTemplate + 10) = CreateKernelEvent(1LL, 0LL);
  *((_QWORD *)&aDeviceTemplate + 150) = apObjects[3];
  if ( !apObjects[3] )
    goto LABEL_178;
  gpkeRITEvent = (PRKEVENT)apObjects[3];
  gptiRit = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)apObjects, v23, v24);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 440LL) |= 0x80u;
  *apObjects = *(void **)(gptiRit + 648LL);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  v85 = *(PVOID *)(v5 + 56);
  ObReferenceObjectByPointer(v85, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v25 = KeWaitForMultipleObjects(v1, &v85, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v25 == 1 && (gdwRITWakeReason & 8) == 0 );
  ObfDereferenceObject(v85);
  if ( v25 == 1 && (gdwRITWakeReason & 8) != 0 )
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
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 536LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 536LL) + 16LL), 0LL, 0LL);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( gSessionId != gServiceSessionId )
  {
    if ( gProtocolType )
    {
      RtlInitUnicodeString(&v93, 0LL);
      for ( i = 1; i <= 2; ++i )
      {
        v27 = 560LL * i;
        v28 = DeviceTypeToRimInputType(i);
        LOBYTE(OutputBufferLength) = 0;
        LODWORD(Timeout) = 0;
        if ( (int)RIMRegisterForInput(
                    v28,
                    0LL,
                    gpWin32kDriverObject,
                    *(_QWORD *)((char *)&aDeviceTemplate + v27 + 112),
                    *(_QWORD *)((char *)&aDeviceTemplate + v27 + 192),
                    0LL,
                    Timeout,
                    0LL,
                    Win32kRIMDevChangeCallback,
                    OutputBufferLength,
                    (char *)&aDeviceTemplate + v27 + 96) >= 0 )
        {
          LOBYTE(v29) = 1;
          RawInputManagerObjectResolveHandle(
            *((_QWORD *)&aDeviceTemplate + 70 * i + 12),
            3LL,
            v29,
            (char *)&aDeviceTemplate + v27 + 104);
          if ( i == 1 )
          {
            LOBYTE(Objecta) = 0;
            RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
              *((_QWORD *)&aDeviceTemplate + 82),
              &v93,
              1LL,
              ghRemoteKeyboardChannel,
              Objecta,
              v90);
          }
          *((_DWORD *)&aDeviceTemplate + 140 * i + 111) = 64;
          LOBYTE(Objecta) = 0;
          RIMReadInput(
            *((_QWORD *)&aDeviceTemplate + 70 * i + 12),
            (char *)&aDeviceTemplate + v27 + 488,
            *((unsigned int *)&aDeviceTemplate + 140 * i + 111),
            *((_QWORD *)&aDeviceTemplate + 70 * i + 19),
            Objecta,
            (char *)&aDeviceTemplate + v27 + 464,
            (char *)&aDeviceTemplate + v27 + 440,
            (char *)&aDeviceTemplate + v27 + 448);
        }
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
    gnRITdemonTimerId = SetRITTimer(gnRITdemonTimerId, 0x3E8u, (__int64)xxxHungAppDemon, 0);
  }
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v34 = 0;
  }
  else
  {
    v34 = 1;
    UserEnterUserCritSec(v32, v31, v33);
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v34 )
    UserLeaveUserCritSec();
  if ( gbRITAlerted )
    gbRITAlerted = 0;
  UserSessionSwitchLeaveCrit(v32, v31);
  while ( 1 )
  {
LABEL_61:
    v35 = KeWaitForMultipleObjects(v3, apObjects, WaitAny, WrUserRequest, 0, 1u, 0LL, gWaitBlockArray);
    v82[0] = v35;
    if ( gdwUpdateKeyboard )
    {
      EnterDeviceInfoListCrit_();
      v36 = gpDeviceInfoList;
      if ( gpDeviceInfoList )
      {
        do
        {
          if ( *(_BYTE *)(v36 + 48) == 1 )
          {
            v37 = *(void **)(v36 + 224);
            if ( v37 )
            {
              if ( (gdwUpdateKeyboard & 1) != 0 )
                ZwDeviceIoControlFile(v37, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0004u, &gktp, 6u, 0LL, 0);
              if ( (gdwUpdateKeyboard & 2) != 0 )
                ZwDeviceIoControlFile(
                  *(HANDLE *)(v36 + 224),
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
          v36 = *(_QWORD *)(v36 + 56);
        }
        while ( v36 );
        v35 = v82[0];
        v6 = v88;
      }
      UpdateRimManagedKeyboardLeds();
      LeaveDeviceInfoListCrit_();
      v38 = (_DWORD *)gdwUpdateKeyboard;
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
        v38 = (_DWORD *)gdwUpdateKeyboard;
      }
      *v38 &= 0xFFFFFFF8;
    }
    if ( v35 == 3 )
      break;
    switch ( v35 )
    {
      case 2:
        EnterCrit(0LL, 1LL);
        v51 = gProtocolType;
        if ( gProtocolType )
        {
          DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(v6 + 40), 1LL, 0LL, 0);
        }
        else if ( gfRemotingConsole )
        {
          v50 = gConsoleShadowhDev;
          if ( gConsoleShadowhDev )
            HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
        }
LABEL_168:
        UserSessionSwitchLeaveCrit(v50, v51);
        break;
      case 4:
        EnterCrit(0LL, 1LL);
        v52 = *((_QWORD *)&aDeviceTemplate + 82);
LABEL_128:
        RIMOnPnpNotification(v52);
        goto LABEL_168;
      case 5:
        EnterCrit(0LL, 1LL);
        v54 = 0LL;
        v55 = (char *)*((_QWORD *)&aDeviceTemplate + 131);
        if ( v55 != (char *)&aDeviceTemplate + 1056 )
          v54 = *((_QWORD *)&aDeviceTemplate + 131);
        UserSessionSwitchLeaveCrit(v55, v53);
        v57 = aDeviceTemplate;
        if ( *((int *)&aDeviceTemplate + 252) >= 0 )
        {
          ProcessKeyboardInputViaRim(
            *((void **)&aDeviceTemplate + 131),
            v56,
            *((_DWORD *)&aDeviceTemplate + 254),
            *((void **)&aDeviceTemplate + 128));
          if ( v54 )
            *((_QWORD *)&aDeviceTemplate + 131) = (char *)&aDeviceTemplate + 1056;
          v57 = aDeviceTemplate;
        }
        *(_DWORD *)(v57 + 1004) = 64;
        WaitBlockArray = (PKWAIT_BLOCK)((char *)&aDeviceTemplate + 1008);
        v58 = (char *)&aDeviceTemplate + 1048;
        Timeouta = (PLARGE_INTEGER)((char *)&aDeviceTemplate + 1000);
        v59 = *((unsigned int *)&aDeviceTemplate + 251);
        HandleInformation = (POBJECT_HANDLE_INFORMATION)((char *)&aDeviceTemplate + 1024);
        v60 = *((_QWORD *)&aDeviceTemplate + 89);
        v61 = *((_QWORD *)&aDeviceTemplate + 82);
LABEL_137:
        LOBYTE(Objectb) = 0;
        RIMReadInput(v61, v58, v59, v60, Objectb, HandleInformation, Timeouta, WaitBlockArray);
        if ( v54 )
        {
          EnterCrit(0LL, 1LL);
          RIMFreeKernelMem(v54);
          goto LABEL_168;
        }
        break;
      case 6:
        EnterCrit(0LL, 1LL);
        RtlInitUnicodeString(&v94, 0LL);
        LOBYTE(Objectb) = 0;
        *((_DWORD *)&aDeviceTemplate + 212) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                                *((_QWORD *)&aDeviceTemplate + 82),
                                                &v94,
                                                1LL,
                                                ghRemoteKeyboardChannel,
                                                Objectb,
                                                v91);
        v62 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 105);
LABEL_157:
        KeSetEvent(v62, 1, 0);
        goto LABEL_168;
      case 7:
        EnterCrit(0LL, 1LL);
        RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 82), 1LL);
        v62 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 112);
        goto LABEL_157;
      case 9:
        EnterCrit(0LL, 1LL);
        v52 = *((_QWORD *)&aDeviceTemplate + 152);
        goto LABEL_128;
      case 10:
        EnterCrit(0LL, 1LL);
        v54 = 0LL;
        v64 = (char *)*((_QWORD *)&aDeviceTemplate + 201);
        if ( v64 != (char *)&aDeviceTemplate + 1616 )
          v54 = *((_QWORD *)&aDeviceTemplate + 201);
        UserSessionSwitchLeaveCrit(v64, v63);
        v65 = aDeviceTemplate;
        if ( *((int *)&aDeviceTemplate + 392) >= 0 )
        {
          ProcessHidInputViaRim(*((void **)&aDeviceTemplate + 201));
          if ( v54 )
            *((_QWORD *)&aDeviceTemplate + 201) = (char *)&aDeviceTemplate + 1616;
          v65 = aDeviceTemplate;
        }
        *(_DWORD *)(v65 + 1564) = 64;
        WaitBlockArray = (PKWAIT_BLOCK)((char *)&aDeviceTemplate + 1568);
        v58 = (char *)&aDeviceTemplate + 1608;
        Timeouta = (PLARGE_INTEGER)((char *)&aDeviceTemplate + 1560);
        v59 = *((unsigned int *)&aDeviceTemplate + 391);
        HandleInformation = (POBJECT_HANDLE_INFORMATION)((char *)&aDeviceTemplate + 1584);
        v60 = *((_QWORD *)&aDeviceTemplate + 159);
        v61 = *((_QWORD *)&aDeviceTemplate + 152);
        goto LABEL_137;
      case 11:
        EnterCrit(0LL, 1LL);
        v66 = 0LL;
LABEL_143:
        RIMOnTimerNotification(*((_QWORD *)&aDeviceTemplate + 152), v66);
        goto LABEL_168;
      case 12:
        EnterCrit(0LL, 1LL);
        v66 = 1LL;
        goto LABEL_143;
      case 13:
        EnterCrit(0LL, 1LL);
        RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 152), 2LL);
        v62 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 182);
        goto LABEL_157;
      case 14:
        EnterCrit(0LL, 1LL);
        if ( gProtocolType )
          goto LABEL_168;
        RIMDirectStartStopDeviceRead(*((_QWORD *)&aDeviceTemplate + 152));
        v62 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 188);
        goto LABEL_157;
      case 15:
        EnterCrit(0LL, 1LL);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 152), gpWin32kDriverObject);
        v62 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 194);
        goto LABEL_157;
      case 8:
        EnterCrit(0LL, 1LL);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 82), gpWin32kDriverObject);
        v62 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 124);
        goto LABEL_157;
      default:
        if ( ((v35 - 1) & 0xFFFFFEFF) == 0 )
        {
          EnterCrit(0LL, 1LL);
          if ( v35 == 1 && gbRITAlerted )
            KeTestAlertThread(0LL);
          TimersProc();
          UserSessionSwitchLeaveCrit(v68, v67);
          if ( gnRetryReadInput != dword_1C0328F4C )
          {
            dword_1C0328F4C = gnRetryReadInput;
            KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 10), 1, 0);
            WakeRIT(1LL);
          }
        }
        if ( gspwndAltTab )
        {
          EnterCrit(0LL, 1LL);
          while ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 400LL) + 6LL) & 0x40) != 0 )
            xxxReceiveMessage(gptiRit);
          goto LABEL_168;
        }
        break;
    }
  }
  KeClearEvent(gpkeRITEvent);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(&v82[1]) )
        goto LABEL_61;
      if ( v82[1] != 4 )
        break;
      ProcessQueuedMouseEvents();
    }
    if ( v82[1] == 1 || v82[1] == 2 )
    {
      EnterCrit(0LL, 1LL);
      goto LABEL_103;
    }
    if ( v82[1] == 8 )
      break;
    switch ( v82[1] )
    {
      case 0x10u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 0x20u:
        EnterCrit(0LL, 1LL);
        RitTakeOver();
        v3 += 7;
        apObjects[9] = (void *)*((_QWORD *)&aDeviceTemplate + 156);
        apObjects[10] = (void *)*((_QWORD *)&aDeviceTemplate + 161);
        apObjects[11] = (void *)*((_QWORD *)&aDeviceTemplate + 166);
        apObjects[12] = (void *)*((_QWORD *)&aDeviceTemplate + 171);
        apObjects[13] = (void *)*((_QWORD *)&aDeviceTemplate + 179);
        apObjects[14] = (void *)*((_QWORD *)&aDeviceTemplate + 185);
        v39 = apObjects;
        v40 = (void *)*((_QWORD *)&aDeviceTemplate + 191);
        apObjects[15] = v40;
        goto LABEL_103;
      case 0x40u:
        EnterCrit(0LL, 1LL);
        if ( (unsigned int)RitPrepDitTakeOver() )
        {
          v3 -= 7;
          gbDIT = 1;
        }
        goto LABEL_103;
      case 0x200u:
        EnterCrit(0LL, 1LL);
        ZwSetEvent(ghDITRITEvent, 0LL);
        goto LABEL_103;
      case 0x80u:
        EnterCrit(0LL, 1LL);
        RequestModeSwitchOnPowerUp();
        goto LABEL_103;
      case 0x100u:
        EnterCrit(0LL, 1LL);
        CheckPointerDeviceConfiguration();
        v41 = InteractiveControlManager::Instance();
        v82[0] = 0;
        if ( hProvider > 4u )
        {
          TlgCreateSz(&pDesc, "InteractiveControlManager::GetExternalParameters entry");
          v42 = *(unsigned __int16 **)(gptiCurrent + 448LL);
          v99 = v102;
          v100 = 2LL;
          v43 = *v42;
          v101 = *((_QWORD *)v42 + 1);
          v102[0] = v43;
          v102[1] = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF42A, v44, v45, 5u, &pData);
        }
        v82[0] = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v41 + 84));
        if ( (v82[0] & 0x80000000) != 0 && hProvider > 2u )
        {
          TlgCreateSz(&v104, "Function failed.");
          LODWORD(v84) = (_DWORD)v46;
          v105 = &v84;
          v106 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v47, v46, 4u, &v103);
        }
        if ( hProvider > 4u )
        {
          TlgCreateSz(&v108, "InteractiveControlManager::GetExternalParameters exit");
          v110 = 4LL;
          v109 = v82;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v48, v49, 4u, &v107);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_103:
        UserSessionSwitchLeaveCrit(v40, v39);
        break;
    }
  }
  InitiateWin32kCleanup();
  if ( gSessionId )
  {
    EnterCrit(0LL, 1LL);
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(apObjects[3]);
    UserSessionSwitchLeaveCrit(v70, v69);
  }
  if ( Handle )
    ZwClose(Handle);
  EnterCrit(0LL, 1LL);
  vCleanupRimClientWorker(1LL);
  if ( !gbDIT )
    vCleanupRimClientWorker(2LL);
  return UserSessionSwitchLeaveCrit(v72, v71);
}
