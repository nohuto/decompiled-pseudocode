/*
 * XREFs of DriverEntry @ 0x1C01372C0
 * Callers:
 *     GsDriverEntry @ 0x1C013A010 (GsDriverEntry.c)
 * Callees:
 *     IsGetKbdTablesFallbackSupported_0 @ 0x1C0002490 (IsGetKbdTablesFallbackSupported_0.c)
 *     GetKbdTablesFallback_0 @ 0x1C0002498 (GetKbdTablesFallback_0.c)
 *     IsGetausMouseVKeySupported_0 @ 0x1C00024A0 (IsGetausMouseVKeySupported_0.c)
 *     GetausMouseVKey_0 @ 0x1C00024A8 (GetausMouseVKey_0.c)
 *     IsUserkTraceLoggingSupported_0 @ 0x1C0002658 (IsUserkTraceLoggingSupported_0.c)
 *     IsInitializeWin32CrossSessionGlobalsSupported_0 @ 0x1C00026F0 (IsInitializeWin32CrossSessionGlobalsSupported_0.c)
 *     InitializeWin32CrossSessionGlobals_0 @ 0x1C00026F8 (InitializeWin32CrossSessionGlobals_0.c)
 *     IsInitializeWin32PoolTrackingSupported_0 @ 0x1C0002700 (IsInitializeWin32PoolTrackingSupported_0.c)
 *     InitializeWin32PoolTracking_0 @ 0x1C0002708 (InitializeWin32PoolTracking_0.c)
 *     IsInitializeHidRequestListSupported_0 @ 0x1C0002710 (IsInitializeHidRequestListSupported_0.c)
 *     InitializeHidRequestList_0 @ 0x1C0002718 (InitializeHidRequestList_0.c)
 *     IsInitializePointerInputSupported_0 @ 0x1C0002720 (IsInitializePointerInputSupported_0.c)
 *     InitializePointerInput_0 @ 0x1C0002728 (InitializePointerInput_0.c)
 *     IsInitializePointerPredictionSupported_0 @ 0x1C0002730 (IsInitializePointerPredictionSupported_0.c)
 *     InitializePointerPrediction_0 @ 0x1C0002738 (InitializePointerPrediction_0.c)
 *     IsInitializePointerDevicesPresenceStateSupported_0 @ 0x1C0002740 (IsInitializePointerDevicesPresenceStateSupported_0.c)
 *     InitializePointerDevicesPresenceState_0 @ 0x1C0002748 (InitializePointerDevicesPresenceState_0.c)
 *     IsMagContextInitializeSupported_0 @ 0x1C0002750 (IsMagContextInitializeSupported_0.c)
 *     MagContextInitialize_0 @ 0x1C0002758 (MagContextInitialize_0.c)
 *     EnableUserkTraceLogging_0 @ 0x1C0002760 (EnableUserkTraceLogging_0.c)
 *     IsInitTimerCoalescingSupported_0 @ 0x1C0002768 (IsInitTimerCoalescingSupported_0.c)
 *     InitTimerCoalescing_0 @ 0x1C0002770 (InitTimerCoalescing_0.c)
 *     IsInitializeFeedbackDataSupported_0 @ 0x1C0002778 (IsInitializeFeedbackDataSupported_0.c)
 *     InitializeFeedbackData_0 @ 0x1C0002780 (InitializeFeedbackData_0.c)
 *     IsDDCCIInitializeSupported_0 @ 0x1C0002788 (IsDDCCIInitializeSupported_0.c)
 *     DDCCIInitializeWrap_0 @ 0x1C0002790 (DDCCIInitializeWrap_0.c)
 *     DCompSessionInitialize_0 @ 0x1C0002798 (DCompSessionInitialize_0.c)
 *     IsInitDwmInputProcessingSupported_0 @ 0x1C00027A0 (IsInitDwmInputProcessingSupported_0.c)
 *     InitDwmInputProcessing_0 @ 0x1C00027A8 (InitDwmInputProcessing_0.c)
 *     IsInitializeNavigationWindowRegistrySupported_0 @ 0x1C00027B0 (IsInitializeNavigationWindowRegistrySupported_0.c)
 *     InitializeNavigationWindowRegistry_0 @ 0x1C00027B8 (InitializeNavigationWindowRegistry_0.c)
 *     SysEntryGetW32pArgumentTable_0 @ 0x1C0002F50 (SysEntryGetW32pArgumentTable_0.c)
 *     SysEntryGetW32pServiceLimit_0 @ 0x1C0002F58 (SysEntryGetW32pServiceLimit_0.c)
 *     SysEntryGetW32pServiceTable_0 @ 0x1C0002F60 (SysEntryGetW32pServiceTable_0.c)
 *     SysEntryPsEstablishWin32Callouts_0 @ 0x1C0002F68 (SysEntryPsEstablishWin32Callouts_0.c)
 *     CreateKernelEvent @ 0x1C0016C90 (CreateKernelEvent.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x1C00794F0 (RetrieveCurrentDisplayState.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C007AA6C (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeGraphicsInfrastructure @ 0x1C007AAEC (InitializeGraphicsInfrastructure.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C007AE2C (-CheckInitialSessions@@YAJXZ.c)
 *     RIMInitialize @ 0x1C007AFC0 (RIMInitialize.c)
 *     McGenEventRegister @ 0x1C007B528 (McGenEventRegister.c)
 *     WinSqmStartSession @ 0x1C007B558 (WinSqmStartSession.c)
 *     CreateKernelSemaphore @ 0x1C007B838 (CreateKernelSemaphore.c)
 *     WinSqmIsOptedInEx @ 0x1C007B870 (WinSqmIsOptedInEx.c)
 *     OPMInitialize @ 0x1C007BA58 (OPMInitialize.c)
 *     PowerUpdateBrightnessLevels @ 0x1C007BAD8 (PowerUpdateBrightnessLevels.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C00A6A20 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     TraceLoggingRegisterEx @ 0x1C01254A0 (TraceLoggingRegisterEx.c)
 *     InitCreateUserCrit @ 0x1C01370AC (InitCreateUserCrit.c)
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rcx
  NTSTATUS CurrentDisplayState; // ebx
  PVOID v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int CurrentProcessSessionId; // eax
  int v11; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 W32pArgumentTable_0; // rdi
  unsigned int W32pServiceLimit_0; // ebx
  __int64 W32pServiceTable_0; // rax
  ETWENABLECALLBACK *v17; // rdx
  const GUID *v18; // rcx
  void *v19; // r8
  ULONGLONG *v20; // r9
  void *v21; // r8
  HANDLE CurrentProcessId; // rax
  _QWORD OutputBuffer[2]; // [rsp+30h] [rbp-69h] BYREF
  int v24; // [rsp+40h] [rbp-59h]
  int v25; // [rsp+44h] [rbp-55h]
  int v26; // [rsp+48h] [rbp-51h]
  int v27; // [rsp+4Ch] [rbp-4Dh]
  int v28; // [rsp+50h] [rbp-49h]
  int v29; // [rsp+54h] [rbp-45h]
  int v30; // [rsp+58h] [rbp-41h]
  int v31; // [rsp+5Ch] [rbp-3Dh]
  unsigned __int8 v32; // [rsp+60h] [rbp-39h]
  int v33; // [rsp+64h] [rbp-35h]
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-11h] BYREF
  __int64 SystemInformation; // [rsp+100h] [rbp+67h] BYREF
  __int64 v38; // [rsp+110h] [rbp+77h]
  __int64 v39; // [rsp+118h] [rbp+7Fh]

  SystemInformation = 0LL;
  rbc_InitializeFeatureStaging();
  EnsureRequiredApiSetExtensions();
  if ( (int)IsGetKbdTablesFallbackSupported_0() >= 0 )
  {
    GetKbdTablesFallback_0();
    gpKbdTbl = v38;
  }
  if ( (int)IsGetausMouseVKeySupported_0() >= 0 )
  {
    GetausMouseVKey_0();
    gpusMouseVKey = v39;
  }
  gSessionId = PsGetCurrentProcessSessionId(v4);
  CurrentDisplayState = 0;
  if ( dword_1C0106AC0 == 1 )
  {
    CurrentDisplayState = -1073741801;
  }
  else if ( (int)IsInitializeWin32CrossSessionGlobalsSupported_0() >= 0 )
  {
    CurrentDisplayState = InitializeWin32CrossSessionGlobals_0();
  }
  if ( dword_1C0106AC0 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported_0() >= 0
    && !(unsigned int)InitializeWin32PoolTracking_0()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0106AC0 == 3 )
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
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00FE990, 0LL, v6);
  }
  if ( dword_1C0106AC0 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  if ( dword_1C0106AC0 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C0104200 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  v7 = &gTimerHashTable;
  W32UserProbeAddress = (void *)MmUserProbeAddress;
  v8 = 64LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  memset(&gTimerId, 0, 0xFE0uLL);
  if ( (int)IsInitializeHidRequestListSupported_0() >= 0 )
    InitializeHidRequestList_0();
  if ( (int)IsInitializePointerInputSupported_0() >= 0 )
    InitializePointerInput_0();
  if ( (int)IsInitializePointerPredictionSupported_0() >= 0 )
    InitializePointerPrediction_0();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
  gServiceSessionId = 0;
  gSessionId = CurrentProcessSessionId;
  ZwQueryInformationJobObject(0LL, JobObjectAssociateCompletionPortInformation|0x20, &gServiceSessionId, 4u, 0LL);
  if ( (int)IsInitializePointerDevicesPresenceStateSupported_0() >= 0 )
    InitializePointerDevicesPresenceState_0();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  v11 = CheckInitialSessions();
  CurrentDisplayState = v11;
  if ( v11 && v11 != -1073741771 )
  {
    if ( v11 >= 0 )
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
    goto LABEL_71;
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
    goto LABEL_71;
  if ( !gSessionId )
  {
    SysEntryPsEstablishWin32Callouts_0();
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  RIMInitialize((__int64)DriverObject, (__int64)RegistryPath);
  if ( (int)IsMagContextInitializeSupported_0() >= 0 )
    MagContextInitialize_0();
  McGenEventRegister(v18, v17, v19, v20);
  if ( (int)IsUserkTraceLoggingSupported_0() >= 0 )
    EnableUserkTraceLogging_0();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback, v21);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( (int)IsInitTimerCoalescingSupported_0() >= 0 )
    InitTimerCoalescing_0();
  if ( (int)IsInitializeFeedbackDataSupported_0() >= 0 )
    InitializeFeedbackData_0();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_71;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_71;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoportCallout )
    goto LABEL_71;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_71;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore();
  if ( !gpsemSwitchInProgressWaiters
    || (gcDITHitTestWaiters = 0, (gpsemDITHitTestWaiters = CreateKernelSemaphore()) == 0LL)
    || (gcRITBlockedOnDITWaiters = 0, (gpsemRITBlockedOnDITWaiters = CreateKernelSemaphore()) == 0LL)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (hModuleWin = (__int64)W32UserProbeAddress, !(unsigned __int8)InitializeGre()) )
  {
LABEL_71:
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
  giPowerOffTimeOutMs = 1000 * v24;
  dword_1C00FFFB4 = v26 == 1;
  dword_1C00FFFC0 = v27 == 0;
  dword_1C00FFFDC = v32;
  dword_1C00FFFD4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C00FFFBC = 1;
  dword_1C00FFFE0 = v33 != 0;
  dword_1C00FFF88 = 1;
  qword_1C00FFF58 = 0LL;
  qword_1C00FFF70 = 0LL;
  qword_1C00FFF68 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C00FFF78 = 0LL;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C00FFF60 = qword_1C00FFF68;
  dword_1C00FFF80 = 0;
  giDimTimeOutMs = 1000 * v25;
  dword_1C00FFFA0 = v30;
  dword_1C00FFF98 = v29;
  dword_1C00FFF90 = v28;
  dword_1C00FFFA4 = v31;
  PowerUpdateBrightnessLevels();
  dword_1C00FFFA8 = -1;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( !gSessionId )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C010093C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
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
