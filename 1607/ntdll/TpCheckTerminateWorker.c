/*
 * XREFs of TpCheckTerminateWorker @ 0x180052990
 * Callers:
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 * Callees:
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     TppIsWorkerThread @ 0x1800529DC (TppIsWorkerThread.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     TppReportExceptionFilter @ 0x1800FE644 (TppReportExceptionFilter.c)
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
