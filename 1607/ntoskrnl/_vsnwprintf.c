/*
 * XREFs of _vsnwprintf @ 0x14014D224
 * Callers:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1400A7460 (RtlStringVPrintfWorkerW.c)
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401CF540 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x140239244 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x14014D23C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
