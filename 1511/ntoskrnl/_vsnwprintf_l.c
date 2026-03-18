/*
 * XREFs of _vsnwprintf_l @ 0x1401439D0
 * Callers:
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _woutput_l @ 0x1401467A8 (_woutput_l.c)
 *     _flsbuf @ 0x14014D0C0 (_flsbuf.c)
 */

int __cdecl vsnwprintf_l(wchar_t *DstBuf, size_t MaxCount, const wchar_t *Format, _locale_t Locale, va_list ArgList)
{
  int result; // eax
  int v7; // edi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = (char *)DstBuf;
    File._ptr = (char *)DstBuf;
    if ( MaxCount <= 0x3FFFFFFF )
      File._cnt = 2 * MaxCount;
    else
      File._cnt = 0x7FFFFFFF;
    result = woutput_l(&File, Format, Locale, ArgList);
    v7 = result;
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
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
