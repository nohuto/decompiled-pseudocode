/*
 * XREFs of FxLibraryGlobalsDecommission @ 0x1C006D80C
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0062C54 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

void FxLibraryGlobalsDecommission()
{
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *); // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
  {
    ExFreePoolWithTag(FxLibraryGlobals.DriverTracker.m_PoolToFree, 0);
    FxLibraryGlobals.DriverTracker.m_PoolToFree = 0LL;
  }
  FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.DriverTracker.m_Number = 0;
  if ( FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine )
  {
    RtlInitUnicodeString(&DestinationString, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *))MmGetSystemRoutineAddress(&DestinationString);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(&FxLibraryGlobals.BugCheckCallbackRecord);
      FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
      if ( FxLibraryGlobals.BugCheckDriverInfo )
      {
        FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
        FxLibraryGlobals.BugCheckDriverInfoCount = 0;
        ExFreePoolWithTag(FxLibraryGlobals.BugCheckDriverInfo, 0);
        FxLibraryGlobals.BugCheckDriverInfo = 0LL;
      }
    }
  }
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 0;
}
