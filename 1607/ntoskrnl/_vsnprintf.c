/*
 * XREFs of _vsnprintf @ 0x14014CDA8
 * Callers:
 *     RtlStringCbVPrintfA @ 0x140084EC8 (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140139A64 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x14013BE10 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x14014CDC0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
