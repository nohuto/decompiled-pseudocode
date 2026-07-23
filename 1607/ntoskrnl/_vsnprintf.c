/*
 * XREFs of _vsnprintf @ 0x14014D318
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14010B4D0 (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140139FD4 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x14013C380 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x14014D330 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
