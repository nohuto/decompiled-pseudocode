/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006496C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  HANDLE RegistryHandleFromDeviceMap; // rsi
  ULONG Length; // [rsp+48h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+68h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = -1;
  Length = 66;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_13;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                  (unsigned __int16 *)a1,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  gProtocolType);
  if ( !RegistryHandleFromDeviceMap )
    goto LABEL_13;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( ZwQueryValueKey(
         RegistryHandleFromDeviceMap,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         Length,
         &Length) >= 0 )
    v1 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  ZwClose(RegistryHandleFromDeviceMap);
  if ( v1 == -1 )
  {
LABEL_13:
    v1 = 0;
  }
  else if ( v1 > 5 )
  {
    v1 = 5;
  }
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v1 = 5;
  if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
    return 0;
  return v1;
}
