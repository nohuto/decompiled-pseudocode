/*
 * XREFs of UsbhNotEnoughBandwidth_Popup @ 0x1C004FCC0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DEA0 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNotEnoughBandwidth_Popup(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _DWORD *EventData; // rbx
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject, a2, a3, a4);
  v8 = UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(unsigned __int16 *)(a2 + 20), v6, v7);
  EventData = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 1;
    PortData = UsbhGetPortData((__int64)DeviceObject, *(_WORD *)(a2 + 20));
    if ( PortData )
      EventData[2] = *(_DWORD *)(PortData + 436);
    LODWORD(v8) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v8;
}
