/*
 * XREFs of sscanf_s @ 0x140152B54
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _sinput_s @ 0x14015554C (_sinput_s.c)
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
    xHalFreeMessageTarget();
    return -1;
  }
}
