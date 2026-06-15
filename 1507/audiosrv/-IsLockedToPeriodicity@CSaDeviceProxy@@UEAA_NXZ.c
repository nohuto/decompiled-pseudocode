/*
 * XREFs of ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x1800275A0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsLockedToPeriodicity(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 20) != 0;
}
