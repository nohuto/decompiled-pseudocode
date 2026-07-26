/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x1C00D2900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(struct _DEVICE_OBJECT **a1, _IRP *a2)
{
  return ndisDeviceControlHandler(a1[485], a1, a2);
}
