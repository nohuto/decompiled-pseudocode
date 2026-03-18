/*
 * XREFs of ?GetValuesFromInf@@YAHPEAU_DEVICE_OBJECT@@KPEAUtagModeCap@@@Z @ 0x1C005DE90
 * Callers:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005DF50 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C005F240 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetValuesFromInf(struct _DEVICE_OBJECT *a1, __int64 a2, struct tagModeCap *a3)
{
  BOOL v4; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-238h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-230h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-228h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-218h] BYREF
  int v10; // [rsp+58h] [rbp-210h]
  wchar_t Dst[128]; // [rsp+150h] [rbp-118h] BYREF

  v4 = 0;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) < 0 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"PreferredMode");
  if ( ZwQueryValueKey(
         DeviceRegKey,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x100u,
         &ResultLength) >= 0 )
  {
    wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)&KeyValueInformation[v10], 0x7FuLL);
    if ( (unsigned int)ParseModeCap(Dst, a3, 0) )
    {
      if ( *(_DWORD *)a3 )
      {
        if ( *((_DWORD *)a3 + 1) )
          v4 = *((_DWORD *)a3 + 2) != 0;
      }
    }
  }
  ZwClose(DeviceRegKey);
  return v4;
}
