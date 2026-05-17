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

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v7; // esi
  __int64 *v8; // r9
  unsigned int v9; // edi
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+A8h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  v7 = a3 & 4;
  if ( (a3 & 4) == 0 && (unsigned int)IsDebugPortPresent() )
  {
    do
      ZwRaiseException();
    while ( (unsigned int)IsDebugPortPresent() );
    ZwTerminateProcess();
  }
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v11 == 1 )
  {
    v8 = &v12;
  }
  else
  {
    v8 = 0LL;
  }
  v12 = -300000000LL;
  v9 = RtlReportExceptionEx(a1, a2, a3, v8);
  if ( !v7 && (unsigned int)IsDebugPortPresent() )
  {
    do
      ZwRaiseException();
    while ( (unsigned int)IsDebugPortPresent() );
    ZwTerminateProcess();
  }
  return v9;
}
