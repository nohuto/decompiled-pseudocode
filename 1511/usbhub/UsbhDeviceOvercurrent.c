/*
 * XREFs of UsbhDeviceOvercurrent @ 0x1C004EAB0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrent(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9

  FdoExt((__int64)DeviceObject, a2, a3, a4);
  return UsbhDeviceOvercurrentPopup(DeviceObject, *(unsigned __int16 *)(a2 + 20), v6, v7);
}
