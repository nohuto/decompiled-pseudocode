/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x1C00379B0
 * Callers:
 *     FxDestroy @ 0x1C0037890 (FxDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUnregisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rdi
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *); // rax
  unsigned int i; // ecx
  _FX_DRIVER_GLOBALS **v5; // rdx
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  if ( FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine )
  {
    RtlInitUnicodeString(&funcName, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(p_BugCheckCallbackRecord);
      p_BugCheckCallbackRecord->CallbackRoutine = 0LL;
      if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
      {
        if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
        {
          for ( i = 0; i < FxLibraryGlobals.DriverTracker.m_Number; ++i )
          {
            v5 = (_FX_DRIVER_GLOBALS **)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                       + i * FxLibraryGlobals.DriverTracker.m_EntrySize);
            if ( *v5 == FxDriverGlobals )
              *v5 = 0LL;
          }
        }
      }
    }
  }
}
