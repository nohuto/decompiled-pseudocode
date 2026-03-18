/*
 * XREFs of ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C0031990 (DrvEnumDisplayDevices.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BB850 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetPruneFlag(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  void *RegistryHandleFromDeviceMap; // rsi
  __int16 v5; // [rsp+30h] [rbp-78h]
  ULONG Length; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[14]; // [rsp+58h] [rbp-50h] BYREF

  v1 = 0;
  v5 = gProtocolType;
  v2 = 1;
  Length = 52;
  RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(a1, 0LL, 0LL, 0LL, 0, 0LL, v5);
  if ( !RegistryHandleFromDeviceMap )
    return 1;
  RtlInitUnicodeString(&DestinationString, L"PruningMode");
  if ( ZwQueryValueKey(
         RegistryHandleFromDeviceMap,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         Length,
         &Length) >= 0 )
    v2 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  ZwClose(RegistryHandleFromDeviceMap);
  if ( v2 )
    return 1;
  return v1;
}
