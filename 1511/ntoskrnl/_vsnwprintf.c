/*
 * XREFs of _vsnwprintf @ 0x1401439B8
 * Callers:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1400EE06C (StringCchPrintfW.c)
 *     sub_1400FB4CC @ 0x1400FB4CC (sub_1400FB4CC.c)
 *     RtlUnicodeStringPrintfEx @ 0x14012C1CC (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringPrintf @ 0x140133B28 (RtlUnicodeStringPrintf.c)
 *     StringVPrintfWorkerW @ 0x14021ED48 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1401439D0 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
