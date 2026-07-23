/*
 * XREFs of TppReportExceptionFilter @ 0x1800F56D8
 * Callers:
 *     TpCheckTerminateWorker @ 0x18005C650 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
