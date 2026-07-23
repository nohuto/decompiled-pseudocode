/*
 * XREFs of RtlReportCriticalFailure @ 0x1800EE670
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180029DF0 (RtlpSubSegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180058680 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpReportHeapFailure @ 0x1800F223C (RtlpReportHeapFailure.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800EE648 (RtlIsAnyDebuggerPresent.c)
 */

void __fastcall RtlReportCriticalFailure(int a1, unsigned __int64 a2)
{
  int v4; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-B8h] BYREF

  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", v4);
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
