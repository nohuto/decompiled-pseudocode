/*
 * XREFs of UsbhNestedHubsPopup @ 0x1C004F560
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D7D0 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNestedHubsPopup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  PVOID EventData; // r10

  Log((__int64)DeviceObject, 128, 1817531202, a2, 0LL);
  FdoExt((__int64)DeviceObject, v4, v5, v6);
  v9 = UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(unsigned __int16 *)(a2 + 20), v7, v8);
  if ( v9 )
  {
    *(_DWORD *)v9 = 10;
    Log((__int64)DeviceObject, 128, 2003659084, a2, (__int64)v9);
    LODWORD(v9) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v9;
}
