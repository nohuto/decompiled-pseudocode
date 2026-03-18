/*
 * XREFs of _snwscanf_s @ 0x140176F2C
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x14057FA0C (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140712080 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     _swinput_s @ 0x14017A6BC (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  PopPoCoalescinCallback();
  return -1;
}
