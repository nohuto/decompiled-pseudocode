/*
 * XREFs of _snprintf @ 0x1800978E0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _output_l @ 0x18009D0E0 (_output_l.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax
  int v5; // ebx
  FILE File; // [rsp+30h] [rbp-48h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = Buffer;
    File._ptr = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    File._cnt = BufferCount;
    result = output_l(&File, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
      return v5;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
