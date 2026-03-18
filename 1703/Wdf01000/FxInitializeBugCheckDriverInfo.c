/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1C001779C
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C00178F8 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C00178B8 (RtlStringCopyWorkerA.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

_FX_DUMP_DRIVER_INFO_ENTRY *FxInitializeBugCheckDriverInfo()
{
  _FX_DUMP_DRIVER_INFO_ENTRY *result; // rax
  _FX_DUMP_DRIVER_INFO_ENTRY *v1; // rbx
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  unsigned __int64 v4; // [rsp+20h] [rbp-28h]
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  result = (_FX_DUMP_DRIVER_INFO_ENTRY *)memset(
                                           &FxLibraryGlobals.BugCheckCallbackRecord,
                                           0,
                                           sizeof(FxLibraryGlobals.BugCheckCallbackRecord));
  FxLibraryGlobals.BugCheckDriverInfoCount = 0;
  FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
  FxLibraryGlobals.BugCheckDriverInfo = 0LL;
  if ( !FxLibraryGlobals.StaticallyLinked )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    result = (_FX_DUMP_DRIVER_INFO_ENTRY *)MmGetSystemRoutineAddress(&funcName);
    v1 = result;
    if ( result )
    {
      result = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x230uLL, 0x72447846u);
      FxLibraryGlobals.BugCheckDriverInfo = result;
      if ( result )
      {
        FxLibraryGlobals.BugCheckDriverInfoCount = 10;
        result->FxDriverGlobals = 0LL;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Major = 1;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Minor = 21;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Build = 0;
        if ( RtlStringCopyWorkerA(FxLibraryGlobals.BugCheckDriverInfo->DriverName, v2, v3, "Wdf01000", v4) < 0 )
          FxLibraryGlobals.BugCheckDriverInfo->DriverName[0] = 0;
        ++FxLibraryGlobals.BugCheckDriverInfoIndex;
        FxLibraryGlobals.BugCheckCallbackRecord.State = 0;
        return (_FX_DUMP_DRIVER_INFO_ENTRY *)((__int64 (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, const char *))v1)(
                                               &FxLibraryGlobals.BugCheckCallbackRecord,
                                               FxpLibraryBugCheckCallback,
                                               2LL,
                                               "Wdf01000");
      }
    }
  }
  return result;
}
