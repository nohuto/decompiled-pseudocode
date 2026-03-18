/*
 * XREFs of sscanf_s @ 0x1401497C4
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _sinput_s @ 0x14014C1C4 (_sinput_s.c)
 */

int sscanf_s(const char *Src, const char *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return sinput_s(Src, v4, Format, va);
  }
  else
  {
    PopPoCoalescinCallback();
    return -1;
  }
}
