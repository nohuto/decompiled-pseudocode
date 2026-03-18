/*
 * XREFs of _vsnprintf_l @ 0x14014CDC0
 * Callers:
 *     _vsnprintf @ 0x14014CDA8 (_vsnprintf.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _flsbuf @ 0x14014FB84 (_flsbuf.c)
 *     _output_l @ 0x140150590 (_output_l.c)
 */

int __cdecl vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int result; // eax
  int v7; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = DstBuf;
    if ( MaxCount > 0x7FFFFFFF )
      LODWORD(MaxCount) = 0x7FFFFFFF;
    File._ptr = DstBuf;
    File._cnt = MaxCount;
    result = output_l(&File, Format, Locale, ArgList);
    v7 = result;
    if ( DstBuf )
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
    xHalFreeMessageTarget();
    return -1;
  }
  return result;
}
