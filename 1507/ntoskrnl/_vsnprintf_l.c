/*
 * XREFs of _vsnprintf_l @ 0x140171B44
 * Callers:
 *     _vsnprintf @ 0x140171B2C (_vsnprintf.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     _flsbuf @ 0x1401747D8 (_flsbuf.c)
 *     _output_l @ 0x140175228 (_output_l.c)
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
    PopPoCoalescinCallback();
    return -1;
  }
  return result;
}
