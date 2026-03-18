/*
 * XREFs of _vsnprintf @ 0x140171B2C
 * Callers:
 *     RtlStringCbVPrintfA @ 0x140153E70 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x14015DBB0 (RtlStringCchPrintfA.c)
 *     sub_1401632BC @ 0x1401632BC (sub_1401632BC.c)
 * Callees:
 *     _vsnprintf_l @ 0x140171B44 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
