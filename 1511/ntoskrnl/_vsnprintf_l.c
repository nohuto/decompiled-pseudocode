/*
 * XREFs of _vsnprintf_l @ 0x140143AC4
 * Callers:
 *     _vsnprintf @ 0x140143AAC (_vsnprintf.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _output_l @ 0x1401471F0 (_output_l.c)
 *     _flsbuf @ 0x14014D0C0 (_flsbuf.c)
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
