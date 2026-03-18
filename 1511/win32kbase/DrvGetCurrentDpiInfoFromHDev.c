/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C0047008
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0046F34 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0047150 (NtUserGetDpiForMonitor.c)
 *     CitGetMonitorInfo @ 0x1C004A3A0 (CitGetMonitorInfo.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0088654 (-SetDPIinSetup@@YAJXZ.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00BB1A4 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(_OWORD *a1, __int64 a2)
{
  *(_OWORD *)a2 = a1[155];
  *(_OWORD *)(a2 + 16) = a1[156];
  *(_OWORD *)(a2 + 32) = a1[157];
  *(_OWORD *)(a2 + 48) = a1[158];
  *(_OWORD *)(a2 + 64) = a1[159];
  *(_OWORD *)(a2 + 80) = a1[160];
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
