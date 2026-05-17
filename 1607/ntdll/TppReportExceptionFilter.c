/*
 * XREFs of TppReportExceptionFilter @ 0x1800FE644
 * Callers:
 *     TpCheckTerminateWorker @ 0x180052990 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 *a1)
{
  RtlReportException(*a1, a1[1], 3u);
  return 0LL;
}
