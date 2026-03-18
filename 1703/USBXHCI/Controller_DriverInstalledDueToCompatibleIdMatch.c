/*
 * XREFs of Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C004D448
 * Callers:
 *     Controller_SetDeviceDescription @ 0x1C004D100 (Controller_SetDeviceDescription.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

char __fastcall Controller_DriverInstalledDueToCompatibleIdMatch(_QWORD *a1)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v3; // rax
  NTSTATUS DevicePropertyData; // eax
  int v5; // edi
  const wchar_t **i; // rsi
  PVOID Data; // [rsp+28h] [rbp-240h]
  ULONG Type; // [rsp+40h] [rbp-228h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-224h] BYREF
  wchar_t Str1[256]; // [rsp+50h] [rbp-218h] BYREF

  v2 = 0;
  memset(Str1, 0, 0x1FEuLL);
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  *a1);
  DevicePropertyData = IoGetDevicePropertyData(
                         v3,
                         &DEVPKEY_Device_MatchingDeviceId,
                         0,
                         0,
                         0x1FCu,
                         Str1,
                         RequiredSize,
                         &Type);
  if ( DevicePropertyData < 0 )
  {
    LODWORD(Data) = DevicePropertyData;
    WPP_RECORDER_SF_d(a1[8], 3u, 3u, 0x8Eu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, Data);
  }
  else
  {
    v5 = 0;
    for ( i = (const wchar_t **)XhciCompatibleIdList; _wcsicmp(Str1, *i); ++i )
    {
      if ( (unsigned int)++v5 >= 2 )
        return v2;
    }
    return 1;
  }
  return v2;
}
