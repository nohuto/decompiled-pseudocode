/*
 * XREFs of _snwscanf_s @ 0x1401527FC
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1406D6E38 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _swinput_s @ 0x140155F38 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalFreeMessageTarget();
  return -1;
}
