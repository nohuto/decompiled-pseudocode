/*
 * XREFs of _snwscanf_s @ 0x14015223C
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x14054207C (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1406D6D00 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _swinput_s @ 0x1401559C8 (_swinput_s.c)
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
