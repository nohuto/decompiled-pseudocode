/*
 * XREFs of TpCheckTerminateWorker @ 0x18000A000
 * Callers:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 * Callees:
 *     TppIsWorkerThread @ 0x18000A04C (TppIsWorkerThread.c)
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 *     TppReportExceptionFilter @ 0x1800F5CD8 (TppReportExceptionFilter.c)
 */

void __fastcall TpCheckTerminateWorker(const void *a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread() )
  {
    DbgPrintEx(
      84LL,
      0LL,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      a1);
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    RtlRaiseException(&ExceptionRecord);
  }
}
