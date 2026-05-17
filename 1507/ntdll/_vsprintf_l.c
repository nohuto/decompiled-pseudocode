/*
 * XREFs of _vsprintf_l @ 0x18008992C
 * Callers:
 *     vsprintf @ 0x1800899B0 (vsprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180083FB8 (_invalid_parameter.c)
 *     _flsbuf @ 0x18008A528 (_flsbuf.c)
 *     _output_l @ 0x18008A538 (_output_l.c)
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
