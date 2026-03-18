/*
 * XREFs of ?QueryDockedOrientationRegistrySetting@@YAJPEAK@Z @ 0x1C01D0524
 * Callers:
 *     ?GetDockedOrientationValue@@YAKXZ @ 0x1C01D0340 (-GetDockedOrientationValue@@YAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall QueryDockedOrientationRegistrySetting(unsigned int *a1)
{
  __int64 result; // rax
  NTSTATUS v3; // ebx
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  void *DeviceRegKey; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v11[20]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v12[8]; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v13; // [rsp+8Ch] [rbp-74h]
  int v14; // [rsp+94h] [rbp-6Ch]
  _BYTE v15[192]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+180h] [rbp+80h] BYREF
  int v17; // [rsp+184h] [rbp+84h]
  int v18; // [rsp+188h] [rbp+88h]
  unsigned int v19; // [rsp+18Ch] [rbp+8Ch]

  v5 = 1;
  v4 = 3;
  result = DrvQueryDisplayConfig(3221225490LL, &v5, v11, &v4, v15, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v14 == 0x80000000 || v14 == 11 || v14 == 13 )
    {
      result = DrvDxgkGetMonitorDeviceObject(v12, v13, &Object, &DeviceObject);
      if ( (int)result < 0 )
        return result;
      if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x20019u, &DeviceRegKey) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"DockedOrientation");
        v3 = ZwQueryValueKey(
               DeviceRegKey,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x13u,
               &ResultLength);
        ZwClose(DeviceRegKey);
        ObfDereferenceObject(Object);
        if ( v3 != -1073741772 )
        {
          if ( v3 < 0 )
            return (unsigned int)v3;
          if ( v17 != 4 || v18 != 4 )
            return 3221225473LL;
          *a1 = v19;
        }
        return 0LL;
      }
      ObfDereferenceObject(Object);
    }
    return 3221225473LL;
  }
  return result;
}
