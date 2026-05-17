/*
 * XREFs of _vsnprintf @ 0x180098190
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C428 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x180082D44 (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800D0688 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1800981AC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
