/*
 * XREFs of _vsnprintf @ 0x140143AAC
 * Callers:
 *     RtlStringCbVPrintfA @ 0x140002A40 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x140133D10 (RtlStringCchPrintfA.c)
 *     sub_140136C24 @ 0x140136C24 (sub_140136C24.c)
 * Callees:
 *     _vsnprintf_l @ 0x140143AC4 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
