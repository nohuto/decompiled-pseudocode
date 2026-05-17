/*
 * XREFs of RtlReportException @ 0x180006A80
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000BC04 (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180072384 (LdrpInitializeNode.c)
 *     TppExceptionFilter @ 0x180090F04 (TppExceptionFilter.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D2690 (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     TppReportExceptionFilter @ 0x1800FE644 (TppReportExceptionFilter.c)
 * Callees:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180006B2C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rbx
  unsigned int v7; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( (a3 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v11 = -300000000LL;
    v3 = &v11;
  }
  v7 = RtlReportExceptionHelper(a1, a2, a3, v3);
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v7;
}
