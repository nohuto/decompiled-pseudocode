/*
 * XREFs of ndisDeviceControlIrpHandler @ 0x1C009B9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisDeviceControlIrpHandler(struct _DEVICE_OBJECT *a1, _IRP *a2)
{
  return ndisDeviceControlHandler(a1, a1->DeviceExtension, a2);
}
