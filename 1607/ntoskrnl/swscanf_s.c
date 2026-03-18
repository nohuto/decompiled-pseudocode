/*
 * XREFs of swscanf_s @ 0x140152FA8
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x140407468 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632B70 (PiDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _swinput_s @ 0x1401559C8 (_swinput_s.c)
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
    xHalFreeMessageTarget();
    return -1;
  }
}
