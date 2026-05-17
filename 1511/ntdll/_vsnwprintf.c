/*
 * XREFs of _vsnwprintf @ 0x180096E90
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x18004AFA4 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18004C828 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCchPrintfW @ 0x18007C41C (RtlStringCchPrintfW.c)
 *     StringCbPrintfW @ 0x18008394C (StringCbPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800C8280 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800D131C (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180096EAC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
