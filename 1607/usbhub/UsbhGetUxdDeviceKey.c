/*
 * XREFs of UsbhGetUxdDeviceKey @ 0x1C005729C
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0056C34 (UsbhBuildUxdDeviceKey.c)
 *     WPP_RECORDER_SF_SS @ 0x1C0057A54 (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdDeviceKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v6; // rcx
  int v7; // edx
  int v8; // r8d
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  int v11; // [rsp+28h] [rbp-79h]
  void *v12; // [rsp+48h] [rbp-59h] BYREF
  int v13; // [rsp+50h] [rbp-51h]
  __int128 *v14; // [rsp+58h] [rbp-49h]
  __int64 v15; // [rsp+60h] [rbp-41h]
  int v16; // [rsp+68h] [rbp-39h]
  __int64 v17; // [rsp+70h] [rbp-31h]
  int v18; // [rsp+78h] [rbp-29h]
  __int64 v19; // [rsp+80h] [rbp-21h]
  int v20; // [rsp+88h] [rbp-19h]
  __int64 v21; // [rsp+90h] [rbp-11h]
  __int64 v22; // [rsp+98h] [rbp-9h]
  int v23; // [rsp+A0h] [rbp-1h]
  __int64 v24; // [rsp+A8h] [rbp+7h]
  int v25; // [rsp+B0h] [rbp+Fh]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v27; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+37h]
  wchar_t v29; // [rsp+E0h] [rbp+3Fh]

  v27 = *(_OWORD *)L"VVVVPPPPRRRR";
  v29 = aVvvvpppprrrr[12];
  v28 = *(_QWORD *)L"RRRR";
  v6 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_5b132266348c32d7b0c29b24875d7db7_Traceguids);
  UsbhBuildUxdDeviceKey((__int64)v6, a2, (wchar_t *)&v27, a4);
  v13 = 4;
  v12 = &UsbhQueryUxdDevice;
  v14 = &v27;
  v15 = a3;
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_SS(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      19,
      v11,
      (__int64)L"usbhub\\uxd_control\\devices",
      (__int64)&v27);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
  return SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\devices", &v12);
}
