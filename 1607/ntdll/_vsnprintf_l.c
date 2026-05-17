/*
 * XREFs of _vsnprintf_l @ 0x1800981AC
 * Callers:
 *     _vsnprintf @ 0x180098190 (_vsnprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B68 (_invalid_parameter.c)
 *     _output_l @ 0x18009D0F0 (_output_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int __cdecl vsnprintf_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax
  int v7; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    File._ptr = Buffer;
    File._cnt = BufferCount;
    result = output_l(&File, Format, Locale, ArgList);
    v7 = result;
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
      return v7;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
