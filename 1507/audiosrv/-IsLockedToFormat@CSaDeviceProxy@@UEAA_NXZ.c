/*
 * XREFs of ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x180027590
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsLockedToFormat(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 21) != 0;
}
