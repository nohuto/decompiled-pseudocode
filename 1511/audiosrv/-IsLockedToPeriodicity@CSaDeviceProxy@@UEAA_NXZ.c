/*
 * XREFs of ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x18000B850
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180007F40 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsLockedToPeriodicity(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 20) != 0;
}
