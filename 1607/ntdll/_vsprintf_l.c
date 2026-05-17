/*
 * XREFs of _vsprintf_l @ 0x18009C47C
 * Callers:
 *     vsprintf @ 0x18009C500 (vsprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B68 (_invalid_parameter.c)
 *     _output_l @ 0x18009D0F0 (_output_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int __cdecl vsprintf_l(char *const Buffer, const char *const Format, const _locale_t Locale, va_list ArgList)
{
  int v5; // eax
  bool v6; // sf
  int v7; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && Buffer )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v5 = output_l(&File, Format, Locale, ArgList);
    v6 = --File._cnt < 0;
    v7 = v5;
    if ( v6 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v7;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
