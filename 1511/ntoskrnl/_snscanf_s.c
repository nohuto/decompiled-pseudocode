/*
 * XREFs of _snscanf_s @ 0x140148DB4
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _sinput_s @ 0x14014C1C4 (_sinput_s.c)
 */

int snscanf_s(const char *Src, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sinput_s(Src, MaxCount, Format, (__int64 *)va);
  PopPoCoalescinCallback();
  return -1;
}
