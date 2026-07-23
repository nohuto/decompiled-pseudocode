/*
 * XREFs of swprintf @ 0x180097F90
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _woutput_l @ 0x18009DA60 (_woutput_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+90h] [rbp+28h] BYREF

  v9 = Format;
  if ( BufferCount && Buffer )
  {
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v4 = woutput_l(&File, BufferCount, 0LL, &v9);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
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
    return v6;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
