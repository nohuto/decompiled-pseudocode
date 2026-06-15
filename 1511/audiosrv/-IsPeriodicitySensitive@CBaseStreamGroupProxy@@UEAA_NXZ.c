/*
 * XREFs of ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000C340
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000AF10 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000AFA0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBaseStreamGroupProxy::IsPeriodicitySensitive(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 30) != 0;
}
