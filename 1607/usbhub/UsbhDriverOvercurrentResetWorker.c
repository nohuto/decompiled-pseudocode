/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C003E2B0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00059E0 (Usbh__TestPoint__Ulong.c)
 *     UsbhReferenceListRemove @ 0x1C0009434 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C000B670 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E1EC (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E858 (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhDriverOvercurrentResetWorker(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 PortData; // rax

  v5 = a2;
  FdoExt((__int64)DeviceObject, a2, a3, a4);
  if ( (int)Usbh__TestPoint__Ulong((__int64)DeviceObject, 8u, 0, v5) < 0
    || (int)UsbhReferenceListAdd((__int64)DeviceObject, a3, 1466196847) < 0 )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, v5);
    Usbh_OvercurrentDerefHubBusy(DeviceObject, PortData, 0LL);
  }
  else
  {
    UsbhDeviceOvercurrentPopup(DeviceObject, (unsigned __int16)v5, v7, v8);
    UsbhReferenceListRemove((__int64)DeviceObject, a3);
  }
}
