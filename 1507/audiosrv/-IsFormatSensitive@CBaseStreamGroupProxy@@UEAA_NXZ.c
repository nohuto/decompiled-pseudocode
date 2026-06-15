/*
 * XREFs of ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x1800264A0
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026C50 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026CE0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBaseStreamGroupProxy::IsFormatSensitive(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 33) != 0;
}
