/*
 * XREFs of SafeEnableMDEV @ 0x1C0087B60
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0021358 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvEnableMDEV @ 0x1C0057B68 (DrvEnableMDEV.c)
 */

__int64 __fastcall SafeEnableMDEV(unsigned int a1)
{
  if ( !gbMDEVDisabled )
    return 1LL;
  if ( gbGDIOn && (unsigned int)DrvEnableMDEV(*(__int64 **)(gpDispInfo + 8), 1LL, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 0);
    return 1LL;
  }
  return 0LL;
}
