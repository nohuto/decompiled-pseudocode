/*
 * XREFs of ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHH@Z @ 0x18008FDFC
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026C50 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026CE0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18008F800 (-OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupSensitivityToPeriodicityChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18008F860 (-OnStreamGroupSensitivityToPeriodicityChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity(CSaDeviceProxy *this, int a2, int a3)
{
  *((_DWORD *)this + 23) += a2;
  *((_DWORD *)this + 22) += a3;
  *((_QWORD *)this + 12) = GetTickCount();
}
