/*
 * XREFs of ?IsConnectedToLazyStreamGroup@CSaDeviceProxy@@UEAA_NXZ @ 0x180022AA0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsConnectedToLazyStreamGroup(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 23) != 0;
}
