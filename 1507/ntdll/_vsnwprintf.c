/*
 * XREFs of _vsnwprintf @ 0x1800856E0
 * Callers:
 *     StringCbPrintfW @ 0x18000392C (StringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x180010A14 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x180064C78 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCchPrintfW @ 0x180071740 (RtlStringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800BB560 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800C835C (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1800856FC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
