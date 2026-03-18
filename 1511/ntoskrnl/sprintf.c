/*
 * XREFs of sprintf @ 0x140144F74
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _output_l @ 0x1401471F0 (_output_l.c)
 *     _flsbuf @ 0x14014D0C0 (_flsbuf.c)
 */

int sprintf(char *Dest, const char *Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format && Dest )
  {
    File._base = Dest;
    File._ptr = Dest;
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
    PopPoCoalescinCallback();
    return -1;
  }
}
