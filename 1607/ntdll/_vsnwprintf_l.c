/*
 * XREFs of _vsnwprintf_l @ 0x18009826C
 * Callers:
 *     _vsnwprintf @ 0x180098250 (_vsnwprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _woutput_l @ 0x18009DA60 (_woutput_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int __cdecl vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax
  int v7; // edi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    if ( BufferCount <= 0x3FFFFFFF )
      File._cnt = 2 * BufferCount;
    else
      File._cnt = 0x7FFFFFFF;
    result = woutput_l(&File, Format, Locale, ArgList);
    v7 = result;
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
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
