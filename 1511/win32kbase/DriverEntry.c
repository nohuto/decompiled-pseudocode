/*
 * XREFs of DriverEntry @ 0x1C013B110
 * Callers:
 *     GsDriverEntry @ 0x1C013CF70 (GsDriverEntry.c)
 * Callees:
 *     IsGetKbdTablesFallbackSupported_0 @ 0x1C00024C0 (IsGetKbdTablesFallbackSupported_0.c)
 *     GetKbdTablesFallback_0 @ 0x1C00024C8 (GetKbdTablesFallback_0.c)
 *     IsGetausMouseVKeySupported_0 @ 0x1C00024D0 (IsGetausMouseVKeySupported_0.c)
 *     GetausMouseVKey_0 @ 0x1C00024D8 (GetausMouseVKey_0.c)
 *     IsUserkTraceLoggingSupported_0 @ 0x1C0002678 (IsUserkTraceLoggingSupported_0.c)
 *     IsInitializeWin32CrossSessionGlobalsSupported_0 @ 0x1C0002710 (IsInitializeWin32CrossSessionGlobalsSupported_0.c)
 *     InitializeWin32CrossSessionGlobals_0 @ 0x1C0002718 (InitializeWin32CrossSessionGlobals_0.c)
 *     IsInitializeWin32PoolTrackingSupported_0 @ 0x1C0002720 (IsInitializeWin32PoolTrackingSupported_0.c)
 *     InitializeWin32PoolTracking_0 @ 0x1C0002728 (InitializeWin32PoolTracking_0.c)
 *     IsInitializeHidRequestListSupported_0 @ 0x1C0002730 (IsInitializeHidRequestListSupported_0.c)
 *     InitializeHidRequestList_0 @ 0x1C0002738 (InitializeHidRequestList_0.c)
 *     IsInitializePointerInputSupported_0 @ 0x1C0002740 (IsInitializePointerInputSupported_0.c)
 *     InitializePointerInput_0 @ 0x1C0002748 (InitializePointerInput_0.c)
 *     IsInitializePointerPredictionSupported_0 @ 0x1C0002750 (IsInitializePointerPredictionSupported_0.c)
 *     InitializePointerPrediction_0 @ 0x1C0002758 (InitializePointerPrediction_0.c)
 *     IsInitializePointerDevicesPresenceStateSupported_0 @ 0x1C0002760 (IsInitializePointerDevicesPresenceStateSupported_0.c)
 *     InitializePointerDevicesPresenceState_0 @ 0x1C0002768 (InitializePointerDevicesPresenceState_0.c)
 *     IsMagContextInitializeSupported_0 @ 0x1C0002770 (IsMagContextInitializeSupported_0.c)
 *     MagContextInitialize_0 @ 0x1C0002778 (MagContextInitialize_0.c)
 *     EnableUserkTraceLogging_0 @ 0x1C0002780 (EnableUserkTraceLogging_0.c)
 *     IsInitTimerCoalescingSupported_0 @ 0x1C0002788 (IsInitTimerCoalescingSupported_0.c)
 *     InitTimerCoalescing_0 @ 0x1C0002790 (InitTimerCoalescing_0.c)
 *     IsInitializeFeedbackDataSupported_0 @ 0x1C0002798 (IsInitializeFeedbackDataSupported_0.c)
 *     InitializeFeedbackData_0 @ 0x1C00027A0 (InitializeFeedbackData_0.c)
 *     IsDDCCIInitializeSupported_0 @ 0x1C00027A8 (IsDDCCIInitializeSupported_0.c)
 *     DDCCIInitializeWrap_0 @ 0x1C00027B0 (DDCCIInitializeWrap_0.c)
 *     DCompSessionInitialize_0 @ 0x1C00027B8 (DCompSessionInitialize_0.c)
 *     IsInitDwmInputProcessingSupported_0 @ 0x1C00027C0 (IsInitDwmInputProcessingSupported_0.c)
 *     InitDwmInputProcessing_0 @ 0x1C00027C8 (InitDwmInputProcessing_0.c)
 *     IsInitializeNavigationWindowRegistrySupported_0 @ 0x1C00027D0 (IsInitializeNavigationWindowRegistrySupported_0.c)
 *     InitializeNavigationWindowRegistry_0 @ 0x1C00027D8 (InitializeNavigationWindowRegistry_0.c)
 *     SysEntryGetW32pArgumentTable_0 @ 0x1C0002F90 (SysEntryGetW32pArgumentTable_0.c)
 *     SysEntryGetW32pServiceLimit_0 @ 0x1C0002F98 (SysEntryGetW32pServiceLimit_0.c)
 *     SysEntryGetW32pServiceTable_0 @ 0x1C0002FA0 (SysEntryGetW32pServiceTable_0.c)
 *     SysEntryPsEstablishWin32Callouts_0 @ 0x1C0002FA8 (SysEntryPsEstablishWin32Callouts_0.c)
 *     CreateKernelEvent @ 0x1C0011650 (CreateKernelEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x1C006324C (RetrieveCurrentDisplayState.c)
 *     GetWin32kDriverObject @ 0x1C00650B0 (GetWin32kDriverObject.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0066BD4 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeGraphicsInfrastructure @ 0x1C0066C54 (InitializeGraphicsInfrastructure.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C0066F94 (-CheckInitialSessions@@YAJXZ.c)
 *     RIMInitialize @ 0x1C0067120 (RIMInitialize.c)
 *     McGenEventRegister @ 0x1C0067634 (McGenEventRegister.c)
 *     WinSqmStartSession @ 0x1C0067664 (WinSqmStartSession.c)
 *     PowerUpdateBrightnessLevels @ 0x1C0067944 (PowerUpdateBrightnessLevels.c)
 *     RIMInitializeAutoLogger @ 0x1C00679B8 (RIMInitializeAutoLogger.c)
 *     OPMInitialize @ 0x1C0067A34 (OPMInitialize.c)
 *     CreateKernelSemaphore @ 0x1C0067CA0 (CreateKernelSemaphore.c)
 *     WinSqmIsOptedInEx @ 0x1C0068A00 (WinSqmIsOptedInEx.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     TraceLoggingRegisterEx @ 0x1C01280BC (TraceLoggingRegisterEx.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 *     InitCreateUserCrit @ 0x1C013AEF8 (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v3; // rcx
  NTSTATUS CurrentDisplayState; // ebx
  PVOID v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 W32pArgumentTable_0; // rdi
  unsigned int W32pServiceLimit_0; // ebx
  __int64 W32pServiceTable_0; // rax
  ETWENABLECALLBACK *v15; // rdx
  const GUID *v16; // rcx
  void *v17; // r8
  ULONGLONG *v18; // r9
  void *v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v29; // r8
  LONGLONG v30; // rdi
  __int64 OutputBufferLength; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _QWORD OutputBuffer[2]; // [rsp+40h] [rbp-40h] BYREF
  int v34; // [rsp+50h] [rbp-30h]
  int v35; // [rsp+54h] [rbp-2Ch]
  int v36; // [rsp+58h] [rbp-28h]
  int v37; // [rsp+5Ch] [rbp-24h]
  int v38; // [rsp+60h] [rbp-20h]
  int v39; // [rsp+64h] [rbp-1Ch]
  int v40; // [rsp+68h] [rbp-18h]
  int v41; // [rsp+6Ch] [rbp-14h]
  unsigned __int8 v42; // [rsp+70h] [rbp-10h]
  int v43; // [rsp+74h] [rbp-Ch]
  __int64 SystemInformation; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+50h]
  __int64 v46; // [rsp+D8h] [rbp+58h]

  SystemInformation = 0LL;
  EnsureRequiredApiSetExtensions();
  if ( (int)IsGetKbdTablesFallbackSupported_0() >= 0 )
  {
    GetKbdTablesFallback_0();
    gpKbdTbl = v45;
  }
  if ( (int)IsGetausMouseVKeySupported_0() >= 0 )
  {
    GetausMouseVKey_0();
    gpusMouseVKey = v46;
  }
  gSessionId = PsGetCurrentProcessSessionId(v3);
  CurrentDisplayState = 0;
  if ( dword_1C0109950 == 1 )
  {
    CurrentDisplayState = -1073741801;
  }
  else if ( (int)IsInitializeWin32CrossSessionGlobalsSupported_0() >= 0 )
  {
    CurrentDisplayState = InitializeWin32CrossSessionGlobals_0();
  }
  if ( dword_1C0109950 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported_0() >= 0
    && !(unsigned int)InitializeWin32PoolTracking_0()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0109950 == 3 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
  {
    LODWORD(SystemInformation) = 8;
    CurrentDisplayState = ZwQuerySystemInformation(
                            MaxSystemInfoClass|SystemProcessInformation,
                            &SystemInformation,
                            8u,
                            0LL);
    if ( CurrentDisplayState < 0 || (gbOSTestSigningEnabled = 1, (SystemInformation & 0x200000000LL) == 0) )
      gbOSTestSigningEnabled = 0;
    WdInitialize();
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0101D10, 0LL, v5);
  }
  if ( dword_1C0109950 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  if ( dword_1C0109950 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C01066D8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  v6 = &gTimerHashTable;
  W32UserProbeAddress = (void *)MmUserProbeAddress;
  v7 = 64LL;
  do
  {
    v6[1] = v6;
    *v6 = v6;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  memset(&gTimerId, 0, 0xFE0uLL);
  if ( (int)IsInitializeHidRequestListSupported_0() >= 0 )
    InitializeHidRequestList_0();
  if ( (int)IsInitializePointerInputSupported_0() >= 0 )
    InitializePointerInput_0();
  if ( (int)IsInitializePointerPredictionSupported_0() >= 0 )
    InitializePointerPrediction_0();
  gSessionId = PsGetCurrentProcessSessionId(v8);
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( (int)IsInitializePointerDevicesPresenceStateSupported_0() >= 0 )
    InitializePointerDevicesPresenceState_0();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  v9 = CheckInitialSessions();
  CurrentDisplayState = v9;
  if ( v9 && v9 != -1073741771 )
  {
    if ( v9 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_43;
  }
  if ( (!gbRemoteSession || gbFirstInteractiveSession) && !gServiceSessionId )
    MEMORY[0xFFFFF780000002D8] = gSessionId;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_49;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  if ( !gSessionId )
  {
    W32pArgumentTable_0 = SysEntryGetW32pArgumentTable_0();
    W32pServiceLimit_0 = SysEntryGetW32pServiceLimit_0();
    W32pServiceTable_0 = SysEntryGetW32pServiceTable_0();
    KeAddSystemServiceTable(W32pServiceTable_0, gpCountTable, W32pServiceLimit_0, W32pArgumentTable_0, 1);
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_49;
  if ( !gSessionId )
  {
    SysEntryPsEstablishWin32Callouts_0();
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  RIMInitialize();
  if ( (int)IsMagContextInitializeSupported_0() >= 0 )
    MagContextInitialize_0();
  McGenEventRegister(v16, v15, v17, v18);
  if ( (int)IsUserkTraceLoggingSupported_0() >= 0 )
    EnableUserkTraceLogging_0();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback, v19);
  gbTraceLoggingInitialized = 1;
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( (int)IsInitTimerCoalescingSupported_0() >= 0 )
    InitTimerCoalescing_0();
  if ( (int)IsInitializeFeedbackDataSupported_0() >= 0 )
    InitializeFeedbackData_0();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_49;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_49;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_49;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_49;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_49;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters )
    goto LABEL_49;
  gcDITHitTestWaiters = 0;
  gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemDITHitTestWaiters
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (gcRITBlockedOnDITWaiters = 0, (gpsemRITBlockedOnDITWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (hModuleWin = (__int64)W32UserProbeAddress, !InitializeGre()) )
  {
LABEL_49:
    CurrentDisplayState = -1073741801;
LABEL_43:
    Win32KDriverUnload(0LL);
    return CurrentDisplayState;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x38u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  giPowerOffTimeOutMs = 1000 * v34;
  dword_1C010475C = v36 == 1;
  dword_1C0104768 = v37 == 0;
  dword_1C0104784 = v42;
  dword_1C010477C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C0104764 = 1;
  dword_1C0104788 = v43 != 0;
  dword_1C0104734 = 1;
  dword_1C0104714 = 0;
  *(__int64 *)((char *)&qword_1C010471C + 4) = 0LL;
  qword_1C010471C = (unsigned int)dword_1C010477C;
  dword_1C0104728 = 0;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  dword_1C0104718 = dword_1C010477C;
  dword_1C010472C = 0;
  giDimTimeOutMs = 1000 * v35;
  dword_1C010474C = v40;
  dword_1C0104744 = v39;
  dword_1C010473C = v38;
  dword_1C0104750 = v41;
  PowerUpdateBrightnessLevels();
  dword_1C0104754 = -1;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v27 = PsGetCurrentThreadWin32Thread(v24);
    if ( v27 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v25 = 0x200000010000000LL;
      v30 = PerformanceCounter.QuadPart - *(_QWORD *)(v27 + 8);
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
      {
        LOBYTE(v26) = byte_1C01020C8 - 1;
        if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LODWORD(OutputBufferLength) = 0;
          Template_xqx(
            v26,
            &AcquiredExclusiveUserCritEvent,
            v29.QuadPart,
            v30,
            OutputBufferLength,
            gullUserCritAcquireToken);
        }
      }
      if ( v30 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(OutputBufferLength) = 1000 * v30 / gliQpcFreq.QuadPart;
        Template_xqx(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v29.QuadPart,
          0LL,
          OutputBufferLength,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v27 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v23;
    gbValidateHandleForIL = 1;
    if ( !gpWin32kDriverObject )
      GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v26, v25);
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C0103494 = v21;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    goto LABEL_43;
  RIMInitializeAutoLogger(v21, (__int64)&DestinationString);
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( (int)IsDDCCIInitializeSupported_0() >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap_0();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  CurrentDisplayState = DCompSessionInitialize_0();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( (int)IsInitDwmInputProcessingSupported_0() >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing_0();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported_0() >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry_0();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  return 0;
}
