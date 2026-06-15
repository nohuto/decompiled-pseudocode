/*
 * XREFs of ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x180022AB0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsLockedToFormat(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 22) != 0;
}
