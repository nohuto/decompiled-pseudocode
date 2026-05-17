/*
 * XREFs of _vsnwprintf @ 0x180098260
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x18005CE14 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18005E4AC (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCchPrintfW @ 0x180081278 (RtlStringCchPrintfW.c)
 *     StringCbPrintfW @ 0x180086E90 (StringCbPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800CF660 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800D914C (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18009827C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
