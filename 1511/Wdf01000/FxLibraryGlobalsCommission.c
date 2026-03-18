/*
 * XREFs of FxLibraryGlobalsCommission @ 0x1C0030248
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002FF68 (FxLibraryCommonCommission.c)
 * Callees:
 *     FxInitializeBugCheckDriverInfo @ 0x1C00305F4 (FxInitializeBugCheckDriverInfo.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C0030748 (FxLibraryGlobalsVerifyVersion.c)
 *     ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C003081C (-MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0030840 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     strcmp_0 @ 0x1C00368C0 (strcmp_0.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  void (__fastcall *SystemRoutineAddress)(_POOL_TYPE, void *, unsigned int); // rax
  void (__fastcall *v1)(_OSVERSIONINFOEXW *); // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-10h] BYREF

  FxLibraryGlobals.StaticallyLinked = strcmp_0("Wdf01000", "WdfStatic") == 0;
  FxLibraryGlobals.IsUserModeFramework = 0;
  FxLibraryGlobals.IfrDisabled = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  FxLibraryGlobals.IoConnectInterruptEx = (int (__fastcall *)(_IO_CONNECT_INTERRUPT_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  FxLibraryGlobals.IoDisconnectInterruptEx = (int (__fastcall *)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveProcessors");
  FxLibraryGlobals.KeQueryActiveProcessors = (unsigned __int64 (__fastcall *)())MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeSetTargetProcessorDpc");
  FxLibraryGlobals.KeSetTargetProcessorDpc = (void (__fastcall *)(_KDPC *, char))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveGroupCount");
  if ( MmGetSystemRoutineAddress(&funcName) )
    FxLibraryGlobals.ProcessorGroupSupport = 1;
  RtlInitUnicodeString(&funcName, L"KeSetCoalescableTimer");
  FxLibraryGlobals.KeSetCoalescableTimer = (unsigned __int8 (__fastcall *)(_KTIMER *, _LARGE_INTEGER, unsigned int, unsigned int, _KDPC *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoUnregisterPlugPlayNotificationEx");
  FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx = (int (__fastcall *)(void *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxRegisterDevice");
  FxLibraryGlobals.PoxRegisterDevice = (int (__fastcall *)(_DEVICE_OBJECT *, _PO_FX_DEVICE_V1 *, POHANDLE__ **))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxStartDevicePowerManagement");
  FxLibraryGlobals.PoxStartDevicePowerManagement = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxUnregisterDevice");
  FxLibraryGlobals.PoxUnregisterDevice = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxActivateComponent");
  FxLibraryGlobals.PoxActivateComponent = (int (__fastcall *)(POHANDLE__ *, unsigned int, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxIdleComponent");
  FxLibraryGlobals.PoxIdleComponent = (int (__fastcall *)(POHANDLE__ *, unsigned int, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxReportDevicePoweredOn");
  FxLibraryGlobals.PoxReportDevicePoweredOn = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleState");
  FxLibraryGlobals.PoxCompleteIdleState = (void (__fastcall *)(POHANDLE__ *, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleCondition");
  FxLibraryGlobals.PoxCompleteIdleCondition = (void (__fastcall *)(POHANDLE__ *, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteDevicePowerNotRequired");
  FxLibraryGlobals.PoxCompleteDevicePowerNotRequired = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxSetDeviceIdleTimeout");
  FxLibraryGlobals.PoxSetDeviceIdleTimeout = (void (__fastcall *)(POHANDLE__ *, unsigned __int64))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  FxLibraryGlobals.IoReportInterruptActive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  FxLibraryGlobals.IoReportInterruptInactive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfCheckNxPoolType");
  SystemRoutineAddress = (void (__fastcall *)(_POOL_TYPE, void *, unsigned int))MmGetSystemRoutineAddress(&funcName);
  FxLibraryGlobals.OsVersionInfo.dwOSVersionInfoSize = 284;
  FxLibraryGlobals.VfCheckNxPoolType = SystemRoutineAddress;
  v1 = (void (__fastcall *)(_OSVERSIONINFOEXW *))Mx::MxGetSystemRoutineAddress(L"RtlGetVersion");
  v1(&FxLibraryGlobals.OsVersionInfo);
  FxLibraryGlobalsVerifyVersion();
  FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock = 0LL;
  *(_WORD *)FxLibraryGlobals.MachineSleepStates = 0;
  FxLibraryGlobals.MachineSleepStates[2] = 0;
  FxLibraryGlobals.FxDriverGlobalsList.Blink = &FxLibraryGlobals.FxDriverGlobalsList;
  FxLibraryGlobals.FxDriverGlobalsList.Flink = &FxLibraryGlobals.FxDriverGlobalsList;
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 1;
  FxInitializeBugCheckDriverInfo();
  FxLibraryGlobals.DriverTracker.m_EntrySize = 0;
  FxLibraryGlobals.DriverTracker.m_Number = 0;
  FxLibraryGlobals.VerifierSectionHandle = 0LL;
  *(_OWORD *)&FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.VerifierSectionHandleRefCount = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &FxLibraryGlobals.PerfTraceRoutines, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    memset(&FxLibraryGlobals.DummyPerfTraceRoutines, 0, sizeof(FxLibraryGlobals.DummyPerfTraceRoutines));
    result = 0;
    FxLibraryGlobals.DummyPerfTraceRoutines.Size = 32;
    FxLibraryGlobals.PerfTraceRoutines = &FxLibraryGlobals.DummyPerfTraceRoutines;
  }
  return result;
}
