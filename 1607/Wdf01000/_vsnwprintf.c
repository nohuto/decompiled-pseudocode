/*
 * XREFs of _vsnwprintf @ 0x1C003A8A8
 * Callers:
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0036944 (RtlWideCharArrayVPrintfWorker.c)
 *     RtlStringVPrintfWorkerW @ 0x1C0064730 (RtlStringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C003A8C0 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
