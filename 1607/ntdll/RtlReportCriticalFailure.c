/*
 * XREFs of RtlReportCriticalFailure @ 0x1800F735C
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180027270 (RtlpSubSegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180042348 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpReportHeapFailure @ 0x1800F9D18 (RtlpReportHeapFailure.c)
 * Callees:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F7334 (RtlIsAnyDebuggerPresent.c)
 */

void __fastcall RtlReportCriticalFailure(int a1, unsigned __int64 a2, int a3)
{
  int v6; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-B8h] BYREF

  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(101, 0, "Critical error detected %lx\n", v6);
    if ( a3 )
      __debugbreak();
  }
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a2;
  RtlRaiseException(&ExceptionRecord);
}
