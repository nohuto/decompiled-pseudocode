/*
 * XREFs of ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x18000B840
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180007F40 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsLockedToFormat(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 21) != 0;
}
