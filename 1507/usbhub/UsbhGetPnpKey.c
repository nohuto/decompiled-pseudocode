/*
 * XREFs of UsbhGetPnpKey @ 0x1C00569BC
 * Callers:
 *     UsbhBuildUxdPnpId @ 0x1C00564D8 (UsbhBuildUxdPnpId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhGetPnpKey(__int64 a1, __int64 a2, const GUID *a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS result; // eax
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, void **); // rax
  int v9; // edx
  __int64 v10; // [rsp+30h] [rbp-61h] BYREF
  int v11; // [rsp+38h] [rbp-59h]
  void *v12; // [rsp+40h] [rbp-51h] BYREF
  int v13; // [rsp+48h] [rbp-49h]
  unsigned __int16 *Buffer; // [rsp+50h] [rbp-41h]
  __int64 *v15; // [rsp+58h] [rbp-39h]
  int v16; // [rsp+60h] [rbp-31h]
  __int64 v17; // [rsp+68h] [rbp-29h]
  int v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+88h] [rbp-9h]
  __int64 v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  __int64 v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  struct _UNICODE_STRING GuidString; // [rsp+B0h] [rbp+1Fh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+2Fh] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x20u,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
  result = RtlStringFromGUID(a3, &GuidString);
  if ( result >= 0 )
  {
    v10 = 0LL;
    v12 = &UsbhQueryUxdDevice;
    Buffer = GuidString.Buffer;
    v15 = &v10;
    v11 = 0;
    v13 = 4;
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
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, void **))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, void **))RtlQueryRegistryValues;
    result = SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\pnp", &v12);
    if ( result >= 0 )
    {
      if ( v10 && (v9 = v11) != 0 )
      {
        *a4 = v10;
        *a5 = v9;
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}
