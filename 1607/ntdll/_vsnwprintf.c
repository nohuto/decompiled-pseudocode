/*
 * XREFs of _vsnwprintf @ 0x180098250
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x18005CE04 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18005E49C (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCchPrintfW @ 0x180081268 (RtlStringCchPrintfW.c)
 *     StringCbPrintfW @ 0x180086E80 (StringCbPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800CF660 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800D920C (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18009826C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
