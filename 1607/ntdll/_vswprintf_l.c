/*
 * XREFs of _vswprintf_l @ 0x1800980E4
 * Callers:
 *     _vswprintf @ 0x1800980D0 (_vswprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B68 (_invalid_parameter.c)
 *     _woutput_l @ 0x18009DA70 (_woutput_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int __cdecl vswprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v6; // eax
  bool v7; // sf
  int v8; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( BufferCount && Buffer )
  {
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&File, BufferCount, Format, Locale);
    v7 = --File._cnt < 0;
    v8 = v6;
    if ( v7 )
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
    return v8;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
