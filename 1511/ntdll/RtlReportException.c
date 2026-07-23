/*
 * XREFs of RtlReportException @ 0x1800D0880
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000554C (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C7AE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800CAFFC (LdrpInitializeProcessWrapperFilter.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E8AF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 *     TppExceptionFilter @ 0x1800F5534 (TppExceptionFilter.c)
 *     TppReportExceptionFilter @ 0x1800F56D8 (TppReportExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A7A90 (ZwRaiseException.c)
 *     IsDebugPortPresent @ 0x1800D0834 (IsDebugPortPresent.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 */

NTSTATUS __cdecl RtlReportException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, ULONG Flags)
{
  ULONG v7; // esi
  LARGE_INTEGER *v8; // r9
  NTSTATUS v9; // edi
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+A8h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFFFFF0) != 0 )
    return -1073741811;
  v7 = Flags & 4;
  if ( (Flags & 4) == 0 && (unsigned int)IsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)IsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
  if ( LdrpIsSecureProcess )
    return 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, ProcessInformation, 0x40u, 0LL) >= 0
    && v11 == 1 )
  {
    v8 = (LARGE_INTEGER *)&v12;
  }
  else
  {
    v8 = 0LL;
  }
  v12 = -300000000LL;
  v9 = RtlReportExceptionEx(ExceptionRecord, ContextRecord, Flags, v8);
  if ( !v7 && (unsigned int)IsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)IsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
  return v9;
}
