/*
 * XREFs of swscanf_s @ 0x1800A23D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _swinput_s @ 0x1800A4FD0 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Buffer[v4] );
    return swinput_s(Buffer, v4, Format, va);
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
