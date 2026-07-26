/*
 * XREFs of NdisWdfDeviceWmiHandler @ 0x1C00CCC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisWdfDeviceWmiHandler(struct _NDIS_MINIPORT_BLOCK *a1, _IRP *a2)
{
  return ndisWMIDispatch(a1->DeviceObject, a1, a2);
}
