/*
 * XREFs of FxRegisterBugCheckCallback @ 0x1C0018110
 * Callers:
 *     FxInitialize @ 0x1C0017CE8 (FxInitialize.c)
 * Callees:
 *     ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00181F4 (-Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxpGetImageBase @ 0x1C0018350 (FxpGetImageBase.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

void __fastcall FxRegisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals, _DRIVER_OBJECT *DriverObject)
{
  unsigned __int8 FxTrackDriverForMiniDumpLog; // bp
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rsi
  _FX_DRIVER_GLOBALS *v6; // rdx
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, char *); // rbx
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  FxTrackDriverForMiniDumpLog = FxDriverGlobals->FxTrackDriverForMiniDumpLog;
  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  FxDriverGlobals->FxTrackDriverForMiniDumpLog = 0;
  memset(&FxDriverGlobals->BugCheckCallbackRecord, 0, sizeof(FxDriverGlobals->BugCheckCallbackRecord));
  FxDriverGlobals->ImageAddress = 0LL;
  FxDriverGlobals->ImageSize = 0;
  if ( FxpGetImageBase(DriverObject, &FxDriverGlobals->ImageAddress, &FxDriverGlobals->ImageSize) >= 0
    && !FxLibraryGlobals.StaticallyLinked )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, char *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      if ( FxTrackDriverForMiniDumpLog )
      {
        if ( _FX_DRIVER_TRACKER_CACHE_AWARE::Register(&FxLibraryGlobals.DriverTracker, v6) >= 0 )
          FxDriverGlobals->FxTrackDriverForMiniDumpLog = 1;
      }
      p_BugCheckCallbackRecord->State = 0;
      SystemRoutineAddress(p_BugCheckCallbackRecord, FxpBugCheckCallback, 2LL, FxDriverGlobals->Public.DriverName);
    }
  }
}
