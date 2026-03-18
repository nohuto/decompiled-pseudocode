/*
 * XREFs of UsbhNotEnoughPowerPopup @ 0x1C004F5D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D730 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNotEnoughPowerPopup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  _DWORD *EventData; // rbx
  __int64 PortData; // rax

  Log((__int64)DeviceObject, 128, 1850758994, a2, 0LL);
  FdoExt((__int64)DeviceObject, v4, v5, v6);
  v9 = UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(unsigned __int16 *)(a2 + 20), v7, v8);
  EventData = v9;
  if ( v9 )
  {
    *(_DWORD *)v9 = 2;
    PortData = UsbhGetPortData((__int64)DeviceObject, *(_WORD *)(a2 + 20));
    if ( PortData )
      EventData[4] = *(_DWORD *)(PortData + 432);
    Log((__int64)DeviceObject, 128, 2003659088, a2, (__int64)EventData);
    LODWORD(v9) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v9;
}
