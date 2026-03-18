/*
 * XREFs of DriverEntry @ 0x1C0154670
 * Callers:
 *     GsDriverEntry @ 0x1C0157200 (GsDriverEntry.c)
 * Callees:
 *     IsGetKbdTablesFallbackSupported_0 @ 0x1C0002498 (IsGetKbdTablesFallbackSupported_0.c)
 *     GetKbdTablesFallback_0 @ 0x1C00024A0 (GetKbdTablesFallback_0.c)
 *     IsGetausMouseVKeySupported_0 @ 0x1C00024A8 (IsGetausMouseVKeySupported_0.c)
 *     GetausMouseVKey_0 @ 0x1C00024B0 (GetausMouseVKey_0.c)
 *     IsUserkTraceLoggingSupported_0 @ 0x1C0002628 (IsUserkTraceLoggingSupported_0.c)
 *     IsInitializeWin32CrossSessionGlobalsSupported_0 @ 0x1C00026C0 (IsInitializeWin32CrossSessionGlobalsSupported_0.c)
 *     InitializeWin32CrossSessionGlobals_0 @ 0x1C00026C8 (InitializeWin32CrossSessionGlobals_0.c)
 *     IsInitializeWin32PoolTrackingSupported_0 @ 0x1C00026D0 (IsInitializeWin32PoolTrackingSupported_0.c)
 *     InitializeWin32PoolTracking_0 @ 0x1C00026D8 (InitializeWin32PoolTracking_0.c)
 *     IsInitializeHidRequestListSupported_0 @ 0x1C00026E0 (IsInitializeHidRequestListSupported_0.c)
 *     InitializeHidRequestList_0 @ 0x1C00026E8 (InitializeHidRequestList_0.c)
 *     IsInitializePointerInputSupported_0 @ 0x1C00026F0 (IsInitializePointerInputSupported_0.c)
 *     InitializePointerInput_0 @ 0x1C00026F8 (InitializePointerInput_0.c)
 *     IsInitializePointerPredictionSupported_0 @ 0x1C0002700 (IsInitializePointerPredictionSupported_0.c)
 *     InitializePointerPrediction_0 @ 0x1C0002708 (InitializePointerPrediction_0.c)
 *     IsInitializePointerDevicesPresenceStateSupported_0 @ 0x1C0002710 (IsInitializePointerDevicesPresenceStateSupported_0.c)
 *     InitializePointerDevicesPresenceState_0 @ 0x1C0002718 (InitializePointerDevicesPresenceState_0.c)
 *     IsMagContextInitializeSupported_0 @ 0x1C0002720 (IsMagContextInitializeSupported_0.c)
 *     MagContextInitialize_0 @ 0x1C0002728 (MagContextInitialize_0.c)
 *     EnableUserkTraceLogging_0 @ 0x1C0002730 (EnableUserkTraceLogging_0.c)
 *     IsInitTimerCoalescingSupported_0 @ 0x1C0002738 (IsInitTimerCoalescingSupported_0.c)
 *     InitTimerCoalescing_0 @ 0x1C0002740 (InitTimerCoalescing_0.c)
 *     IsInitializeFeedbackDataSupported_0 @ 0x1C0002748 (IsInitializeFeedbackDataSupported_0.c)
 *     InitializeFeedbackData_0 @ 0x1C0002750 (InitializeFeedbackData_0.c)
 *     IsDDCCIInitializeSupported_0 @ 0x1C0002758 (IsDDCCIInitializeSupported_0.c)
 *     DDCCIInitializeWrap_0 @ 0x1C0002760 (DDCCIInitializeWrap_0.c)
 *     DCompSessionInitialize_0 @ 0x1C0002768 (DCompSessionInitialize_0.c)
 *     IsInitDwmInputProcessingSupported_0 @ 0x1C0002770 (IsInitDwmInputProcessingSupported_0.c)
 *     InitDwmInputProcessing_0 @ 0x1C0002778 (InitDwmInputProcessing_0.c)
 *     IsInitializeNavigationWindowRegistrySupported_0 @ 0x1C0002780 (IsInitializeNavigationWindowRegistrySupported_0.c)
 *     InitializeNavigationWindowRegistry_0 @ 0x1C0002788 (InitializeNavigationWindowRegistry_0.c)
 *     SysEntryGetW32pArgumentTable_0 @ 0x1C0002F70 (SysEntryGetW32pArgumentTable_0.c)
 *     SysEntryGetW32pServiceLimit_0 @ 0x1C0002F78 (SysEntryGetW32pServiceLimit_0.c)
 *     SysEntryGetW32pServiceTable_0 @ 0x1C0002F80 (SysEntryGetW32pServiceTable_0.c)
 *     SysEntryGetW32pArgumentTableFilter_0 @ 0x1C0002F88 (SysEntryGetW32pArgumentTableFilter_0.c)
 *     SysEntryGetW32pServiceLimitFilter_0 @ 0x1C0002F90 (SysEntryGetW32pServiceLimitFilter_0.c)
 *     SysEntryGetW32pServiceTableFilter_0 @ 0x1C0002F98 (SysEntryGetW32pServiceTableFilter_0.c)
 *     SysEntryPsEstablishWin32Callouts_0 @ 0x1C0002FA0 (SysEntryPsEstablishWin32Callouts_0.c)
 *     CreateKernelEvent @ 0x1C000D450 (CreateKernelEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0051A34 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeGraphicsInfrastructure @ 0x1C0051AB4 (InitializeGraphicsInfrastructure.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C0051DEC (-CheckInitialSessions@@YAJXZ.c)
 *     RIMInitialize @ 0x1C0051F80 (RIMInitialize.c)
 *     ?CoreMsgInitialize@@YAJXZ @ 0x1C005261C (-CoreMsgInitialize@@YAJXZ.c)
 *     McGenEventRegister @ 0x1C0052774 (McGenEventRegister.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C00527A4 (TlgRegisterAggregateProviderEx.c)
 *     WinSqmStartSession @ 0x1C005290C (WinSqmStartSession.c)
 *     CreateKernelSemaphore @ 0x1C0052BF0 (CreateKernelSemaphore.c)
 *     WinSqmIsOptedInEx @ 0x1C0052C40 (WinSqmIsOptedInEx.c)
 *     OPMInitialize @ 0x1C0052E28 (OPMInitialize.c)
 *     RIMInitializeAutoLogger @ 0x1C0053084 (RIMInitializeAutoLogger.c)
 *     PowerUpdateBrightnessLevels @ 0x1C0053100 (PowerUpdateBrightnessLevels.c)
 *     PowerIsDimTimeOutManual @ 0x1C0053180 (PowerIsDimTimeOutManual.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     GetWin32kDriverObject @ 0x1C0081FB0 (GetWin32kDriverObject.c)
 *     RetrieveCurrentDisplayState @ 0x1C00892BC (RetrieveCurrentDisplayState.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C00B4504 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     TraceLoggingRegisterEx @ 0x1C0142000 (TraceLoggingRegisterEx.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 *     InitCreateUserCrit @ 0x1C0154458 (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v3; // rcx
  NTSTATUS CurrentDisplayState; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 W32pArgumentTable_0; // rdi
  unsigned int W32pServiceLimit_0; // ebx
  __int64 W32pServiceTable_0; // rax
  __int64 W32pArgumentTableFilter_0; // rdi
  unsigned int W32pServiceLimitFilter_0; // ebx
  __int64 W32pServiceTableFilter_0; // rax
  ETWENABLECALLBACK *v16; // rdx
  const GUID *v17; // rcx
  void *v18; // r8
  ULONGLONG *v19; // r9
  __int64 v20; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rsi
  LARGE_INTEGER v25; // rcx
  LARGE_INTEGER v26; // rdi
  LARGE_INTEGER v27; // r8
  __int64 v28; // rcx
  HANDLE CurrentProcessId; // rax
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-A9h]
  __int64 v31; // [rsp+40h] [rbp-89h]
  _QWORD OutputBuffer[2]; // [rsp+50h] [rbp-79h] BYREF
  int v33; // [rsp+60h] [rbp-69h]
  int v34; // [rsp+64h] [rbp-65h]
  int v35; // [rsp+68h] [rbp-61h]
  int v36; // [rsp+6Ch] [rbp-5Dh]
  int v37; // [rsp+70h] [rbp-59h]
  int v38; // [rsp+74h] [rbp-55h]
  int v39; // [rsp+78h] [rbp-51h]
  int v40; // [rsp+7Ch] [rbp-4Dh]
  unsigned __int8 v41; // [rsp+80h] [rbp-49h]
  unsigned __int8 v42; // [rsp+81h] [rbp-48h]
  int v43; // [rsp+84h] [rbp-45h]
  char v44; // [rsp+88h] [rbp-41h]
  struct _CLIENT_ID ClientId; // [rsp+90h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-29h] BYREF
  struct _UNICODE_STRING v47; // [rsp+B0h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-9h] BYREF
  int v49; // [rsp+130h] [rbp+67h] BYREF
  __int64 SystemInformation; // [rsp+140h] [rbp+77h] BYREF
  __int64 v51; // [rsp+148h] [rbp+7Fh]

  SystemInformation = 0LL;
  rbc_InitializeFeatureStaging();
  EnsureRequiredApiSetExtensions();
  if ( (int)IsGetKbdTablesFallbackSupported_0() >= 0 )
  {
    GetKbdTablesFallback_0();
    gpKbdTbl = v51;
  }
  if ( (int)IsGetausMouseVKeySupported_0() >= 0 )
  {
    GetausMouseVKey_0();
    gpusMouseVKey = v31;
  }
  gSessionId = PsGetCurrentProcessSessionId(v3);
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  CurrentDisplayState = 0;
  if ( dword_1C0120D80 == 1 )
  {
    CurrentDisplayState = -1073741801;
  }
  else if ( (int)IsInitializeWin32CrossSessionGlobalsSupported_0() >= 0 )
  {
    CurrentDisplayState = InitializeWin32CrossSessionGlobals_0();
  }
  if ( dword_1C0120D80 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported_0() >= 0
    && !(unsigned int)InitializeWin32PoolTracking_0()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0120D80 == 3 )
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
    TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  }
  if ( dword_1C0120D80 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  if ( dword_1C0120D80 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C011DAE8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  v5 = &gTimerHashTable;
  W32UserProbeAddress = MmUserProbeAddress;
  v6 = 64LL;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  memset(&gTimerId, 0, 0xFE0uLL);
  if ( (int)IsInitializeHidRequestListSupported_0() >= 0 )
    InitializeHidRequestList_0();
  if ( (int)IsInitializePointerInputSupported_0() >= 0 )
    InitializePointerInput_0();
  if ( (int)IsInitializePointerPredictionSupported_0() >= 0 )
    InitializePointerPrediction_0();
  if ( (int)IsInitializePointerDevicesPresenceStateSupported_0() >= 0 )
    InitializePointerDevicesPresenceState_0();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  v7 = CheckInitialSessions();
  CurrentDisplayState = v7;
  if ( v7 && v7 != -1073741771 )
  {
    if ( v7 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_43;
  }
  if ( !gbRemoteSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_48;
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
    if ( !gSessionId )
    {
      W32pArgumentTableFilter_0 = SysEntryGetW32pArgumentTableFilter_0();
      W32pServiceLimitFilter_0 = SysEntryGetW32pServiceLimitFilter_0();
      W32pServiceTableFilter_0 = SysEntryGetW32pServiceTableFilter_0();
      KeAddSystemServiceTable(
        W32pServiceTableFilter_0,
        gpCountTable,
        W32pServiceLimitFilter_0,
        W32pArgumentTableFilter_0,
        2);
    }
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_48;
  if ( !gSessionId )
  {
    SysEntryPsEstablishWin32Callouts_0();
    if ( !gSessionId )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( (int)IsMagContextInitializeSupported_0() >= 0 )
    MagContextInitialize_0();
  McGenEventRegister(v17, v16, v18, v19);
  if ( (int)IsUserkTraceLoggingSupported_0() >= 0 )
    EnableUserkTraceLogging_0();
  TraceLoggingRegisterEx(
    (TraceLoggingHProvider)&dword_1C01187D0,
    (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback,
    0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0118790, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0118710, 0LL, 0LL);
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx();
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( (int)IsInitTimerCoalescingSupported_0() >= 0 )
    InitTimerCoalescing_0();
  if ( (int)IsInitializeFeedbackDataSupported_0() >= 0 )
    InitializeFeedbackData_0();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_48;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_48;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_48;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_48;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_48;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters )
    goto LABEL_48;
  gcDITHitTestWaiters = 0;
  gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemDITHitTestWaiters
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (gcRITBlockedOnDITWaiters = 0, (gpsemRITBlockedOnDITWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (hModuleWin = W32UserProbeAddress, !InitializeGre()) )
  {
LABEL_48:
    CurrentDisplayState = -1073741801;
    goto LABEL_43;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = v44;
  giPowerOffTimeOutMs = 1000 * v33;
  dword_1C011BB5C = v35 == 1;
  dword_1C011BB68 = v36 == 0;
  dword_1C011BB84 = v41;
  dword_1C011BB7C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C011BB64 = 1;
  dword_1C011BB88 = v43 != 0;
  dword_1C011BB10 = 1;
  qword_1C011BAD8 = 0LL;
  qword_1C011BAF0 = 0LL;
  qword_1C011BAE8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C011BAF8 = 0LL;
  qword_1C011BB00 = 0LL;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C011BAE0 = qword_1C011BAE8;
  dword_1C011BB08 = 0;
  giDimTimeOutMs = 1000 * v34;
  dword_1C011BB28 = v39;
  dword_1C011BB20 = v38;
  dword_1C011BB18 = v37;
  dword_1C011BB2C = v40;
  dword_1C011BB8C = v42;
  gbManualDimTimeOut = PowerIsDimTimeOutManual();
  dword_1C011BB34 = dword_1C011BB18;
  dword_1C011BB44 = dword_1C011BB20;
  dword_1C011BB38 = -1;
  dword_1C011BB3C = -1;
  dword_1C011BB40 = -1;
  dword_1C011BB48 = -1;
  dword_1C011BB4C = -1;
  dword_1C011BB50 = -1;
  byte_1C011BB54 = 0;
  gbPowerHighPrecisionBrightness = 0;
  PowerUpdateBrightnessLevels();
  dword_1C011BB30 = -1;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState >= 0 )
    {
      v49 = gPowerTransitionsState != 0 ? 3 : 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v49, 4LL, 0LL, 0LL, 0, 0);
      goto LABEL_84;
    }
LABEL_43:
    Win32KDriverUnload(0LL);
    return CurrentDisplayState;
  }
LABEL_84:
  ExInitializeRundownProtection(&gWinstaRunRef);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v22 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v24 = PsGetCurrentThreadWin32Thread(v23);
    if ( v24 )
    {
      v26 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v24 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        OutputBufferLength[0] = 0;
        LOBYTE(v25.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v25.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v27.QuadPart,
          v26.QuadPart,
          *(_QWORD *)OutputBufferLength,
          gullUserCritAcquireToken);
      }
      if ( v26.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        OutputBufferLength[0] = 1000 * v26.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v27.QuadPart,
          0LL,
          *(_QWORD *)OutputBufferLength,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v24 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v22;
    gbValidateHandleForIL = 1;
    if ( !gpWin32kDriverObject )
      GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit();
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C011A8BC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    goto LABEL_43;
  RtlInitUnicodeString(
    &v47,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  RIMInitializeAutoLogger(v28, (__int64)&v47);
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
  if ( gSessionId )
  {
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      ghSMSS = 0LL;
  }
  return 0;
}
