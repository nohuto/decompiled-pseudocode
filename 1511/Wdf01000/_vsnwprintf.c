/*
 * XREFs of _vsnwprintf @ 0x1C0035B48
 * Callers:
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0031334 (RtlWideCharArrayVPrintfWorker.c)
 *     RtlStringVPrintfWorkerW @ 0x1C00577A0 (RtlStringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C0035B60 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(unsigned __int16 *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
