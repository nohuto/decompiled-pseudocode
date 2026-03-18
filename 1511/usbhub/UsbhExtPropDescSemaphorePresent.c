/*
 * XREFs of UsbhExtPropDescSemaphorePresent @ 0x1C003FD6C
 * Callers:
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0040318 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00403E0 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     UsbhGetPdoRegistryParameter @ 0x1C00073F4 (UsbhGetPdoRegistryParameter.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0009514 (UsbhSetPdoRegistryParameter.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

bool __fastcall UsbhExtPropDescSemaphorePresent(PDEVICE_OBJECT DeviceObject)
{
  ULONG v3; // [rsp+30h] [rbp-58h]
  int Data; // [rsp+40h] [rbp-48h] BYREF
  WCHAR SourceString[24]; // [rsp+48h] [rbp-40h] BYREF

  Data = 0;
  wcscpy(SourceString, L"ExtPropDescSemaphore");
  LOBYTE(v3) = 1;
  if ( (int)UsbhGetPdoRegistryParameter(DeviceObject, SourceString, &Data, 4u, 0LL, 0LL, v3) >= 0 )
    return 1;
  Data = 1;
  return (int)UsbhSetPdoRegistryParameter(DeviceObject, SourceString, 4u, &Data, 4u) < 0;
}
