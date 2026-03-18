/*
 * XREFs of GreUpdateSharedDevCaps @ 0x1C007C8D8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     InitVideo @ 0x1C0089318 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00898A4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C007C8FC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall GreUpdateSharedDevCaps(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  vGetDeviceCaps((struct PDEVOBJ *)&v2, (struct _DEVCAPS *)WPP_MAIN_CB.SecurityDescriptor);
  return 1LL;
}
