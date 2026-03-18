/*
 * XREFs of swscanf_s @ 0x140149C18
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404D07B8 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _swinput_s @ 0x14014C640 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
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
    return swinput_s(Src, v4, Format, va);
  }
  else
  {
    PopPoCoalescinCallback();
    return -1;
  }
}
