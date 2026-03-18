/*
 * XREFs of Controller_GetDeviceEnumerator @ 0x1C004C284
 * Callers:
 *     Controller_Create @ 0x1C004AA30 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0004C0C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_GetDeviceEnumerator(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rax
  NTSTATUS DeviceProperty; // eax
  __int64 v7; // [rsp+28h] [rbp-30h]
  NTSTATUS v8; // [rsp+28h] [rbp-30h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  a1);
  DeviceProperty = IoGetDeviceProperty(v4, DevicePropertyEnumeratorName, 0x10u, PropertyBuffer, &ResultLength);
  if ( DeviceProperty < 0 )
  {
    v8 = DeviceProperty;
    WPP_RECORDER_SF_d(a2, 2u, 3u, 0x5Eu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v8);
  }
  else if ( _wcsicmp(PropertyBuffer, L"ACPI") )
  {
    if ( !_wcsicmp(PropertyBuffer, L"URS") )
      v3 = 2;
  }
  else
  {
    v3 = 1;
  }
  LODWORD(v7) = v3;
  WPP_RECORDER_SF_L(a2, 4u, 3u, 0x5Fu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v7);
  return v3;
}
