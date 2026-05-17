/*
 * XREFs of _vsnprintf @ 0x180096DC0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x18007443C (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800C9290 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x180096DDC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
