/*
 * XREFs of _vsnwprintf @ 0x140171A38
 * Callers:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     sub_140019D00 @ 0x140019D00 (sub_140019D00.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x140126550 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015B488 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringPrintf @ 0x14015DE04 (RtlUnicodeStringPrintf.c)
 *     StringVPrintfWorkerW @ 0x14026E170 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140171A50 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
