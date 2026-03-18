/*
 * XREFs of SafeDisableMDEV @ 0x1C0088CA0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C001611C (UpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvDisableMDEV @ 0x1C0069650 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(unsigned int a1)
{
  if ( gbMDEVDisabled )
    return 1LL;
  if ( (unsigned int)DrvDisableMDEV(*(struct _MDEV **)(gpDispInfo + 8), 1LL, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 1);
    return 1LL;
  }
  return 0LL;
}
