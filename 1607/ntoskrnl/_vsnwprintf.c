/*
 * XREFs of _vsnwprintf @ 0x14014CCB4
 * Callers:
 *     RtlStringCbPrintfW @ 0x14000C1D4 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14007F50C (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1400A8EE0 (RtlStringVPrintfWorkerW.c)
 *     StringCchPrintfW @ 0x1400AE208 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14013BF80 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401CF714 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x140239360 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x14014CCCC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
