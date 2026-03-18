/*
 * XREFs of FxAllocateDriverGlobals @ 0x1C0032940
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C00325EC (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     AllocAndInitializeTelemetryContext @ 0x1C0032A80 (AllocAndInitializeTelemetryContext.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

_WDF_DRIVER_GLOBALS *__fastcall FxAllocateDriverGlobals()
{
  _WDF_DRIVER_GLOBALS *result; // rax
  _WDF_DRIVER_GLOBALS *v1; // rdi
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rcx

  result = (_WDF_DRIVER_GLOBALS *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1E0uLL, 0x72447846u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x1E0uLL);
    *(_DWORD *)v1->DriverName = 1;
    KeInitializeEvent((PRKEVENT)&v1->DriverName[8], NotificationEvent, 0);
    v1->DisplaceDriverUnload = 1;
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    Flink = FxLibraryGlobals.FxDriverGlobalsList.Flink;
    if ( FxLibraryGlobals.FxDriverGlobalsList.Flink->Blink != &FxLibraryGlobals.FxDriverGlobalsList )
      __fastfail(3u);
    v1->Driver = (WDFDRIVER__ *)FxLibraryGlobals.FxDriverGlobalsList.Flink;
    *(_QWORD *)&v1->DriverFlags = &FxLibraryGlobals.FxDriverGlobalsList;
    Flink->Blink = (_LIST_ENTRY *)v1;
    FxLibraryGlobals.FxDriverGlobalsList.Flink = (_LIST_ENTRY *)v1;
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
    v1[1].DriverFlags = -1;
    *(_QWORD *)&v1[1].DriverName[16] = &FxLibraryGlobals;
    v1[1].Driver = (WDFDRIVER__ *)-8LL;
    v1[7].DriverFlags = 60;
    v1[7].DriverTag = 60;
    *(_QWORD *)v1[1].DriverName = 0LL;
    *(_QWORD *)&v1[1].DriverName[8] = 0LL;
    *(_QWORD *)&v1[1].DriverName[24] = 0LL;
    *(_QWORD *)&v1[5].DriverName[20] = 0LL;
    v1[4].DriverName[24] = 0;
    *(_WORD *)&v1[5].DriverName[28] = 256;
    HIDWORD(v1[7].Driver) = 0;
    *(_WORD *)&v1[5].DriverName[31] = 256;
    *(&v1[5].DisplaceDriverUnload + 1) = 0;
    LODWORD(v1[6].Driver) = 0;
    v1[5].DriverName[30] = 0;
    *(_QWORD *)v1[7].DriverName = 0LL;
    if ( Tlgg_TelemetryProviderProv.LevelPlus1 )
      AllocAndInitializeTelemetryContext((_FX_TELEMETRY_CONTEXT **)v1[7].DriverName);
    return (_WDF_DRIVER_GLOBALS *)((char *)v1 + 416);
  }
  return result;
}
