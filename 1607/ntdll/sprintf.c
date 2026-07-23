/*
 * XREFs of sprintf @ 0x18009AF90
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _output_l @ 0x18009D0E0 (_output_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format && Buffer )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v3 = output_l(&File, Format, 0LL, va);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v5;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
