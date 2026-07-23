/*
 * XREFs of TpCheckTerminateWorker @ 0x18005C650
 * Callers:
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     TppIsWorkerThread @ 0x18005C69C (TppIsWorkerThread.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     TppReportExceptionFilter @ 0x1800F56D8 (TppReportExceptionFilter.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread(Thread) )
  {
    DbgPrintEx(
      0x54u,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      Thread);
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}
