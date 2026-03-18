/*
 * XREFs of _vsprintf_l @ 0x140173ACC
 * Callers:
 *     vsprintf @ 0x140173B44 (vsprintf.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     _flsbuf @ 0x1401747D8 (_flsbuf.c)
 *     _output_l @ 0x140175228 (_output_l.c)
 */

int __cdecl vsprintf_l(char *DstBuf, const char *Format, _locale_t a3, va_list ArgList)
{
  int v5; // eax
  bool v6; // sf
  int v7; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && DstBuf )
  {
    File._base = DstBuf;
    File._ptr = DstBuf;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v5 = output_l(&File, Format, a3, ArgList);
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
    PopPoCoalescinCallback();
    return -1;
  }
}
