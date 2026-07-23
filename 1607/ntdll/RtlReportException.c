/*
 * XREFs of RtlReportException @ 0x180006A70
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000BBF4 (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 *     TppExceptionFilter @ 0x180090EF4 (TppExceptionFilter.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D2750 (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800D8780 (RtlReportExceptionEx.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     TppReportExceptionFilter @ 0x1800FE644 (TppReportExceptionFilter.c)
 * Callees:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180006B1C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlReportExceptionHelper @ 0x18000786C (RtlReportExceptionHelper.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 */

NTSTATUS __cdecl RtlReportException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, ULONG Flags)
{
  __int64 *v3; // rbx
  NTSTATUS v7; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( (Flags & 0xFFFFFFF0) != 0 )
    return -1073741811;
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  if ( LdrpIsSecureProcess )
    return 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v11 = -300000000LL;
    v3 = &v11;
  }
  v7 = RtlReportExceptionHelper(ExceptionRecord, ContextRecord, Flags, v3);
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  return v7;
}
