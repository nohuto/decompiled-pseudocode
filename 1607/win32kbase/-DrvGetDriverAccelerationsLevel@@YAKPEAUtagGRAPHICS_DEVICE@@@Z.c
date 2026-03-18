/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006902C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  unsigned __int16 v4; // cx
  __int64 v5; // rcx
  HANDLE RegistryHandleFromDeviceMap; // r14
  ULONG Length; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+60h] [rbp-49h] BYREF
  WCHAR SourceString[20]; // [rsp+B0h] [rbp+7h] BYREF

  v1 = -1;
  Length = 66;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_16;
  v3 = *((_DWORD *)a1 + 40);
  if ( (v3 & 0x800000) != 0 )
    goto LABEL_16;
  if ( (v3 & 0x4000000) != 0 )
  {
    v4 = gProtocolType;
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !Object )
      goto LABEL_9;
    if ( (PVOID)PsGetCurrentProcess((unsigned __int16)gProtocolType) != gpepCSRSS && !UserIsCurrentProcessDwm(v5) )
    {
LABEL_16:
      v1 = 0;
      goto LABEL_17;
    }
  }
  v4 = gProtocolType;
LABEL_9:
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL, v4);
  if ( !RegistryHandleFromDeviceMap )
    goto LABEL_16;
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
    goto LABEL_16;
  if ( v1 > 5 )
    v1 = 5;
LABEL_17:
  if ( WPP_MAIN_CB.DeviceLock.Header.SignalState )
    v1 = 5;
  if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
    return 0;
  return v1;
}
