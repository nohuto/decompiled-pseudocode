/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C003DD60
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00075B8 (Usbh__TestPoint__Ulong.c)
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C00257E0 (UsbhReferenceListRemove.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003DC9C (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E308 (Usbh_OvercurrentDerefHubBusy.c)
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
