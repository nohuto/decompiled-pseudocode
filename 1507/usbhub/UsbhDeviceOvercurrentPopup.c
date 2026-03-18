/*
 * XREFs of UsbhDeviceOvercurrentPopup @ 0x1C003DC9C
 * Callers:
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003DD60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrent @ 0x1C004EB50 (UsbhDeviceOvercurrent.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0029550 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E308 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D7D0 (UsbhBuildWmiConnectionNotification.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrentPopup(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rsi
  __int64 PortData; // rax
  _DWORD *EventData; // rax
  __int64 v13; // rax

  v4 = a2;
  FdoExt((__int64)DeviceObject, a2, a3, a4);
  v9 = FdoExt((__int64)DeviceObject, v6, v7, v8);
  PortData = UsbhGetPortData((__int64)DeviceObject, v4);
  if ( PortData )
  {
    *(_DWORD *)(PortData + 2832) = 500;
    *(_WORD *)(PortData + 2836) = 256;
    UsbhDispatch_PindicatorEvent((__int64)DeviceObject, PortData, 4, (__int64)(v9 + 346));
  }
  EventData = (_DWORD *)UsbhBuildWmiConnectionNotification(DeviceObject, v4);
  if ( EventData )
  {
    *EventData = 3;
    return WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  else
  {
    v13 = UsbhGetPortData((__int64)DeviceObject, v4);
    return Usbh_OvercurrentDerefHubBusy(DeviceObject, v13, 0LL);
  }
}
