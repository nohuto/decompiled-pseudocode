/*
 * XREFs of ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00E37A0
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C00E34F0 (IsMouseDeviceOnIgnoreList.c)
 *     IsLegacyTouchPadDevice @ 0x1C01302A0 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C00E38AC (GetPointerDevicePDO.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetDeviceParent @ 0x1C01CC574 (GetDeviceParent.c)
 */

__int64 __fastcall IsHIDMouse(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v3; // ebx
  __int128 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  ULONG BufferLength; // [rsp+30h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  GUID v12; // [rsp+50h] [rbp-28h]

  v3 = 0;
  if ( (int)GetPointerDevicePDO(a2) >= 0 )
  {
    BufferLength = 0;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, 0, 0LL, &BufferLength) == -1073741789 )
    {
      v4 = (__int128 *)Win32AllocPool(BufferLength, 1886417749LL);
      if ( v4 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, BufferLength, v4, &BufferLength) >= 0 )
        {
          v11 = *v4;
          v12 = GUID_BUS_TYPE_HID;
          v7 = v11 - *(_QWORD *)&GUID_BUS_TYPE_HID.Data1;
          if ( (_QWORD)v11 == *(_QWORD *)&GUID_BUS_TYPE_HID.Data1 )
            v7 = *((_QWORD *)&v11 + 1) - *(_QWORD *)v12.Data4;
          if ( !v7 )
          {
            GetDeviceParent(DeviceObject, a1);
            v3 = 1;
          }
        }
        Win32FreePool(v4, v5, v6);
      }
    }
    ObfDereferenceObject(DeviceObject);
  }
  return v3;
}
