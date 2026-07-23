/*
 * XREFs of TppReportExceptionFilter @ 0x1800FE644
 * Callers:
 *     TpCheckTerminateWorker @ 0x180052980 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
