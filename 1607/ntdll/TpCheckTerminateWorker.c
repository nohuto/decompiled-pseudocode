/*
 * XREFs of TpCheckTerminateWorker @ 0x180052980
 * Callers:
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 * Callees:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     TppIsWorkerThread @ 0x1800529CC (TppIsWorkerThread.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     TppReportExceptionFilter @ 0x1800FE644 (TppReportExceptionFilter.c)
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
